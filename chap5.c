#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	//2
	/*
	printf("��ǥ x, y �Է� >> ");
	double x, y, s;
	scanf_s("%lf %lf", &x, &y);

	printf("��ǥ (%lf, %lf): ", x, y);
	if (x > 0 && y > 0)
		printf("1��и�\n");
	else if (x < 0 && y > 0)
		printf("2��и�\n");
	else if (x < 0 && y < 0)
		printf("3��и�\n");
	else
		printf("4��и�\n");
	*/

	//4
	/*
	printf("����(cm)�� ������(kg)�� �Է��ϼ���: ");
	double height, weight, bmi, d;
	scanf("%lf %lf", &height, &weight);

	d = height / 100 * height / 100;
	bmi = weight / d;
	printf("����: %.2lf, ������: %.2lf, BMI����: %.2lf ", height,weight,bmi);

	if (bmi >= 40)
		printf("�� ��\n");
	else if (bmi >= 35 && bmi < 40)
		printf("������ ��\n");
	else if (bmi >= 30 && bmi < 35)
		printf("��\n");
	else if (bmi >= 25 && bmi < 30)
		printf("��ü��\n");
	else if (bmi >= 18.5 && bmi < 25)
		printf("����\n");
	else
		printf("��ü��\n");
	*/

	//6
	/*
	printf("�ҵ� �Է� >> ");
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
	printf("���� ���ռҵ�: %d, ����: %d%%\n", income, tex);
	*/

	//8
	/*
	printf("�⵵�Է�: ");
	int year;
	scanf("%d", & year);
	printf("%d ���� ",year);
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		printf("�����Դϴ�.\n");
	else
		printf("������ �ƴմϴ�.\n");
	*/

	//10
	printf("�Է��� �µ��� ��ȯ�մϴ�.\n���ڸ� F�� f�� �Է��ϸ� ������,\n���ڸ� C�� c�� �Է��ϸ� ȭ���� ��ȯ�մϴ�.\n");
	char text;
	double number;

	printf("���� �Է� >> : ");
	scanf("%c", &text);
	printf("���� �Է� >> : ");
	scanf("%lf", &number);
	

	if ((int)text == 102 || (int)text == 70)
		printf("ȭ���µ� %.2lf�� �����µ��� %.2lf�Դϴ�.", number, (5.0 / 9.0) * (number - 32));
	else if ((int)text == 67 || (int)text == 99)
		printf("�����µ� %lf�� ȭ���µ��� %lf�Դϴ�.", number, (9.0 / 5.0) * (number + 32));
	else
		printf("%d", text);


	return 0;
}