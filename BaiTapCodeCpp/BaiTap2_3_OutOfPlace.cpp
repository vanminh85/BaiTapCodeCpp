#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void removeDuplicatesOutOfPlace(vector<int>& nums) {
    unordered_set<int> seen;
    vector<int> result;

    for (int num : nums) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            result.push_back(num);
        }
    }

    nums = result;
}

int main() {
    vector<int> numbers = { 1, 2, 2, 3, 4, 4, 5 };

    removeDuplicatesOutOfPlace(numbers);

    cout << "Mang sau khi xoa cac so trung nhau out-of-place: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}