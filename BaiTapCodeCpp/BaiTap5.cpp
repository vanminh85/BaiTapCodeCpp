// Viết hàm để tính giá trị sin (𝑥) với 𝑥 tính theo radian (không được dùng thư viện).
// So sánh kết quả với hàm sin trong thư viện chuẩn cmath của C / C++.

#include <iostream>
#include <cmath>
using namespace std;

double TinhSin(double x, int n) {
    double tong = 0.0;
    double soHang = x; // Số hạng đầu tiên của khai triển

    // Tính toán giá trị gần đúng của sin bằng khai triển Maclaurin
    for (int i = 1; i <= n; i++) {
        tong += soHang;
        soHang *= (-1) * (x * x) / ((2 * i) * (2 * i + 1));
    }

    return tong;
}

//int main() {
//    double x; // Giá trị x
//    int k; // Cấp khai triển
//
//    std::cout << "Nhap gia tri x : ";
//    std::cin >> x;
//    std::cout << "Nhap cap khai trien Maclaurin : ";
//    std::cin >> k;
//
//    // Tính giá trị sin(x) bang khai trien Maclaurin
//    double xapXiSin = TinhSin(x, k);
//
//    // Tính sin theo cmathSin
//    double cmathSin = sin(x);
//
//    // Xuất kết quả
//    std::cout << "Dung khai trien Maclaurin de tinh sin(" << x << ")  = " << xapXiSin << std::endl;
//    std::cout << "Dung cmath để tính sin(" << x << ")  = " << cmathSin << std::endl;
//
//    return 0;
//}