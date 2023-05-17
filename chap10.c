#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1
/*
extern int x = 10;
int main(void) {
	printf("%d", x);
	//�Լ� �ܺο� �θ� ������ ����
	return 0;
}
*/
//2
/*
#define MAXSIZE 3
static int stack[MAXSIZE];
static int top = -1;
int isnull(int t);
int push(int n);
int main(void){
	push(3);
	push(5);
	push(9);
	push(1);
	return 0;
}
int isnull(int t) {
	int s = 0;
	int len = sizeof(stack) / sizeof(int);
	if (t >= len) {
		s = 1;
	}
	return s;
}
int push(int n) {
	top += 1;
	if (0 == isnull(top)) {
		stack[top] = n;
		printf("���� ÷�� %d�� %d �����մϴ�.\n", top, n);
	}
	else {
		printf("��� �� �����Դϴ�.\n");
	}
}
*/
//3
/*
#define MAXSIZE 3
static int stack[MAXSIZE];
static int top = -1;
int isnull(int t);
int push(int n);
int isempty(int t);
int pop();
int main(void) {
	push(3);
	push(5);
	pop();
	push(9);
	push(1);
	push(7);
	return 0;
}
int isnull(int t) {
	int s = 0;
	int len = sizeof(stack) / sizeof(int);
	if (t >= len) {
		s = 1;
	}
	return s;
}
int push(int n) {
	top += 1;
	if (0 == isnull(top)) {
		stack[top] = n;
		printf("���� ÷�� %d�� %d �����մϴ�.\n", top, n);
	}
	else {
		printf("��� �� �����Դϴ�.\n");
	}
}
int isempty(int t) {
	if (t <= -1) {
		return 1;
	}
	else {
		return 0;
	}
}
int pop() {
	if (isempty(top) != 1) {
		printf("���� ÷�� %d���� %d�� �����մϴ�.\n",top,stack[top]);
		top -= 1;
		stack[top] = 0;
	}
	else {
		printf("����ִ� �����Դϴ�.\n");
	}

}
*/
//4
/*
int sum(int n);
int main(void) {

	printf("���� ������ �Է� >> ");
	int num;
	scanf("%d", &num);
	printf("sum = %d\n", sum(num));
	return 0;
}
int s = 0;
int sum(int n) {
	if (n <= 0)
		return s;

	static int i = 1;
	printf("%d�� ȣ��\n", i);

	s += n;
	sum(n - 1, i++);
}
*/
//5
/*
#include <stdlib.h>
#include <time.h>
int main(void) {
	auto int random = 0;
	srand(time(NULL));
	random = rand() % 3;
	printf("����(0) ����(1) ��(2) �߿��� �ϳ� �Է� -> ");
	auto int n = 0;
	scanf("%d", &n);

	printf("����� ");
	switch (n) {
	case 0:
		printf("����");
		break;
	case 1:
		printf("����");
		break;
	case 2:
		printf("��");
		break;
	}
	printf("�̰�, �ý����� ");
	switch (random) {
	case 0:
		printf("����");
		break;
	case 1:
		printf("����");
		break;
	case 2:
		printf("��");
		break;
	}
	printf("�Դϴ�.\n\n");

	if (n == random)
	{
		printf("��ǻ�Ϳ� �����ϴ�.\n");
	}
	else if((n==0 && random==2)||(n==1&& random==0)||(n==2&& random==1)){
		printf("����� �¸��Դϴ�.\n");
	}
	else if(n != random){
		printf("��ǻ���� �¸��Դϴ�.\n");
	}
	
	return 0;
}
*/
//6
/*
extern int num = 6;
int s(void) {
	printf("�������� num =%d \n", num);

	return 0;
}
*/
//7, 8
#include <stdlib.h>
#include <time.h>
int setNumber(void);
int printHead(void);
int printHigher(void);
int printLower(void);
int printAnswer(void);
int number;
static int min=0;
static int max=100;
int n;
int i = 1;
int main(void) {
	setNumber();
	printHead();
	puts("");
	while ((n != number) && (i < 6)) {
		if (n < number) {
			printHigher();
			if (i >= 6)
				break;
			printAnswer();
			scanf("%d", &n);
			puts("");
		}
		else if (n > number) {
			printLower();
			if (i >= 6)
				break;
			printAnswer();
			scanf("%d", &n);
			puts("");
		}
		else if (i >= 6)
			break;
	}
	printAnswer();
	return 0;
}

int setNumber(void) {
	srand(time(NULL));
	number = rand() % 100;
	return 0;
}
int printHead(void) {
	printf("1���� 100������ �ϳ��� ������ �����Ǿ����ϴ�.\n�� ������ ���߾� ������? > ");
	scanf("%d", &n);
	return 0;
}

int printHigher(void) {
	if (min < (n + 1)) {
		min = n + 1;
	}
	else {
		min = n;
	}
	printf("���߾�� �� ������ �Է��� ���� %d���� Ů�ϴ�. (�õ�Ƚ�� : %d��)\n", n,i);
	i++;
	return 0;
}

int printLower(void) {
	if (max > (n - 1)) {
		max = n - 1;
	}
	else {
		max = n;
	}
	printf("���߾�� �� ������ �Է��� ���� %d���� �۽��ϴ�. (�õ�Ƚ�� : %d��)\n", n,i);
	i++;
	return 0;
}

int printAnswer(void) {
	if ((n != number) && (i < 6))
		printf("%d���� %d������ ������ �ٽ� �Է��ϼ���. > ", min, max);
	else if ((n != number) && (i >= 6)) {
		printf("\t�ִ� �õ� Ƚ���� 5ȸ ���� ������ ���Ͽ����ϴ�. ����˴ϴ�.\n");
	}
	else if ( (n == number) && (i < 6))
		printf("�����մϴ�! ������ %d�Դϴ�.\n", number);
	return 0;
}
