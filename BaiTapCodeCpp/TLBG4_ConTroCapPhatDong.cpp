#include <stdio.h>
#include <stdlib.h>

void input(double a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Nhap so thu %d: ", i + 1);
		scanf_s("%lf", &a[i]);
	}
}
double mean(double* a, int n)
{
	double s = 0;
	for (int i = 0; i < n; i++)
		s += *(a + i);
	return s / n;
}
int main()
{
	double* a;
	int n;
	printf("Ban muon lam viec voi bao nhieu so? ");
	scanf_s("%d", &n);

	a = (double*)malloc(n * sizeof(double)); // a = new double[n];
	if (a == NULL)
		printf("Khong cap phat bo nho duoc!!!");
	else
	{
		input(a, n);
		printf("Trung binh cac so la: %.2lf", mean(a, n));

		free(a); // delete[] a;
	}
}