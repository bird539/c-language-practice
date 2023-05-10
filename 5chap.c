//5장 2023.03.30
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
int main(void)
{
	//1-----------
	int num1, num2, big, small;
	printf("임의의 정수 입력1 :");
	scanf("%d", &num1);
	printf("임의의 정수 입력2 :");
	scanf("%d", &num2);
	big = num1 > num2 ? num1 : num2;
	small = num1 < num2 ? num1 : num2;
	printf("몫은 %d 이고 나머지는 %d 입니다.\n", big / small, big % small);

	//2------------
	int num, year, month, day;
	printf("일자 입력 >> ");
	scanf("%d", &num);
	printf("입력한 날짜: %d", num);
	year = (double)(num / 365);
	month = (num % 365) / 30;
	day = (num % 365) % 30;
	printf("\n%d년 %d월 %d일\n", year, month, day);

	//3-----------
	double cm;
	printf("길이를 센티미터로 입력(소수) >> ");
	scanf("%lf", &cm);
	printf("%lf 센티미터: %.3lf 피트\n", cm, cm / 30.48);

	//4----------
#define PI 3.14
	double radius, volume, surface;
	radius = 8.32;

	volume = (4.0 / 3.0) * PI * radius * radius * radius;
	surface = 4.0 * PI * radius * radius;

	printf("구의 체적은 %.3lf 입니다.\n", volume);
	printf("구의 표면적은 %.3lf 입니다.\n", surface);

	//5---------
	int n1, n2, n3, s1, s2, s3;
	printf("세 개의 정수 입력 >> ");
	scanf("%d %d %d", &n1, &n2, &n3);
	s1 = n1 < n2 ? n2 : n1;
	s2 = n2 < n3 ? n3 : n2;
	s3 = s1 < s2 ? s2 : s1;
	printf("가장 큰 수: %d\n", s3);

	//6---------
	int height, weight;
	printf("키 입력: ");
	scanf("%d", &height);
	printf("몸무게 입력: ");
	scanf("%d", &weight);
	printf("당신은 %s 입니다\n", (weight <= (height - 100) * 9.0 ? "정상" : "비정상"));

	//7---------
	double year1, interest;
	printf("예치 기간 입력(년) >> ");
	scanf("%lf", &year1);
	interest = 1000000 * 0.045 * year1 + 1000000;
	printf("이율: 4.5%% 총금액: %.2lf\n", interest);

	//8---------
	double year2, interest1;
	printf("예치 기간 입력(년) >> ");
	scanf("%lf", &year2);
	interest1 = pow((1.0 + 0.045), year2) * 1000000;
	printf("이율: 4.5%% 총금액: %.2lf\n", interest1);

	//9--------
	double x1, y1, x2, y2;
	x1 = 3.20;
	y1 = 4.60;
	x2 = -8.30;
	y2 = -2.30;
	printf("(%.2lf %.2lf),(%.2lf %.2lf)\n", x1, y1, x2, y2);
	printf("중심좌표: (%.2lf %.2lf)\n", (x1 + x2) / 2, (y1 + y2) / 2);

	//10-------
	double x11, x22, b, a, c, bb, chack1, chack2;
	a = 2;
	b = 3;
	c = -4;
	bb = sqrt(b * b - 4 * a * c);
	x11 = (-b + bb) / (2 * a);
	x22 = (-b - bb) / (2 * a);
	chack1= 2 * x11 * x11 + 3 * x11 - 4;
	chack2 = 2 * x22 * x22 + 3 * x22 - 4;

	printf("해1 %lf \n", x11);
	printf("검증 계산 %.3lf\n", chack1);
	printf("해2 %lf \n", x22);
	printf("검증 계산 %.3lf\n", chack2);


	return 0;
}
