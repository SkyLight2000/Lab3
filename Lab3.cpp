//// Lab3.cpp : Defines the entry point for the console application.
////
//

#include "stdafx.h"
#include <Windows.h>
#define ARR_SIZE 10

int main()
{
	SetConsoleOutputCP(1251);
	int arr[ARR_SIZE];
	printf("Введите числа: ");
	for (int i = 0; i < ARR_SIZE; i++) {
		scanf_s("%d", &arr[i]);
	}
	int m = 0;
	int c = 0;
	for (int i = 0; i <= ARR_SIZE; i++) {
		if (!arr[i]) {
			c++;
		}
		else {
			m = m < c ? c : m;
			c = 0;
		}
	}
	printf("Количество нулей в массиве подряд: %d\n", m);
	system("pause");
	return 0;
}