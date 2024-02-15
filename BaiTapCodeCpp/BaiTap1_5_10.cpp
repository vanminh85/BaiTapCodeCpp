#include <iostream>

double ChiaDoiTinhCanBa(double num) {
    double epsilon = 0.001; // Độ chính xác mong muốn
    double canDuoi = 0.0;
    double canTren = num;

    while (true) {
        // Chia đôi khoảng chứa giá trị của nghiệm
        double m = (canDuoi + canTren) / 2; 
        // Công thức tính sai số
        double saiSo = m * m * m - num;
        // Nếu giá trị m tìm được thỏa mãn điều kiện về sau số thì kết thúc lặp
        if (saiSo <= epsilon && saiSo >= -epsilon) {
            return m;
        }
        // Nếu không thỏa điều kiện về sai số thì tiếp tục lặp
        else if (m * m * m > num) { 
            canTren = m;
        }
        else {
            canDuoi = m;
        }
    }
}

//int main() {
//    double num;
//    std::cout << "Nhap so thuc duong : ";
//    std::cin >> num;
//
//    double kq1 = ChiaDoiTinhCanBa(num); // Kết quả từ phương pháp chia đôi
//    double kq2 = cbrt(num); // Kết quả từ hàm cbrt trong cmath
//
//    std::cout << "Ket qua cua phuong phap chia doi: " << kq1 << std::endl;
//    std::cout << "Ket qua cua Cmath : " << kq2 << std::endl;
//
//    return 0;
//}