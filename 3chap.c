#include <stdio.h>
//3���� 3�� ���� �ǽ� 2023.03.16.
//���ݱ��� ��� �� ������ ��� �ڵ��ϰ� ���ุ �� ���� �뵵�� �Ἥ
// <- 03.30�ϳ� ���������� ������� ������ ���� ��¥�� Ȯ���Ѵٴ� ���� �˾Ұ�
//�������� �켱 ������ ����ζ�� �ϼż�...���� ���� �������� �ٽ� ���⿡ �ű�ϴ٤Ф�
int main()
{
	//2023.03.16
	printf("1----------------------\n");
	printf("%d %d\n", 021, 0x1b);
	return 0;

	printf("2----------------------\n");
	int point1 = 88, point2 = 92;
	int total;
	total = point1 + point2;
	printf("�߰�: %d �⸻: %d ��: %d\n", point1, point2, total);


	printf("3----------------------\n");
	printf("%d %d %d\n", 8, 010, 0x8);
	printf("%d %d %d\n", 9, 011, 0x9);
	printf("%d %d %d\n", 10, 012, 0xA);
	printf("%d %d %d\n", 11, 013, 0xB);
	printf("%d %d %d\n", 12, 014, 0xC);
	printf("%d %d %d\n", 13, 015, 0xD);
	printf("%d %d %d\n", 14, 016, 0xE);
	printf("%d %d %d\n", 15, 017, 0xF);

	printf("4----------------------\n");
	printf("%c %c %c %c %c\n", '^', '*', '!', '#', '@');
	printf("%f %f %f \n", 10.63, 2.34567E3, 2.34567E-3);
	printf("\"C\"���� ����ִ� \'���α׷��� ���\'�̳׿�.\n");

	printf("5----------------------\n");
#define PI 3.14
	double wh = 5.370000;
	printf("�� ������: %f\n�� ����: %f\n�� �ѷ�: %f\n", wh, wh * wh * PI, 2 * PI * wh);

#define PI 3.14 //3.141592
	double area = 0.0, length = 0.0, radious = 5.37;
	area = radious * radious * PI;
	length = 2.0 * PI * radious;
	printf("������:%f\n", radious);
	printf("�� ����:%f\n", area);
	printf("�� �ѷ�:%f\n", length);

	printf("6----------------------\n");
	printf("\a�溸�� ~~~ ���� �ð��Դϴ�.\n");


	printf("7----------------------\n");
	char ch = "\041";
	printf("%c ", ch), ch = ch + 1;
	printf("%c ", ch), ch = ch + 1;
	printf("%c ", ch), ch = ch + 1;
	printf("%c ", ch), ch = ch + 1;
	printf("%c ", ch), ch = ch + 1;

	printf("8----------------------\n");
	const double UNIT = 3.305785;
	printf("%2d(��): %.3f(��������)\n", 18, 18 * UNIT);
	printf("%2d(��): %.3f(��������)\n", 25, 25 * UNIT);

	printf("9----------------------\n");
	const double MILE = 0.621371;
	printf("%d(km): %.3f(mile)\n", 60, 60 * MILE);
	printf("%d(km): %.3f(mile)\n", 80, 80 * MILE);
	printf("%d(km): %.3f(mile)\n", 100, 100 * MILE);
	printf("%d(km): %.3f(mile)\n", 120, 120 * MILE);

	printf("10----------------------\n");
	printf("%c %c %c %c\n", 'A' + 2, 'A' + 5, 'S' - 1, 'S' - 3);

	printf("11----------------------\n");
	long long dist1 = 117900000;
	long long dist2 = 2871000000;
	printf("ȭ���� õ�ռ� ���� �Ÿ� = %lld \n", dist2 - dist1);


	printf("12----------------------\n");
#define EXCHANGE_RATE 1120.0
	int won = 1000000;
	printf("%d �� => %f�޷�\n", won, won / EXCHANGE_RATE);


}
