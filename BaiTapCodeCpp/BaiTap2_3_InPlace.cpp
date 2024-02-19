//#include <iostream>
//#include <vector>
//using namespace std;
//
//void removeDuplicatesInPlace(vector<int>& nums) {
//    int n = nums.size();
//    if (n <= 1) {
//        return;
//    }
//
//    int j = 0;
//    for (int i = 0; i < n; i++) {
//        if (nums[i] != nums[j]) {
//            nums[++j] = nums[i];
//        }
//    }
//
//    nums.resize(j + 1);
//}
//
//int main() {
//    vector<int> numbers = { 1, 2, 2, 3, 4, 4, 5 };
//
//    removeDuplicatesInPlace(numbers);
//
//    cout << "Mang sau khi xoa cac so trung nhau in-place: ";
//    for (int num : numbers) {
//        cout << num << " ";
//    }
//
//    return 0;
//}