#include <iostream>

// Định nghĩa cấu trúc một nút trong cây nhị phân
struct NODE {
    int data;
    NODE* left, * right;
};

// Hàm tính tổng các số dương trong cây nhị phân sử dụng kỹ thuật đệ qui
int sumPos(NODE* root) {
    // Trường hợp cơ sở: nút gốc là nullptr
    if (root == nullptr) {
        return 0;
    }

    // Nếu giá trị của nút gốc là số dương, cộng vào tổng và gọi đệ qui cho cây con trái và cây con phải
    int sum = 0;
    if (root->data > 0) {
        sum += root->data;
    }
    sum += sumPos(root->left);
    sum += sumPos(root->right);

    return sum;
}

// Hàm tạo một nút mới trong cây nhị phân
NODE* createNode(int value) {
    NODE* newNode = new NODE;
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

//int main() {
//    // Tạo cây nhị phân
//    NODE* root = createNode(5);
//    root->left = createNode(-3);
//    root->right = createNode(8);
//    root->left->left = createNode(2);
//    root->left->right = createNode(7);
//    root->right->left = createNode(6);
//    root->right->right = createNode(-4);
//
//    // Tính tổng các số dương trong cây nhị phân sử dụng kỹ thuật đệ qui
//    int result = sumPos(root);
//    std::cout << "Tong cac so duong trong cay nhi phan: " << result << std::endl;
//
//    return 0;
//}
