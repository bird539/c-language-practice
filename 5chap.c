//5�� 2023.03.30
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
int main(void)
{
	//1-----------
	int num1, num2, big, small;
	printf("������ ���� �Է�1 :");
	scanf("%d", &num1);
	printf("������ ���� �Է�2 :");
	scanf("%d", &num2);
	big = num1 > num2 ? num1 : num2;
	small = num1 < num2 ? num1 : num2;
	printf("���� %d �̰� �������� %d �Դϴ�.\n", big / small, big % small);

	//2------------
	int num, year, month, day;
	printf("���� �Է� >> ");
	scanf("%d", &num);
	printf("�Է��� ��¥: %d", num);
	year = (double)(num / 365);
	month = (num % 365) / 30;
	day = (num % 365) % 30;
	printf("\n%d�� %d�� %d��\n", year, month, day);

	//3-----------
	double cm;
	printf("���̸� ��Ƽ���ͷ� �Է�(�Ҽ�) >> ");
	scanf("%lf", &cm);
	printf("%lf ��Ƽ����: %.3lf ��Ʈ\n", cm, cm / 30.48);

	//4----------
#define PI 3.14
	double radius, volume, surface;
	radius = 8.32;

	volume = (4.0 / 3.0) * PI * radius * radius * radius;
	surface = 4.0 * PI * radius * radius;

	printf("���� ü���� %.3lf �Դϴ�.\n", volume);
	printf("���� ǥ������ %.3lf �Դϴ�.\n", surface);

	//5---------
	int n1, n2, n3, s1, s2, s3;
	printf("�� ���� ���� �Է� >> ");
	scanf("%d %d %d", &n1, &n2, &n3);
	s1 = n1 < n2 ? n2 : n1;
	s2 = n2 < n3 ? n3 : n2;
	s3 = s1 < s2 ? s2 : s1;
	printf("���� ū ��: %d\n", s3);

	//6---------
	int height, weight;
	printf("Ű �Է�: ");
	scanf("%d", &height);
	printf("������ �Է�: ");
	scanf("%d", &weight);
	printf("����� %s �Դϴ�\n", (weight <= (height - 100) * 9.0 ? "����" : "������"));

	//7---------
	double year1, interest;
	printf("��ġ �Ⱓ �Է�(��) >> ");
	scanf("%lf", &year1);
	interest = 1000000 * 0.045 * year1 + 1000000;
	printf("����: 4.5%% �ѱݾ�: %.2lf\n", interest);

	//8---------
	double year2, interest1;
	printf("��ġ �Ⱓ �Է�(��) >> ");
	scanf("%lf", &year2);
	interest1 = pow((1.0 + 0.045), year2) * 1000000;
	printf("����: 4.5%% �ѱݾ�: %.2lf\n", interest1);

	//9--------
	double x1, y1, x2, y2;
	x1 = 3.20;
	y1 = 4.60;
	x2 = -8.30;
	y2 = -2.30;
	printf("(%.2lf %.2lf),(%.2lf %.2lf)\n", x1, y1, x2, y2);
	printf("�߽���ǥ: (%.2lf %.2lf)\n", (x1 + x2) / 2, (y1 + y2) / 2);

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

	printf("��1 %lf \n", x11);
	printf("���� ��� %.3lf\n", chack1);
	printf("��2 %lf \n", x22);
	printf("���� ��� %.3lf\n", chack2);


	return 0;
}
