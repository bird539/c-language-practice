#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1
/*
	double change_cm(double inch);
int main(void) {

	printf("�Ÿ��� ��ġ�� �Է��ϼ���. -> ");
	double a_inch;
	scanf("%lf", &a_inch);
	printf("�Է��� %lf��ġ�� %lf��Ƽ�����̴�.\n", a_inch, change_cm(a_inch));

	return 0;
}

double change_cm(double inch) {

	double cm = inch * 2.54;
	return cm;

}
*/

//2
/*
int main(void) {
	int pluse(int num);

	printf("1���� n������ ���� ���� n�� �Է��Ͻÿ�. >> ");
	int n;
	scanf("%d", &n);
	printf("1���� %d������ ��: %d\n", n, pluse(n));


	return 0;
}
int pluse(int num){
	int sum = 0;
	for (int i = 0; i <= num; i++) {
		sum += i;
	}
	return sum;
}
*/

//3
/*
int main(void) {
	double C_to_F(double C);
	printf("�����µ� 0.5�� �������� ���� ȭ���µ� ���\n");
	for (double i = 0.0; i <= 100.0;) {
		printf("�����µ�= %.2lf   ȭ���µ�= %.2lf\n", i, C_to_F(i));
		i += 0.5;
	}

	return 0;
}
double C_to_F(double C) {
	double F = C * 1.8 + 32;
	return F;
}
*/

//4
/*
int main(void) {
	int bigNum(int a, int b, int c);
	printf("�� ���� ���� �� ���� ū ������ ����մϴ�.\n���� 3�� �Է� >>> ");
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("�Է��� �� �� ���� %d, %d, %d �߿��� ���� ū ������ %d�Դϴ�.\n", a, b, c, bigNum(a,b,c));
	return 0;
}
int bigNum(int a, int b, int c) {
	int s1 = b > c ? b : c;
	int s = a > b ? a : b;
	int f = s1 > s ? s1 : s;
	return f;
}
*/

//5
/*
int main(void) {
	int square(int n);
	int cube(int num);

	printf("���� �Է� >> ");
	int n1;
	scanf("%d", &n1);
	printf("%d�� �ټ� ������ %d�Դϴ�.\n", n1, square(n1)*cube(n1));

	return 0;
}

int cube(int num) {
	int square(int n);
	int s = square(num) * num;
	return s;
}
int square(int n) {
	int s = n * n;
	return s;
}
*/

//6
/*
int main(void) {
	double area(double r);
	double circumference(double r);

	printf("�� ������ �Է� >>> ");
	double n;
	scanf("%lf", &n);
	printf("�������� %.2lf�� ���� ������ %.3lf�Դϴ�.\n", n, area(n));
	printf("�������� %.2lf�� ���� ���̴� %.3lf�Դϴ�.\n",n, circumference(n));

	return 0;
}
#define PI 3.14
double area(double r) {
	double s = PI * r * r;
	return s;
}

double circumference(double r) {
	double s = 2 * PI * r;
	return s;
}
*/

//7
/*
#include <math.h>
int main(void) {
	double simple_inter(double m, double y, double i);
	double compound_inter(double m, double y, double i);

	double money, year, inter;
	printf("���ڸ� ����� ���� �� �׸��� �Է��ϼ���.\n");
	printf("1. ���� -> "); scanf("%lf", &money);
	printf("2. �� -> "); scanf("%lf", &year);
	printf("3. ����(%%) -> "); scanf("%lf", &inter);

	printf("�ܸ� ��� �Ѿ��� %.3lf�Դϴ�.\n",simple_inter(money, year, inter * 0.01) );
	printf("���� ��� �Ѿ��� %.3lf�Դϴ�.\n",compound_inter(money, year, inter * 0.01) );
	

}
double simple_inter(double a, double n, double r) {
	double s = a * (1 + r *n);
	return s;
}

double compound_inter(double a, double n, double r) {
	double s = a * pow((1 + r), n);
	return s;
}
*/

//8
/*
#include <stdlib.h>
#include <time.h>
#define MAX 100
int main(void) {
	int guess, input;
	srand((long)time(NULL));
	guess = rand() % MAX + 1;
	int i = 7;

	printf("1���� %d ���̿��� �� ������ �����Ǿ����ϴ�.\n", MAX);
	printf("��ȸ�� �ִ� %d ���Դϴ�.\n", i);
	printf("�� ������ �����ϱ��? �Է��� ������. : ");

	while (scanf("%d", &input)) {
		if (input > guess && i > 1)
		{
			printf("�Է��� �� %d���� �۽��ϴ�. �ٽ� �Է��ϼ���. : ", input);
			i -= 1;
		}
		else if (input < guess && i > 1)
		{
			printf("�Է��� �� %d���� Ů�ϴ�. �ٽ� �Է��ϼ���. : ", input);
			i -= 1;
		}
		else if (i <= 1) {
			printf("��� ��ȸ�� ���̽��ϴ�.");
			break;
		}
		else if (input == guess && i>1){
			puts("�����Դϴ�.");
			break;
		}
	}

	return 0;
}
*/

