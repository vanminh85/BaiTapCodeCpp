#include <iostream>
#include <cmath>
using namespace std;

//void main() {
//	int a[] = { 1, 2, 3, 4 };
//	int* p = a;
//	*(p + 2) = 5;
//
//	printf("Gia tri phan tu thu 0: %d %d\n", a[0], *p);
//	printf("Gia tri phan tu thu 0: %x %x\n", &a[0], a);
//	printf("Gia tri phan tu thu 2: %d %d\n", a[2], *(a + 2));
//	printf("Gia tri phan tu thu 2: %x %x\n", &a[2], p + 2);
//	printf("What's this: %d %d\n", p[0], p[2]);
//
//	char s[] = "hello";
//	char* r = s;
//	r += 2;
//	*r = 'h'; r[1] = 'i';
//	r[-1] = 'i'; r[2] = '\0';
//	printf("What's this ?: %x %x %s\n", s, r, s);
//}

//void main() {
//	int a;
//	int& b = a;
//	int* p = &a;
//	a = 10;
//	b = 20; 
//	*p = 30;
//	printf("Gia tri cua a: %d %d %d\n", a, b, *p);


//void func1(int v1) {
//	v1++;
//}
//
//void func2(int &v2) {
//	v2++;
//}
//
//void func3(int *v3) {
//	(*v3)++;
//}
//
//int main() {
//	int a, b, c;
//	a = b = c = 1;
//
//	printf("Gia tri truoc: %d %d %d\n", a, b, c);
//	func1(a); func2(b); func3(&c);
//	printf("Gia tri sau: %d %d %d\n", a, b, c);
//}