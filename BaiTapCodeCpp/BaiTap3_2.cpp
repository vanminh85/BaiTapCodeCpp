#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Định nghĩa struct để lưu trữ giá trị của một số nguyên (number) và 
// số lần xuất hiện của nó trong túi (count)
struct IntCount {
    int number;
    int count;
};

class IntBag {
private:
    // Lưu trữ số lần xuất hiện của mỗi số nguyên
    unordered_map<int, int> counts; 

public:
    // Thêm một số nguyên vào túi
    void add(int num) {
        counts[num]++;
    }

    // Xóa một số nguyên khỏi túi
    void remove(int num) {
        if (counts.find(num) != counts.end()) {
            counts[num]--;
            if (counts[num] == 0) {
                counts.erase(num);
            }
        }
    }

    // Xóa hết một số nguyên khỏi túi
    void removeAll(int num) {
        counts.erase(num);
    }

    // Đếm số lần xuất hiện của một số nguyên trong túi
    int count(int num) {
        return counts[num];
    }

    // Kiểm tra hai túi có bằng nhau không
    bool equals(const IntBag& other) const {
        return counts == other.counts;
    }

    // Kiểm tra xem một túi có là túi con của túi khác không
    // pair sẽ lưu trữ một cặp giá trị của counts.
    // Trong đó pair.first là giá trị số nguyên, và pair.second số lần xuất hiện trong túi.
    bool isSubsetOf(const IntBag& other) const {
        for (const auto& pair : counts) {
            if (other.counts.find(pair.first) == other.counts.end() 
                || other.counts.at(pair.first) < pair.second) {
                return false;
            }
        }
        return true;
    }

    // Hợp hai túi
    IntBag unionWith(const IntBag& other) const {
        IntBag result = *this;
        for (const auto& pair : other.counts) {
            result.counts[pair.first] += pair.second;
        }
        return result;
    }

    // In các số nguyên trong túi cùng với số lần xuất hiện
    void print() const {
        for (const auto& pair : counts) {
            for (int i = 0; i < pair.second; ++i) {
                cout << pair.first << " ";
            }
        }
        cout << endl;
    }
};

//int main() {
//    IntBag bag1;
//    bag1.add(1);
//    bag1.add(2);
//    bag1.add(1);
//    bag1.add(3);
//    cout << "Bag 1: ";
//    bag1.print();
//
//    IntBag bag2;
//    bag2.add(1);
//    bag2.add(2);
//    bag2.add(1);
//    bag2.add(3);
//    cout << "Bag 2: ";
//    bag2.print();
//
//    cout << "Bag 1 co bang Bag 2 hay khong? " << (bag1.equals(bag2) ? "Co" : "Khong") << endl;
//
//    IntBag bag3;
//    bag3.add(1);
//    bag3.add(2);
//    cout << "Phan tu cua Bag 3: ";
//    bag3.print();
//
//    cout << "Bag 3 co phai la con cua Bag 1 hay khong? " << (bag3.isSubsetOf(bag1) ? "Co" : "Khong") << endl;
//
//    IntBag unionBag = bag1.unionWith(bag2);
//    cout << "Hop cua Bag 1 va Bag 2: ";
//    unionBag.print();
//
//    return 0;
//}
