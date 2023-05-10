#include <stdio.h>
//3주차 3장 과제 실습 2023.03.16.
//지금까지 계속 한 파일을 열어서 코딩하고 실행만 해 보는 용도로 써서
// <- 03.30일날 교수님한테 물어봐서 파일을 만든 날짜로 확인한다는 것을 알았고
//교수님이 우선 이유를 적어두라고 하셔서...지금 구글 독스에서 다시 여기에 옮깁니다ㅠㅜ
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
	printf("중간: %d 기말: %d 합: %d\n", point1, point2, total);


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
	printf("\"C\"언어는 재미있는 \'프로그래밍 언어\'이네요.\n");

	printf("5----------------------\n");
#define PI 3.14
	double wh = 5.370000;
	printf("원 반지름: %f\n원 면적: %f\n원 둘레: %f\n", wh, wh * wh * PI, 2 * PI * wh);

#define PI 3.14 //3.141592
	double area = 0.0, length = 0.0, radious = 5.37;
	area = radious * radious * PI;
	length = 2.0 * PI * radious;
	printf("반지름:%f\n", radious);
	printf("원 면적:%f\n", area);
	printf("원 둘레:%f\n", length);

	printf("6----------------------\n");
	printf("\a경보음 ~~~ 수업 시간입니다.\n");


	printf("7----------------------\n");
	char ch = "\041";
	printf("%c ", ch), ch = ch + 1;
	printf("%c ", ch), ch = ch + 1;
	printf("%c ", ch), ch = ch + 1;
	printf("%c ", ch), ch = ch + 1;
	printf("%c ", ch), ch = ch + 1;

	printf("8----------------------\n");
	const double UNIT = 3.305785;
	printf("%2d(평): %.3f(제곱미터)\n", 18, 18 * UNIT);
	printf("%2d(평): %.3f(제곱미터)\n", 25, 25 * UNIT);

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
	printf("화성과 천왕성 간의 거리 = %lld \n", dist2 - dist1);


	printf("12----------------------\n");
#define EXCHANGE_RATE 1120.0
	int won = 1000000;
	printf("%d 원 => %f달러\n", won, won / EXCHANGE_RATE);


}
