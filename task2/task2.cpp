// task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#define ARR_SIZE 10

int main()
{
	int arr[][ARR_SIZE] = {
		{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0 },
		{ 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
		{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0 },
		{ 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
		{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0 },
		{ 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
		{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0 },
		{ 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
		{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0 },
		{ 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
	};
	int *pi = *arr;
	int n = sizeof(arr) / sizeof(int);
	for (int i = 0; i < n; ++i, ++pi) {
		printf("%d%c", *pi, (i + 1) % ARR_SIZE ? '\0' : '\n');
	}
	system("pause");
    return 0;
}