//9
/*
int main(void) {
	int rePluse(int n);
	for (int i = 1; i <= 10; i++) {
		printf("1���� %2d���� ��: %5d\n", i, rePluse(i));
	}
	return 0;
}
int rePluse(int n) {
	if (n <= 1)
		return 1;
	else
		return (n + rePluse(n - 1));
}
*/


//10
/*
int main(void) {
	int X_x_Y(int x, int y);
	printf("6�� 0�º��� 10�±��� ���ϴ� ���α׷��� �Դϴ�.\n");
	for (int i = 0; i <= 10; i++) {
		printf("%2d�� %2d��: %9d\n", 6, i, X_x_Y(6, i));
	}

	return 0;
}

int X_x_Y(int x, int y) {
	if (y <= 0)
		return 1;
	else
		return (x * X_x_Y(x, y - 1));
}
*/

//11
/*
int main(void) {
	int n_to_x(int n, int x);

	printf("10������ �Է��ϸ� 16������ ����մϴ�.\n");
	printf("���� �Է� >> ");
	int n;
	scanf("%d", &n);
	printf("%d�� 16������? ",n);
	n_to_x(n, 16);
	puts("");
}

int n_to_x(int n, int x) {
	if (n == 0) {
		return;
	}
	n_to_x(n / x, x);
	if (n % x <= 10)
		printf("%d", n % x);
	else
		printf("%c", (n % x) + 55);
}
*/

//12
/*
int main(void) {
	void copyarray(int from[], int to[], int n);

	int a[] = { 4,7,9,3,6 };
	int b[] = { 10,20,30,40,50,60 };
	int sa = (int)sizeof(a) / sizeof(a[0]);
	int sb = (int)sizeof(b) / sizeof(b[0]);

	printf("a[] =");
	for (int i = 0; i < sa; i++) {
		printf(" %d",a[i]);
	}
	printf("\nb[] =");
	for (int i = 0; i < sb; i++) {
		printf(" %d", b[i]);
	}
	printf("\n\n�迭 ���� ��\nb[] = ");
	copyarray(a, b, sb);
	puts("");

	return 0;
}

void copyarray(int from[], int to[], int n1) {

	for (int i = 0; i < n1-1; i++){
		int a = 0;
		a = from[i];
		to[i] = a;
	}

	for (int i = 0; i < n1; i++) {
		printf(" %d", to[i]);
	}
}
*/

//13
/*
int main(void) {
	int isequalarray(int a[], int b[], int n);

	int a[5]; int b[5];
	int sab = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < sab; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < sab; i++) {
		scanf("%d", &b[i]);
	}
	if (isequalarray(a, b, sab) == 1) {
		printf("�� �迭�� ����.\n");
	}
	else {
		printf("�� �迭�� �ٸ���.\n");
	}

	return 0;
}
int isequalarray(int a[], int b[], int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == b[i]) {
			s = 1;
		}
		else {
			break;
		}
	}
	return s;
}
*/

//14
/*
#include <stdlib.h>
#include <time.h>
duplicate(int num, int lotto[], int cnt);
int main(void) {
	int guess;
	srand((long)time(NULL));
	guess = rand() % 45 + 1;
	int lotto[6];
	int i = 0;
	while (i<6) {
		int nn = rand() % 45 + 1;
		if (i == 0) {
			lotto[i] = nn;
			i += 1;
		}
		else {
			if (duplicate(nn, lotto, i) == 1) {
				continue;
			}
			else if (duplicate(nn, lotto, i) == 0) {
				lotto[i] = nn;
				i += 1;
			}
		}
	}
	printf("�ζ� ��÷ ��ȣ:");
	for (int i = 0; i < 6; i++) {
		printf(" %d",lotto[i]);
	}
	puts("");

	return 0;
}
int duplicate(int num, int lotto[], int cnt) {
	int s = 0;
	for (int i = 0; i < cnt; i++) {
		if (lotto[i] == num) {
			s = 1;
		}
	}
	return s;
}
*/