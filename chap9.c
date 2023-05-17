#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1
/*
	double change_cm(double inch);
int main(void) {

	printf("거리를 인치로 입력하세요. -> ");
	double a_inch;
	scanf("%lf", &a_inch);
	printf("입력한 %lf인치는 %lf센티미터이다.\n", a_inch, change_cm(a_inch));

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

	printf("1에서 n까지의 합을 구할 n을 입력하시오. >> ");
	int n;
	scanf("%d", &n);
	printf("1에서 %d까지의 합: %d\n", n, pluse(n));


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
	printf("섭씨온도 0.5씩 증가값에 대한 화씨온도 출력\n");
	for (double i = 0.0; i <= 100.0;) {
		printf("섭씨온도= %.2lf   화씨온도= %.2lf\n", i, C_to_F(i));
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
	printf("세 개의 정수 중 가장 큰 정수를 출력합니다.\n정수 3개 입력 >>> ");
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("입력한 세 개 정수 %d, %d, %d 중에서 가장 큰 정수는 %d입니다.\n", a, b, c, bigNum(a,b,c));
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

	printf("정수 입력 >> ");
	int n1;
	scanf("%d", &n1);
	printf("%d의 다섯 제곱은 %d입니다.\n", n1, square(n1)*cube(n1));

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

	printf("원 반지름 입력 >>> ");
	double n;
	scanf("%lf", &n);
	printf("반지름이 %.2lf인 원의 면적은 %.3lf입니다.\n", n, area(n));
	printf("반지름이 %.2lf인 원의 길이는 %.3lf입니다.\n",n, circumference(n));

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
	printf("이자를 계산할 다음 세 항목을 입력하세요.\n");
	printf("1. 원금 -> "); scanf("%lf", &money);
	printf("2. 년 -> "); scanf("%lf", &year);
	printf("3. 이율(%%) -> "); scanf("%lf", &inter);

	printf("단리 계산 총액은 %.3lf입니다.\n",simple_inter(money, year, inter * 0.01) );
	printf("복리 계산 총액은 %.3lf입니다.\n",compound_inter(money, year, inter * 0.01) );
	

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

	printf("1에서 %d 사이에서 한 정수가 결정되었습니다.\n", MAX);
	printf("기회는 최대 %d 번입니다.\n", i);
	printf("이 정수는 무엇일까요? 입력해 보세요. : ");

	while (scanf("%d", &input)) {
		if (input > guess && i > 1)
		{
			printf("입력한 수 %d보다 작습니다. 다시 입력하세요. : ", input);
			i -= 1;
		}
		else if (input < guess && i > 1)
		{
			printf("입력한 수 %d보다 큽니다. 다시 입력하세요. : ", input);
			i -= 1;
		}
		else if (i <= 1) {
			printf("모든 기회를 쓰셨습니다.");
			break;
		}
		else if (input == guess && i>1){
			puts("정답입니다.");
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
		printf("1부터 %2d까지 합: %5d\n", i, rePluse(i));
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
	printf("6의 0승부터 10승까지 구하는 프로그래밍 입니다.\n");
	for (int i = 0; i <= 10; i++) {
		printf("%2d의 %2d승: %9d\n", 6, i, X_x_Y(6, i));
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

	printf("10진수를 입력하면 16진수를 출력합니다.\n");
	printf("정수 입력 >> ");
	int n;
	scanf("%d", &n);
	printf("%d의 16진수는? ",n);
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
	printf("\n\n배열 복사 후\nb[] = ");
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
		printf("두 배열은 같다.\n");
	}
	else {
		printf("두 배열은 다르다.\n");
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
	printf("로또 당첨 번호:");
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