#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	//1
	/*
	printf("3.4+4.5�� ���� �� �Ǽ��� �����ڸ� �ٿ��� �Է� >> ");
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
		printf("�߸��� �Է°�\n");
		*/

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

	//3 - ���밪�� ���� ���ϴ� ��
	/*
	printf("�� �Ǽ� �Է� >> ");
	double x, y;
	scanf("%lf %lf", &x, &y);
	if (x < 0)
		printf("�����: %lf\n", -(x)+y);
	else if (y < 0)
		printf("�����: %lf\n", -(y)+x);
	else
		printf("�����: %lf\n", x + y);
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

	//5
	/*
	printf("������ ���� �Է��ϼ���. 1(����), 2(����): ");
	double gender, height, weight, avg_wight, obesity;

	scanf("%lf", &gender);
	printf("����(cm)�� ������(kg)�� �Է��ϼ���: ");
	scanf("%lf %lf", &height, &weight);

	char obesity_judg[] = "";
	if (gender == 1)
		avg_wight = (height / 100) * (height / 100) * 22;
	else if (gender == 2)
		avg_wight = (height / 100) * (height / 100) * 21;
	else
		printf("�߸��� �����Է�");

	obesity = (weight / avg_wight) * 100;

	printf("���� ����: %.2lf, ü��: %.2lf, ǥ�� ü��: %.2lf\n", height, weight, avg_wight);
	printf("������: %.2lf, ����: ", obesity);
	if (obesity <= 90)
		printf("��ü��\n");
	else if (obesity > 90)
		printf("����\n");
	else if (obesity > 110)
		printf("ü�� ����\n");
	else if (obesity > 120)
		printf("��\n");
	else
		printf("�߸��� �Է�\n");
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

	//7
	/*
	printf("�⵵�� ��(month)�� �Է��ϼ���. >> ");
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
		printf("�߸��� �Է�");

	printf("%d��(month)�� %d�б� �Դϴ�.\n", sector_month, sector);
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


	//9
	/*
	printf("��� ���� ������ ���� �Է��ϸ� �� ���� ������ �˷��帳�ϴ�.\n2003 3 : �Է� >> ");
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
	printf("%d�� %d���� ������ %d���Դϴ�.", year, month, last_day);
	*/

	/*
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
		*/

	return 0;
}
