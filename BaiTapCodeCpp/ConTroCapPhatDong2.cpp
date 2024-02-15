#define _CRT_SECURE_NO_WARNINGS  // Add this line at the beginning of your code to disable the deprecation warning
#include <stdio.h>
#include <stdlib.h>
void fill_pascal(int* a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i][0] = a[i][i] = 1;
	for (int i = 1; i < n; i++)
		for (int j = 1; j < i; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
}
void output_pascal(int** a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("%-5d", *(*(a + i) + j));
		printf("\n");
	}
}
//int main()
//{
//	int** a;
//	int n;
//	printf("Nhap so dong: ");
//	scanf("%d", &n);
//
//	a = new int* [n]; // a = (int**)malloc(n * sizeof(int*));
//	for (int i = 0; i < n; i++)
//		a[i] = new int[i + 1]; // a[i] = (int*)malloc((i+1) *
//	sizeof(int);
//
//	fill_pascal(a, n);
//	output_pascal(a, n);
//
//	for (int i = 0; i < n; i++)
//		delete[] a[i]; // free(a[i]);
//	delete[] a; // free(a);
//}