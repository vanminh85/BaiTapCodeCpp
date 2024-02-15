// Bài tập 3.3.3 Viết hàm tính số tổ hợp C_n^k = n!/(k!(n - k)!) (n >= 0, 0 <= k <= n) bằng cách
// "tách bạch, ngây thơ" và cách "tích hợp, tinh vi" (xem Bài 3.2) 
// - Viết riêng hàm tính giai thừa và dùng hàm này khi tính C_n^k 
// - Phân tích, biến đổi,... để tính C_n^k.	So sánh ưu khuyến điểm của hai cách làm.

#include <iostream>

unsigned long long GiaiThua(int n) {
    // Giai thừa của 0 bằng 1
    if (n == 0) {
        return 1;
    }
    // Sử dụng đệ qui để tính giai thừa n! = n * (n-1)!
    return n * GiaiThua(n - 1);
}
// Tính tổ hợp theo phương pháp "tách bạch ngây thơ"
unsigned long long ToHopTachBach(int n, int k) {
    if (n < k || n < 0 || k < 0) {
        printf("Khong tinh duoc ! Vi n phai lon hon hoac bang k. ");
        return 0;
    }
    else
        return GiaiThua(n) / ( GiaiThua(k) * GiaiThua(n - k) );
}
// Tính tổ hợp theo phương pháp "tích hợp tinh vi"
unsigned long long ToHopTichHop(int n, int k) {
    if (n < k || n < 0 || k < 0) {
        printf("Khong tinh duoc ! Vi n phai lon hon hoac bang k. ");
        return 0;
    }
    // Tính tử số là n!
    unsigned long long tuSo = GiaiThua(n);
    // Tính mẫu số là k!(n - k)!
    unsigned long long mauSo = GiaiThua(k) * GiaiThua(n - k);
    // Kết quả tích tổ hợp chập k của n phần tử
    return tuSo / mauSo;
}

//int main() {
//    int n, k;
//
//    // Nhập giá trị
//    std::cout << "Nhap gia tri n: ";
//    std::cin >> n;
//    std::cout << "Nhap gia tri k: ";
//    std::cin >> k;
//
//    // Kết quả tính tổ hợp theo tách bạch, ngây thơ
//    std::cout << "To hop theo tach bach :" << ToHopTachBach(n, k) << std::endl;
//
//    // Kết quả tính tổ hợp theo tách bạch, ngây thơ
//    std::cout << "To hop theo tich hop :" << ToHopTichHop(n, k) << std::endl;
//
//    return 0;
//}