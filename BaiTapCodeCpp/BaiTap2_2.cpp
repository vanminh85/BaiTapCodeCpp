//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//int n, m;
//int** matran;
//// int** Matran là mảng được cấp phát động, không cần khai báo kích thước ma trận.
//
//// Hàm in ma trận được nhập vào.
//void InMatran(int** matran, int row, int col) {
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < col; j++) {
//            cout << matran[i][j] << "\t";
//        }
//        cout << endl;
//    }
//}
//
//void NhapMatran() {
//    cout << "Nhap so hang cua ma tran: ";
//    cin >> n;
//    cout << "Nhap so cot cua ma tran: ";
//    cin >> m;
//    // Tạo ma trận
//    matran = new int* [n];
//    for (int i = 0; i < n; i++) {
//        matran[i] = new int[m];
//    }
//    // Nhập giá trị của ma trận
//    cout << "Nhap phan tu :" << endl;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cout << "Phan tu [" << i << "][" << j << "] = ";
//            cin >> matran[i][j];
//        }
//    }
//    // Xuất ma trận được nhập vào.
//    cout << "Ma tran duoc nhap vao :" << endl;
//    InMatran(matran, n, m);
//}
//// Hàm kiểm tra phần tử tại hàng i cột j có phải là điểm yên hay không.
//bool KiemTraDiemYen(int** matran, int row, int col, int i, int j) {
//    for (int x = 0; x < col; x++) {
//        if (matran[i][j] > matran[i][x])
//            return false;
//    }
//
//    for (int y = 0; y < row; y++) {
//        if (matran[i][j] < matran[y][j])
//            return false;
//    }
//
//    return true;
//}
//
//void XuatDiemYen(int** matran) {
//    // Xuất điểm yên của ma trận.
//    int soDiemYen = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (KiemTraDiemYen(matran, n, m, i, j)) {
//                cout << "Diem yen la :" << matran[i][j] << " tai [" << i << "][" << j << "]" << endl;
//                soDiemYen++;
//            }
//        }
//    }
//    cout << "Tong so diem yen la :" << soDiemYen << endl;
//}
//
//int main() {
//    NhapMatran();   
//    XuatDiemYen(matran);    
//    // Xóa bỏ vùng nhớ đã được cấp phát cho ma trận.
//    for (int i = 0; i < n; i++) {
//        delete[] matran[i];
//    }
//    delete[] matran;
//
//    return 0;
//}