// Bài tập 3.3.2 Viết hàm tìm ước số chung lớn nhất của hai số nguyên dương. 
// Sau đó dùng hàm này để tìm ước số chung lớn nhất trong n số nguyên dương.

#include <iostream>
using namespace std;

// Lập hàm tìm ước chung lớn nhất của 2 số nguyên bất kỳ.
int UocChungLonNhatHaiSoNguyen(int num1, int num2) {
    int uocChungLonNhat = 1;
    // Bắt đầu tìm số i nhỏ nhất trong 2 số nhập vào. Lặp cho đến khi i còn lớn hơn 0.
    // Bớt đi 1 đơn vị của i sau mỗi vòng lặp.
    for (int i = min(num1, num2); i > 0; --i) {
        if (num1 % i == 0 && num2 % i == 0) 
            // Nếu i là ước số chung thì gán giá trị ước chung lớn nhất
            return uocChungLonNhat = i; 
    }
}

//int main() {
//    // Yêu cầu nhập 2 số nguyên bất kỳ
//    int num1;
//    int num2;
//    std::cout << "Nhap so nguyen thu nhat: ";
//    std::cin >> num1;
//    std::cout << "Nhap so nguyen thu hai: ";
//    std::cin >> num2;
//    std::cout << "Uoc chung lon nhat la: " << UocChungLonNhatHaiSoNguyen(num1, num2);
//
//    return 0;
//}