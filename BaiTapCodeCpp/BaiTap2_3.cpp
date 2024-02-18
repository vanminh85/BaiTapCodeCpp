#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void removeDuplicatesInPlace(vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) {
        return;
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != nums[j]) {
            nums[++j] = nums[i];
        }
    }

    nums.resize(j + 1);
}

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

    removeDuplicatesInPlace(numbers);

    cout << "Mang sau khi xoa cac so trung nhau in-place: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}