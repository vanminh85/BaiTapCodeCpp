//#include <iostream>
//
//// Định nghĩa cấu trúc một nút trong danh sách liên kết
//struct NODE {
//    int data;
//    NODE* next;
//};
//
//// Hàm tính tổng các số dương trong danh sách liên kết sử dụng kỹ thuật lặp
//int sumPos(NODE* head) {
//    int sum = 0;
//    NODE* current = head;
//
//    // Duyệt qua danh sách liên kết
//    while (current != nullptr) {
//        // Nếu giá trị của nút hiện tại là số dương, cộng vào tổng
//        if (current->data > 0) {
//            sum += current->data;
//        }
//        current = current->next; // Di chuyển sang nút tiếp theo
//    }
//
//    return sum;
//}
//
//// Hàm tính tổng các số dương trong danh sách liên kết sử dụng kỹ thuật đệ qui
//int sumPosRecursive(NODE* head) {
//    // Trường hợp cơ sở: danh sách rỗng
//    if (head == nullptr) {
//        return 0;
//    }
//
//    // Nếu giá trị của nút hiện tại là số dương, cộng vào tổng và gọi đệ qui cho nút tiếp theo
//    if (head->data > 0) {
//        return head->data + sumPosRecursive(head->next);
//    }
//
//    // Nếu giá trị của nút hiện tại không phải là số dương, chỉ gọi đệ qui cho nút tiếp theo
//    return sumPosRecursive(head->next);
//}
//
//// Hàm tạo một nút mới trong danh sách liên kết
//NODE* createNode(int value) {
//    NODE* newNode = new NODE;
//    newNode->data = value;
//    newNode->next = nullptr;
//    return newNode;
//}
//
//// Hàm thêm một nút vào cuối danh sách liên kết
//void addNode(NODE*& head, int value) {
//    NODE* newNode = createNode(value);
//
//    if (head == nullptr) {
//        head = newNode;
//    }
//    else {
//        NODE* current = head;
//        while (current->next != nullptr) {
//            current = current->next;
//        }
//        current->next = newNode;
//    }
//}
//
//// Hàm giải phóng bộ nhớ của danh sách liên kết
//void deleteList(NODE*& head) {
//    while (head != nullptr) {
//        NODE* temp = head;
//        head = head->next;
//        delete temp;
//    }
//}
//
//int main() {
//    // Khởi tạo danh sách liên kết
//    NODE* head = nullptr;
//
//    // Thêm các nút vào danh sách liên kết
//    addNode(head, -2);
//    addNode(head, 5);
//    addNode(head, 8);
//    addNode(head, -3);
//    addNode(head, 10);
//
//    // In ra danh sách liên kết
//    std::cout << "Danh sach lien ket: ";
//    NODE* current = head;
//    while (current != nullptr) {
//        std::cout << current->data << " ";
//        current = current->next;
//    }
//    std::cout << std::endl;
//
//    // Tính tổng các số dương sử dụng kỹ thuật lặp
//    std::cout << "Tong cac so duong su dung lap: " << sumPos(head) << std::endl;
//
//    // Tính tổng các số dương sử dụng kỹ thuật đệ qui
//    std::cout << "Tong cac so duong su dung de qui: " << sumPosRecursive(head) << std::endl;
//
//    // Giải phóng bộ nhớ của danh sách liên kết
//    deleteList(head);
//
//    return 0;
//}
