#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1
/*
int main(void) {
	int num = 100;
	int* print;
	print = &num;
	printf("%d %p\n", num, &print);
	return 0;
}
*/

//2
/*
int main(void) {
	int a[5] = { 1,2,3,4,5 };
	int* p;
	p = &a[2];
	printf("%d %d %d %d %d \N", p[-2], p[-1], p[0], p[1], p[2]);
}
*/

//3
/*
int main(void) {
	double a[5] = {5.5, 3.0, 1.5, 3.3, 2.1};
	double* p = &a[0];
	double small = 0;
	int index = 0;
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		double n = *p++;
		if (small == 0) {
			small = n;
		}
		if (n < small) {
			small = n;
			index = i;
		}
	}
	printf("최소 값, 첨자: %d 값: %.1lf \n", index, small);
}
*/

//4-??
/*
int main(void) {

	int value = 0x000000FF;
	int* pi = &value;
	short* ps = &value;
	printf("%d\n", *pi);
	printf("%d %d\n", *ps, *(ps+1)+15);


	return 0;
}
*/

//5
/*
int main(void) {

	int arr[3][4] = {
		{11,22,33,44},
		{55,66,77,88},
		{11,66,77,88}
	};
	int(*p)[4] = arr;
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++) {
			printf("arr[%d][%d] = %d  ", i, j, *(p[i] + j));
		}
		puts("");
	}


	return 0;
}
*/
//6
/*
int main(void) {
	int a[3][5] = {
		{1,2,3,4,5},
		{10,20,30,40,50},
		{100,200,300,400,500}
	};
	int(*p)[3] = a;
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		for (int j = 0; j < sizeof(a[0]) / sizeof(a[0][0]); j++) {
			printf("a[%d][%d] = %3d  ", i, j, *(p[i] + j));
		}
		puts("");
	}

	return 0;
}
*/
//7
/*
int main(void) {
	double n;
	int* p = &n;
	printf("두 정수 입력 : ");
	scanf("%d %d", p, (p + 1));
	printf("%d + %d = %d\n", *p, *(p + 1), *p + *(p + 1));
	printf("%d - %d = %d\n", *p, *(p + 1), *p - *(p + 1));
	printf("%d * %d = %d\n", *p, *(p + 1), *p * *(p + 1));
	printf("%d %% %d = %d\n", *p, *(p + 1), *p % *(p + 1));

	return 0;
}
*/
//8
/*
int main(void) {
	int a[] = { 11,22,33,44,55,66 };

	int* p = &a[0];
	int* q = &a[5];
	for (int i = 0; i < 3; i++) {
		printf("%d ", *q--);
	}
	for (int i = 0; i <= 2; i++) {
		printf("%d ", *(p+2-i));
	}

	puts("");
	return 0;
}
*/