#include <iostream>
using namespace std;

struct LIST
{
    int data[1000];
    int length;
};

void addFirst(LIST& l, int k)
{
    if (l.length < 1000)
    {
        int i = l.length; // Tham chiếu đến vị trí hiện tại của phần tử cuối cùng

        // Dời tất cả các phần tử sang phải từ vị trí hiện tại đến vị trí đầu tiên
        while (i > 0)
        {
            l.data[i] = l.data[i - 1];
            i--;
        }

        // Thêm phần tử mới vào đầu danh sách
        l.data[0] = k;
        l.length++; // Tăng độ dài của danh sách

        cout << "Phan tu " << k << " da duoc them vao dau danh sach." << endl;
    }
    else
    {
        cout << "Danh sach da day, khong the them phan tu." << endl;
    }
}

//int main()
//{
//    LIST myList;
//    myList.length = 0;
//
//    addFirst(myList, 10); // Thêm phần tử 10 vào đầu danh sách
//    addFirst(myList, 20); // Thêm phần tử 20 vào đầu danh sách
//
//    cout << "Danh sach sau khi them phan tu:" << endl;
//    for (int i = 0; i < myList.length; i++)
//    {
//        cout << myList.data[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}