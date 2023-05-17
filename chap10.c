#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1
/*
extern int x = 10;
int main(void) {
	printf("%d", x);
	//함수 외부에 두면 문제가 없음
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
		printf("스택 첨자 %d에 %d 저장합니다.\n", top, n);
	}
	else {
		printf("모두 찬 스택입니다.\n");
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
		printf("스택 첨자 %d에 %d 저장합니다.\n", top, n);
	}
	else {
		printf("모두 찬 스택입니다.\n");
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
		printf("스택 첨자 %d에서 %d를 제거합니다.\n",top,stack[top]);
		top -= 1;
		stack[top] = 0;
	}
	else {
		printf("비어있는 스택입니다.\n");
	}

}
*/
//4
/*
int sum(int n);
int main(void) {

	printf("양의 정수를 입력 >> ");
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
	printf("%d번 호출\n", i);

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
	printf("가위(0) 바위(1) 보(2) 중에서 하나 입력 -> ");
	auto int n = 0;
	scanf("%d", &n);

	printf("당신은 ");
	switch (n) {
	case 0:
		printf("가위");
		break;
	case 1:
		printf("바위");
		break;
	case 2:
		printf("보");
		break;
	}
	printf("이고, 시스템은 ");
	switch (random) {
	case 0:
		printf("가위");
		break;
	case 1:
		printf("바위");
		break;
	case 2:
		printf("보");
		break;
	}
	printf("입니다.\n\n");

	if (n == random)
	{
		printf("컴퓨터와 비겼습니다.\n");
	}
	else if((n==0 && random==2)||(n==1&& random==0)||(n==2&& random==1)){
		printf("당신의 승리입니다.\n");
	}
	else if(n != random){
		printf("컴퓨터의 승리입니다.\n");
	}
	
	return 0;
}
*/
//6
/*
extern int num = 6;
int s(void) {
	printf("전역변수 num =%d \n", num);

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
	printf("1에서 100까지의 하나의 정수가 결정되었습니다.\n이 정수를 맞추어 보세요? > ");
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
	printf("맞추어야 할 정수가 입력한 정수 %d보다 큽니다. (시도횟수 : %d번)\n", n,i);
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
	printf("맞추어야 할 정수가 입력한 정수 %d보다 작습니다. (시도횟수 : %d번)\n", n,i);
	i++;
	return 0;
}

int printAnswer(void) {
	if ((n != number) && (i < 6))
		printf("%d에서 %d사이의 정수를 다시 입력하세요. > ", min, max);
	else if ((n != number) && (i >= 6)) {
		printf("\t최대 시도 횟수인 5회 동안 맞추지 못하였습니다. 종료됩니다.\n");
	}
	else if ( (n == number) && (i < 6))
		printf("축하합니다! 정답은 %d입니다.\n", number);
	return 0;
}
