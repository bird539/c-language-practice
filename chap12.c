#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1 - 표준입력으로 문자를 하나 입력 받아 아스키코드 값을 
//    출력하는 프로그램을 작성하시오
/*
int main(void) {
	char str[] = "abc";
	printf("문자를 하나 입력하세요 >> ");
	scanf("%c", &str[0]);
	printf("%c의 아스키 코드값은 십진수로 %d 입니다.\n", str[0], (int)str[0]);
	return 0;

}
*/

//2 - 표준입력으로 영어 한 단어를 입력 받아 각각의 단어를
//    구성하는 문자를 역순으로 출력하는 프로그램 작성
/*
#include <string.h>
int main(void) {

	printf("한 단어를 입력하세요 >> ");
	char str[30];
	gets(str);
	printf("입력한 단어를 반대로 출력합니다 >> ");
	for (int i = strlen(str) + 1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	puts("");

	return 0;
}
*/

//3 - 표준입력으로 한 줄의 영어 문자열을 입력 받아 
//    단어의 문자를 역순으로 출력하는 프로그램을 작성하시오.
/*
#include <string.h>
int main(void) {
	printf("한 줄의 문장을 입력하세요 >>\n");
	char text[10000];
	gets(text);
	printf("\n입력한 각각의 단어를 반대로 출력합니다. >>\n");
	int f = 0;
	char* t = strtok(text, " ");
	while (t) {
		for (int i = strlen(t); i >=0; i--) {
			printf("%c", t[i]);
		}
		printf(" ");
		t = strtok(NULL, " ");
	}
	printf("\n");

	return 0;
}
*/

//4 - 다음 두 변수를 선언해 함수 strcat()을 사용하지 말고 
//    두 문자열을 연결해 출력하는 프로그램을 작성하시오.
/*
#include <string.h>
int main(void) {

	char s1[100] = "C 언어 ", s2[] = "사랑합니다!";
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int i = 0; i <= len2; i++) {
		s1[len1 + i] = s2[i];
	}
	printf("두 문자열 붙인 결과: %s\n", s1);

	return 0;
}
*/
//5 - 표준입력으로 받은 10000보다 작은 정수를 그 숫자 값을
//    표현하는 한글 문자열로 출력하는 프로그램을 작성하시오.
/*
#include <string.h>
int main(void) {
	printf("10000보다 작은 정수 하나를 입력하세요 >> ");
	int num; scanf("%d",&num);
	printf("입략한 정수는 ["); int nn[] = { -1,-1,-1,-1 };
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
			printf("영");
		}
		else if (nn[i] == 1) {
			printf("일");
		}
		else if (nn[i] == 2) {
			printf("이");
		}
		else if (nn[i] == 3) {
			printf("삼");
		}
		else if (nn[i] == 4) {
			printf("사");
		}
		else if (nn[i] == 5) {
			printf("오");
		}
		else if (nn[i] == 6) {
			printf("육");
		}
		else if (nn[i] == 7) {
			printf("칠");
		}
		else if (nn[i] == 8) {
			printf("팔");
		}
		else if (nn[i] == 9) {
			printf("구");
		}

		if (nn[i] != -1) {
			if (i == 0) {
				printf("천");
			}
			else if (i == 1) {
				printf("백");
			}
			else if (i == 2) {
				printf("십");
			}
		}
	}
	printf("]입니다.");
	puts("");

	return 0;
}
*/
//6 - 표준입력으로 한 줄의 영어 문자열을 입력 받아 영문자의 대문자는 소문자로, 
//    소문자는 대문자로 변환하여 출력하는 프로그램을 작성하시오.
//    *함수 tolower()와 toupper() 이용
/*
#include <string.h>
#include <ctype.h>

int main(void) {
	printf("영어 문장을 입력하세요 >> ");
	char eng[100]; gets(eng);
	puts("");
	printf("입력한 문자열에서 대문자와 소문자를 반대로 변환하면 >>\n");
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
*/
//7 - 다음 내용을 참고로, 정수 형태의 문자열을 정수로 변환하는
//    함수를 구현하고 결과를 알아보는 프로그램을 작성하시오.
//-문자열 "4356"은 정수 4356으로, 다음 두 함수에 대하여 모두 출력
//-라이브러리 함수 atoi()를 사용해 출력, 함수 atoi()의 함수원형은 
//  stdlib.h에 정의되어 있으며 문자열 str을 정수로 변환하는 함수
//  int atoi(const char *str);
//-직접 구현한 함수 toint()도 사용하여 다음과 같이 출력
//  int toint(const char *str);
/*
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int toint(const char* str) ;
int main(void) {
	printf("정수를 하나 입력하세요 >> ");
	char str[30];
	gets(str);
	printf("%s\n\n", str);

	printf("먼저 함수 atoi()를 이용한 정수 >> %d\n", atoi(str));
	printf("직접 구현한 함수를 이용한 정수 >> %d\n", toint(str));

	return 0;
}
int toint(const char* str) {
	char textN[10] = "0123456789";
	int intN[] = { 0,1,2,3,4,5,6,7,8,9 };
	int number = 0;
	int f = 0;
	int len_str = 0;
	while (f==0) {
		for (int a = 0; a < 10; a++) {
			if (str[len_str] == textN[a]) {
				len_str += 1;
			}
		}
		if (str[len_str] == '\0') {
			f += 1;
		}
	}
	printf("\nnum len:%d\n", len_str);
	for (int i = 0; i < len_str; i++) {
		for (int a = 0; a < 10; a++) {
			if (str[i] == textN[a]) {
				int ten = 1;
				for (int b = (len_str - 1) - i; b > 0; b--) {
					ten *= 10;
				}
				number += intN[a] * ten;
			}
		}
	}
	return number;
}
*/


//8 - 앞의 문제에서 직접 구현한 함수 toint()를 이용하여 명령행에 
//    입력된 두 정수를 더한 결과를 출력하는 프로그램을 작성하시오.
//-다음은 비주얼 스튜디오의 프로젝트 속성에서 [구성속성/디버깅/명령 인수]에서
// 567 765를 입력해 실행한 결과 
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int toint(const char* str);
int main(int argc, char* argv[])  {
	printf("입력한 두 수를 더한 결과 >> ");
	printf("%d + %d = %d\n", toint(argv[1]), toint(argv[2]), toint(argv[1]) + toint(argv[2]));
	return 0;
}
int toint(const char* str) {
	char textN[10] = "0123456789";
	int intN[] = { 0,1,2,3,4,5,6,7,8,9 };
	int number = 0;
	int f = 0;
	int len_str = 0;
	while (f == 0) {
		for (int a = 0; a < 10; a++) {
			if (str[len_str] == textN[a]) {
				len_str += 1;
			}
		}
		if (str[len_str] == '\0') {
			f += 1;
		}
	}
	for (int i = 0; i < len_str; i++) {
		for (int a = 0; a < 10; a++) {
			if (str[i] == textN[a]) {
				int ten = 1;
				for (int b = (len_str - 1) - i; b > 0; b--) {
					ten *= 10;
				}
				number += intN[a] * ten;
			}
		}
	}
	return number;
}
*/