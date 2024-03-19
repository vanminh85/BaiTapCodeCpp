#include <iostream>
#include <string>
#include <stack>

using namespace std;

// Định nghĩa cấu trúc nút của cây biểu thức số học
struct Node {
    string data;
    Node* left;
    Node* right;
};

// Hàm tạo một nút mới trong cây
Node* createNode(string data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Hàm duyệt trước cây (preorder traversal) và in ra biểu thức dạng tiền tố
void printPrefix(Node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        printPrefix(root->left);
        printPrefix(root->right);
    }
}

// Hàm duyệt sau cây (postorder traversal) và in ra biểu thức dạng hậu tố
void printPostfix(Node* root) {
    if (root != nullptr) {
        printPostfix(root->left);
        printPostfix(root->right);
        cout << root->data << " ";
    }
}

int main() {
    // Xây dựng cây biểu thức số học
    Node* root = createNode("-");
    root->left = createNode("+");
    root->right = createNode("!");

    root->left->left = createNode("1");
    root->left->right = createNode("*");
    root->right->left = createNode("+");
    root->right->right = createNode("5");

    root->left->right->left = createNode("2");
    root->left->right->right = createNode("3");

    root->right->left->left = createNode("4");

    // In biểu thức dạng tiền tố
    cout << "Biểu thức dạng tiền tố: ";
    printPrefix(root);
    cout << endl;

    // In biểu thức dạng hậu tố
    cout << "Biểu thức dạng hậu tố: ";
    printPostfix(root);
    cout << endl;

    return 0;
}
