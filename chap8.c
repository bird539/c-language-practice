#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	//1
	/*
	int rrr[4];
	printf("4���� ���� �Է� >> 2 5 4 7\n");
	scanf("%d %d %d %d", &rrr[0], &rrr[1], &rrr[2], &rrr[3]);
	for (int i = 0; i < 4; i++) {
		printf("%d ", rrr[i]);
	}
	puts("");


	*/

	//2
	/*
	double data[] = { -5.34,3.67,19.76,28.76,35.63 };
	int length = (int)(sizeof(data)) / (sizeof(data[0]));
	printf("�迭 ���� ���� ���\n");
	for (int i = 0; i < length; i++) {
		printf("%.2lf ", data[i]);
	}
	puts("");
	*/

	//3
	/*
	int data[] = { 3,21,35,57,24,82,8 };
	int length = (int)(sizeof(data)) / (sizeof(data[0]));
	printf("�迭 ���� ���� ��� \n");
	for (int i = 0; i < length; i++) {
		data[i] += 10;
		printf("%d ", data[i]);
	}
	puts("");
	*/

	//4
	/*
	printf("�� �迭�� ������ �迭�� ���� ���� ���\n");
	int a[] = { 32,56,7,8,24 };
	int b[] = { 3,21,35,57,24,82,8 };
	int a_length = (int)(sizeof(a)) / (sizeof(a[0]));
	int b_length = (int)(sizeof(b)) / (sizeof(b[0]));
	int ab_length = a_length + b_length;
	int c[20];
	for (int i = 0; i < a_length; i++) {
		c[i] = a[i];
	}
	for (int i = a_length; i < ab_length; i++) {
		c[i] = b[i-a_length];
	}
	for (int i = 0; i < ab_length; i++) {
		printf("%d ", c[i]);
	}
	puts("");
	*/

	//5
	/*
	printf("b[] = ");
	int a[] = { 4, 7, 9, 3, 6 };
	int b[] = { 10,20,30,40,50,60 };
	int length_a = (int)(sizeof(a)) / (sizeof(a[0]));
	int length_b = (int)(sizeof(b)) / (sizeof(b[0]));
	for (int i = 0; i < length_a; i++) {
		b[i] = a[i];
	}
	for (int i = 0; i < length_b; i++) {
		printf("%d ", b[i]);
	}
	puts("");
	*/

	//6
	/*
	double num[] = { 98.56,78.62,78.69,89.32,95.29 };
	int len_num = (int)(sizeof(num)) / (sizeof(num[0]));
	double sum =0;
	for (int i = 0; i < len_num; i++) {
		sum += num[i];
		printf("%.2lf ", num[i]);
	}
	puts("");
	printf("�迭�� ���� %.3lf�̸� ����� %.3lf�Դϴ�.\n", sum, sum / len_num);
	*/

	//7
	/*
	printf("0���� 9������ ������ �Է��Ͻʽÿ�.\n");
	int a[20];
	int b[10];
	for (int i = 0; i < 20; i++) {
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < 10; j++) {
		b[j] = 0;
	}
	for (int j = 0; j < 20; j++) {
		b[a[j]] += 1;
	}
	int n = 0, n2 = 0;
	for (int i = 0; i < 10; i++) {
		if ((int)b[i] > n2) {
			n = i;
			n2 = b[i];
		}
		else {
			continue;
		}
	}
	printf("\n0~9 �� ���� ���� ���� ���� %d�̰�, %d�� ���Խ��ϴ�.\n", n,n2);
	*/
	
	//8
/*
	printf("��� ���� ������ ���� �Է��ϸ� �� ���� ������ �˷��帳�ϴ�.\n");
	printf("2024 2 : �Է� >> ");
	int month_last[] = { 28,30,31,29 };
	int year, month,n;
	scanf("%d %d", &year, &month);
	if (month == 4 || month == 6 || month == 9 || month == 11) {
		n = month_last[1];
	}
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 10 || month == 12) {
		n = month_last[2];
	}
	else if (month ==2 && ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		n = month_last[3];
	} else if (month == 2) {
		n = month_last[0];
	}
	printf("%d�� %d���� ������ %d�Դϴ�.\n", year, month, n);
	*/

	//9
	/*
	double data[10];
	for (int i = 0; i < 10; i++) {
		data[i] = (double)1 / ((i + 2)*(i + 3));
	}
	for (int i = 0; i < 10; i++) {
		printf("data[%d] = %.3lf\n", i, data[i]);
	}
	*/
	
	//10
	int score[][4] = { {97,90,88,95},{76,89,75,83},{60,70,88,82},{83,89,92,85},{75,73,72,78} };


	return 0;

}
