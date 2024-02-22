#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void XoaPhanTuTrungOutOfPlace(int nums[], int& size) {
    unordered_set<int> mangPhu; // Mảng phụ chứa phần tử trùng
    vector<int> result; // Mảng kết quả không chứ phần tử trùng

    for (int i = 0; i < size; i++) {
        if (mangPhu.find(nums[i]) == mangPhu.end()) {
            mangPhu.insert(nums[i]);
            result.push_back(nums[i]);
        }
    }

    // Trở lại mảng với phần tử không trùng lặp
    size = 0;
    for (int num : result) {
        nums[size++] = num;
    }
}

int main() {
    // Mảng nhập vào
    int mangSo[] = { 1, 2, 2, 3, 4, 4, 5, 4, 6, 7, 8, 9, 0, 0, 4 };
    int size = sizeof(mangSo) / sizeof(mangSo[0]); // Kích cỡ mảng

    XoaPhanTuTrungOutOfPlace(mangSo, size);

    cout << "Mang sau khi xoa tat ca cac so trung nhau: ";
    for (int i = 0; i < size; i++) {
        cout << mangSo[i] << " ";
    }

    return 0;
}