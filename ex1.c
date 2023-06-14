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
/*
int main(void) {
	char h[] = "안녕하세요 ㅎㅎ";
	char j[] = "그랭";
	printf("%d", strncmp(j, h, 5));
	strncpy(h, j, 2);
	printf("\n%s\n", h);

	char i = " ";
	//strcat(h, j);
	for (int i = 0; i < sizeof(p) / sizeof(p[0]); i++) {
		printf("%s\n",p[i]);
	}
	printf("%s\n", strtok(h, i));

	return 0;
}
*/
union npc {
	int ar;
	int pc;
};
struct com {
	int real;
	int img;
	union npc a;
};
typedef struct com dom;

void pcom1(dom ccom);
dom pcom2(dom ccom);
void pcom3(dom* ccom);

void in(int* or , int incre);
void mu(double* re, const double* a, const double* b);
int main(void) {
	//포인트 매개변수
	int m = 10;
	in(&m, 20);
	printf("%d :: %p", m, &m);

	//포인트 단순연산
	int n = 10, b = 20;
	int *p1 = &n;
	int *p2 = &b;
	printf("\n+=%d\n*%d\n/=%d", (*p1)+ (*p2), (*p1) * (*p2),(*p2)/ (*p1));

	//const 함수 인자
	double m1 = 11.1, n1 = 22.2, mult = 33.3, dev = 12.1;
	mu(&mult, &m1, &n1);
	printf("\n함수인자 : %lf\n", mult);


	//함수의 구조체 전달과 반환
	//전역변수로 구조체, typedef줘야 가능
	dom ccc = { 2,3, {.ar=4, .pc=5} };
	dom sss;
	pcom1(ccc);
	sss = pcom2(ccc);
	printf("p2 : 구조체 : %d %d\n", sss.real, sss.real);
	pcom3(&ccc);
	printf("p3: sss.img(3=>5) : %d\n", ccc.img);


	return 0;

}
void in(int* or , int incre) {
	*or += incre; //&m을 통해 주소를 받아서 or의 주소는 m과 같아진다.
	printf("%p :: %p \n", or , incre);

}
void mu(double* re, const double* a, const double* b) {
	*re = *a * *b;
	//*a = *a+1은 a가 상수이기에 오류가 난다
}
void pcom1(dom ccom) { //구조체 자체를 인자로 사용
	printf("p1 : %d %d\n", ccom.real, ccom.img);
}
dom pcom2(dom ccom) {//구조체 포인터를 인자로 사용
	ccom.img += 5;
	return ccom;
}

void pcom3(dom *ccom) {//구조체 포인터를 인자로 사용
	printf("a.pc : %d\n", ccom->a.pc);
	ccom->img = ccom->a.pc;
}