//#include <iostream>
//#include <vector>
//using namespace std;
//
//void XoaPhanTuTrungInPlace(vector<int>& mangSo) {
//    int n = mangSo.size();
//    if (n <= 1) {
//        return;
//    }
//
//    for (int i = 0; i < n; i++) {
//        int j = i + 1;
//        while (j < n) {
//            if (mangSo[j] == mangSo[i]) {
//                // Xóa phần tử trùng
//                mangSo.erase(mangSo.begin() + j);
//                // Giảm kích thước mảng sau khi xóa phần tử
//                n--;
//            }
//            else {
//                j++;
//            }
//        }
//    }
//}
//
//int main() {
//    vector<int> mangSo = { 1, 2, 2, 3, 4, 4, 5, 4, 6, 7, 8, 9, 0, 0, 4, 5, 6 };
//
//    XoaPhanTuTrungInPlace(mangSo);
//
//    cout << "Mang sau khi xoa cac so trung nhau in-place: ";
//    for (int soNguyen : mangSo) {
//        cout << soNguyen << " ";
//    }
//
//    return 0;
//}