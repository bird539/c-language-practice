#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1 - ǥ���Է����� ���ڸ� �ϳ� �Է� �޾� �ƽ�Ű�ڵ� ���� 
//    ����ϴ� ���α׷��� �ۼ��Ͻÿ�
/*
int main(void) {
	char str[] = "abc";
	printf("���ڸ� �ϳ� �Է��ϼ��� >> ");
	scanf("%c", &str[0]);
	printf("%c�� �ƽ�Ű �ڵ尪�� �������� %d �Դϴ�.\n", str[0], (int)str[0]);
	return 0;

}
*/

//2 - ǥ���Է����� ���� �� �ܾ �Է� �޾� ������ �ܾ
//    �����ϴ� ���ڸ� �������� ����ϴ� ���α׷� �ۼ�
/*
#include <string.h>
int main(void) {

	printf("�� �ܾ �Է��ϼ��� >> ");
	char str[30];
	gets(str);
	printf("�Է��� �ܾ �ݴ�� ����մϴ� >> ");
	for (int i = strlen(str) + 1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	puts("");

	return 0;
}
*/
//4 - ���� �� ������ ������ �Լ� strcat()�� ������� ���� 
//    �� ���ڿ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/*
#include <string.h>
int main(void) {

	char s1[100] = "C ��� ", s2[] = "����մϴ�!";
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int i = 0; i <= len2; i++) {
		s1[len1 + i] = s2[i];
	}
	printf("�� ���ڿ� ���� ���: %s\n", s1);

	return 0;
}
*/
//5 - ǥ���Է����� ���� 10000���� ���� ������ �� ���� ����
//    ǥ���ϴ� �ѱ� ���ڿ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/*
#include <string.h>
int main(void) {
	printf("10000���� ���� ���� �ϳ��� �Է��ϼ��� >> ");
	int num; scanf("%d",&num);
	printf("�Է��� ������ ["); int nn[] = { -1,-1,-1,-1 };
	if (num >= 1000) {
		nn[0] = num / 1000;
		num %= 1000;
	}
	if (num >= 100) {
		nn[1] = num / 100;
		num %= 100;
	}
	if (num >= 10) {
		nn[2] = num / 10;
		num %= 10;
	}
	nn[3] = num;
	for (int i = 0; i < 4; i++) {

		if (nn[i] == 0) {
			printf("��");
		}
		else if (nn[i] == 1) {
			printf("��");
		}
		else if (nn[i] == 2) {
			printf("��");
		}
		else if (nn[i] == 3) {
			printf("��");
		}
		else if (nn[i] == 4) {
			printf("��");
		}
		else if (nn[i] == 5) {
			printf("��");
		}
		else if (nn[i] == 6) {
			printf("��");
		}
		else if (nn[i] == 7) {
			printf("ĥ");
		}
		else if (nn[i] == 8) {
			printf("��");
		}
		else if (nn[i] == 9) {
			printf("��");
		}

		if (nn[i] != -1) {
			if (i == 0) {
				printf("õ");
			}
			else if (i == 1) {
				printf("��");
			}
			else if (i == 2) {
				printf("��");
			}
		}
	}
	printf("]�Դϴ�.");
	puts("");

	return 0;
}
*/
//6 - ǥ���Է����� �� ���� ���� ���ڿ��� �Է� �޾� �������� �빮�ڴ� �ҹ��ڷ�, 
//    �ҹ��ڴ� �빮�ڷ� ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//    *�Լ� tolower()�� toupper() �̿�
#include <string.h>
#include <ctype.h>

int main(void) {
	printf("���� ������ �Է��ϼ��� >> ");
	char eng[100]; gets(eng);
	puts("");
	printf("�Է��� ���ڿ����� �빮�ڿ� �ҹ��ڸ� �ݴ�� ��ȯ�ϸ� >>\n");
	for (int i = 0; i < strlen(eng); i++) {
		if (isupper(eng[i])) {
			printf("%c", tolower(eng[i]));
		}
		else {
			printf("%c", toupper(eng[i]));
		}
	}
	puts("");



	return 0;
}