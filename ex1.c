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
int main(void) {
	char h[] = "�ȳ��ϼ��� ����";
	char j[] = "�׷�";
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