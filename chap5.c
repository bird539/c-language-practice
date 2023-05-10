#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

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


	return 0;
}