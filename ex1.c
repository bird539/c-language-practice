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
		printf("�����ϼ��� : 1(�߰�), 2(����), 3(����)\n");
		scanf("%d", &j);
		inter(j);
	}
	else if (n == 1) {
		printf("�߰��� ���� �Է� : ");
		scanf("%d", &p);
		count += p;
		printf("�߰� �� ���� : %d\n",count);
		inter(0);
	}
	else if (n == 2) {
		printf("������ ���� �Է� : ");
		scanf("%d", &m);
		count -= m;
		printf("���� �� ���� : %d\n", count);
		inter(0);
	}
	else if (n == 3) {
		printf("\n�����մϴ�\n");
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
		{"���", "������", {"ȫ�浿" ,1010,11000}},
		{"�ǹ�", "�Ⱦ���", {"�����" ,1010,11000}},
		{"�ǹ�", "������", {"�ź���" ,1010,11000}}
	};
	for (int i = 0; i < sizeof(p) / sizeof(p[0]); i++) {
		if (strcmp(p[i].rate, "�ǹ�") == 0) {
			printf("%s %s %s %d\n", p[i].Pinfo.name, p[i].rate, p[i].place, p[i].Pinfo.countNum);
		}
	}

	return 0;
}
*/
/*
int main(void) {
	char h[] = "�ȳ��ϼ��� ����";
	char j[] = "�׷�";
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
	//����Ʈ �Ű�����
	int m = 10;
	in(&m, 20);
	printf("%d :: %p", m, &m);

	//����Ʈ �ܼ�����
	int n = 10, b = 20;
	int *p1 = &n;
	int *p2 = &b;
	printf("\n+=%d\n*%d\n/=%d", (*p1)+ (*p2), (*p1) * (*p2),(*p2)/ (*p1));

	//const �Լ� ����
	double m1 = 11.1, n1 = 22.2, mult = 33.3, dev = 12.1;
	mu(&mult, &m1, &n1);
	printf("\n�Լ����� : %lf\n", mult);


	//�Լ��� ����ü ���ް� ��ȯ
	//���������� ����ü, typedef��� ����
	dom ccc = { 2,3, {.ar=4, .pc=5} };
	dom sss;
	pcom1(ccc);
	sss = pcom2(ccc);
	printf("p2 : ����ü : %d %d\n", sss.real, sss.real);
	pcom3(&ccc);
	printf("p3: sss.img(3=>5) : %d\n", ccc.img);


	return 0;

}
void in(int* or , int incre) {
	*or += incre; //&m�� ���� �ּҸ� �޾Ƽ� or�� �ּҴ� m�� ��������.
	printf("%p :: %p \n", or , incre);

}
void mu(double* re, const double* a, const double* b) {
	*re = *a * *b;
	//*a = *a+1�� a�� ����̱⿡ ������ ����
}
void pcom1(dom ccom) { //����ü ��ü�� ���ڷ� ���
	printf("p1 : %d %d\n", ccom.real, ccom.img);
}
dom pcom2(dom ccom) {//����ü �����͸� ���ڷ� ���
	ccom.img += 5;
	return ccom;
}

void pcom3(dom *ccom) {//����ü �����͸� ���ڷ� ���
	printf("a.pc : %d\n", ccom->a.pc);
	ccom->img = ccom->a.pc;
}