#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	//1
	/*
	printf("3.4+4.5와 같이 두 실수와 연산자를 붙여서 입력 >> ");
	double x, y;
	char op;
	scanf("%lf%c%lf", &x, &op, &y);
	if (op == '+')
		printf("%.2lf + %.2lf = %.2lf\n", x, y, x + y);
	else if (op == '-')
		printf("%.2lf - %.2lf = %.2lf\n", x, y, x - y);
	else if (op == '*')
		printf("%.2lf * %.2lf = %.2lf\n", x, y, x * y);
	else if (op == '/')
		printf("%.2lf / %.2lf = %.2lf\n", x, y, x / y);
	else
		printf("잘못된 입력값\n");
		*/

	//2
	/*
	printf("좌표 x, y 입력 >> ");
	double x, y, s;
	scanf_s("%lf %lf", &x, &y);

	printf("좌표 (%lf, %lf): ", x, y);
	if (x > 0 && y > 0)
		printf("1사분면\n");
	else if (x < 0 && y > 0)
		printf("2사분면\n");
	else if (x < 0 && y < 0)
		printf("3사분면\n");
	else
		printf("4사분면\n");
	*/

	//3 - 절대값의 합을 구하는 것
	/*
	printf("두 실수 입력 >> ");
	double x, y;
	scanf("%lf %lf", &x, &y);
	if (x < 0)
		printf("결과값: %lf\n", -(x)+y);
	else if (y < 0)
		printf("결과값: %lf\n", -(y)+x);
	else
		printf("결과값: %lf\n", x + y);
		*/

	//4
	/*
	printf("신장(cm)과 몸무게(kg)를 입력하세요: ");
	double height, weight, bmi, d;
	scanf("%lf %lf", &height, &weight);

	d = height / 100 * height / 100;
	bmi = weight / d;
	printf("신장: %.2lf, 몸무게: %.2lf, BMI지수: %.2lf ", height,weight,bmi);

	if (bmi >= 40)
		printf("고도 비만\n");
	else if (bmi >= 35 && bmi < 40)
		printf("중증도 비만\n");
	else if (bmi >= 30 && bmi < 35)
		printf("비만\n");
	else if (bmi >= 25 && bmi < 30)
		printf("과체중\n");
	else if (bmi >= 18.5 && bmi < 25)
		printf("정상\n");
	else
		printf("저체중\n");
	*/

	//5
	/*
	printf("성별을 먼저 입력하세요. 1(남자), 2(여자): ");
	double gender, height, weight, avg_wight, obesity;

	scanf("%lf", &gender);
	printf("신장(cm)과 몸무게(kg)를 입력하세요: ");
	scanf("%lf %lf", &height, &weight);

	char obesity_judg[] = "";
	if (gender == 1)
		avg_wight = (height / 100) * (height / 100) * 22;
	else if (gender == 2)
		avg_wight = (height / 100) * (height / 100) * 21;
	else
		printf("잘못된 성별입력");

	obesity = (weight / avg_wight) * 100;

	printf("현재 신장: %.2lf, 체중: %.2lf, 표준 체중: %.2lf\n", height, weight, avg_wight);
	printf("비만지수: %.2lf, 판정: ", obesity);
	if (obesity <= 90)
		printf("저체중\n");
	else if (obesity > 90)
		printf("정상\n");
	else if (obesity > 110)
		printf("체중 과다\n");
	else if (obesity > 120)
		printf("비만\n");
	else
		printf("잘못된 입력\n");
		*/


	//6
	/*
	printf("소득 입력 >> ");
	int income, tex;
	scanf("%d",&income);
	if (income <= 12000000)
		tex = 6;
	else if (income > 12000000 && income <= 46000000)
		tex = 15;
	else if (income > 46000000 && income <= 88000000)
		tex = 24;
	else if (income > 88000000 && income <= 150000000)
		tex = 35;
	else if (income > 150000000 && income <= 300000000)
		tex = 38;
	else if (income > 300000000 && income <= 500000000)
		tex = 40;
	else
		tex = 42;
	printf("현재 종합소득: %d, 세율: %d%%\n", income, tex);
	*/

	//7
	/*
	printf("년도의 월(month)을 입력하세요. >> ");
	int sector_month, sector;
	scanf("%d", &sector_month);

	if (sector_month >= 1 && sector_month <= 3)
		sector = 1;
	else if (sector_month >= 4 && sector_month <= 6)
		sector = 2;
	else if (sector_month >= 7 && sector_month <= 9)
		sector = 3;
	else if (sector_month >= 10 && sector_month <= 12)
		sector = 4;
	else
		printf("잘못된 입력");

	printf("%d월(month)은 %d분기 입니다.\n", sector_month, sector);
	*/

	//8
	/*
	printf("년도입력: ");
	int year;
	scanf("%d", & year);
	printf("%d 년은 ",year);
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		printf("윤년입니다.\n");
	else
		printf("윤년이 아닙니다.\n");
	*/


	//9
	/*
	printf("년과 월을 다음과 같이 입력하면 그 달의 말일을 알려드립니다.\n2003 3 : 입력 >> ");
	int year, month, last_day;
	scanf("%d %d", &year, &month);
	switch (month)
	{
	case 4:
	case 6:
	case 9:
	case 11:
		last_day = 30;
		break;

	case 1:
	case 3:
	case 5:
	case 7:
	case 10:
	case 12:
		last_day = 31;
		break;

	case 2:
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
			last_day = 29;
		else
			last_day = 28;
	default:
		break;
	}
	printf("%d년 %d월의 말일은 %d일입니다.", year, month, last_day);
	*/

	/*
	//10
	printf("입력한 온도를 변환합니다.\n문자를 F나 f를 입력하면 섭씨로,\n문자를 C나 c를 입력하면 화씨로 변환합니다.\n");
	char text;
	double number;

	printf("문자 입력 >> : ");
	scanf("%c", &text);
	printf("숫자 입력 >> : ");
	scanf("%lf", &number);


	if ((int)text == 102 || (int)text == 70)
		printf("화씨온도 %.2lf는 섭씨온도로 %.2lf입니다.", number, (5.0 / 9.0) * (number - 32));
	else if ((int)text == 67 || (int)text == 99)
		printf("섭씨온도 %lf는 화씨온도로 %lf입니다.", number, (9.0 / 5.0) * (number + 32));
	else
		printf("%d", text);
		*/

	return 0;
}
