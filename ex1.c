#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
int count = 0;

int inter(int n);
int main(void) {
	inter(0);
	return 0;
}

int inter(int n) {
	int m;
	int p;
	int j;
	if (n==0) {
		printf("선택하세요 : 1(추가), 2(삭제), 3(종료)\n");
		scanf("%d", &j);
		inter(j);
	}
	else if (n == 1) {
		printf("추가할 숫자 입력 : ");
		scanf("%d", &p);
		count += p;
		printf("추가 후 숫자 : %d\n",count);
		inter(0);
	}
	else if (n == 2) {
		printf("삭제할 숫자 입력 : ");
		scanf("%d", &m);
		count -= m;
		printf("삭제 후 숫자 : %d\n", count);
		inter(0);
	}
	else if (n == 3) {
		printf("\n종료합니다\n");
	}
}
*/
/*
struct aaa {
	char name[80];
	int countNum;
	double restCount;
};

typedef struct aaa people;

int main(void) {
	typedef struct {
		char rate[20];
		char place[80];
		people Pinfo;
	}bbb;

	bbb p[] = {
		{"골드", "가산점", {"홍길동" ,1010,11000}},
		{"실버", "안양점", {"김수한" ,1010,11000}},
		{"실버", "세종점", {"거북이" ,1010,11000}}
	};
	for (int i = 0; i < sizeof(p) / sizeof(p[0]); i++) {
		if (strcmp(p[i].rate, "실버") == 0) {
			printf("%s %s %s %d\n", p[i].Pinfo.name, p[i].rate, p[i].place, p[i].Pinfo.countNum);
		}
	}

	return 0;
}
*/
int main(void) {
	char h[] = "안녕하세요 ㅎㅎ";
	char j[] = "그랭";
	printf("%d", strncmp(j, h, 5));
	strncpy(h, j, 2);
	printf("\n%s\n", h);

	char i = " ";
	//strcat(h, j);
	/*for (int i = 0; i < sizeof(p) / sizeof(p[0]); i++) {
		printf("%s\n",p[i]);
	}*/
	printf("%s\n", strtok(h, i));

	return 0;
}