#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1
/*
struct lecture
{
	char name[20];
	int wage;

};
typedef struct lecture lecture;
int main(void) {
	
	lecture Employee[] = {
		{"홍길동",2000000},
		{"임걱정",3000000},
		{"김영철",2500000},
	};
	for (int i = 0; i < sizeof(Employee) / sizeof(Employee[0]); i++) {
		printf("직원 이름: %s 월급여:%d\n",Employee[i].name,Employee[i].wage);
	}

	
	return 0;
}
*/
//2, 3
/*
struct fraction
{
	int numerator;
	int denominator;
};

int main(void) {
	struct fraction num1 = {4,5};
	struct fraction num2 = { 3,7 };
	printf("a = %d/%d\nb = %d/%d\n", num1.numerator, num1.denominator, num2.numerator, num2.denominator);
	printf("c = a*b = %d/%d\n", num1.numerator* num2.numerator, num1.denominator*num2.denominator);


	return 0;
}
*/
//4
/*
struct home_address
{
	int st_num;
	char street[20];
	char city[20];

};

int main(void) {
	struct home_address add1 = { 223, "선릉로", "서울시" };
	struct home_address add2 = { .city = "서울시", .st_num = 567, .street="경인로"};
	printf("%s %s %d\n",add1.city,add1.street,add1.st_num);
	printf("%s %s %d\n", add2.city, add2.street, add2.st_num);

	return 0;
}
*/
//5
/*
struct home_address
{
	int st_num;
	char street[20];
	char city[20];

};
struct person {
	struct home_address address;
	char name[20];
	char phone[60];
};
int main(void) {
	struct person member = { {123, "시청로", "춘천시"}, "홍길동", "011-1111-1111" };
	struct person member2 = { {456, "경인로", "서울시"}, "조명호", "017-3245-3278" };
	struct person member3 = { {789, "영통로", "수원시"}, "최윤로", "011-2222-2456" };
	printf("\t주소          이 름\t  전화번호\n");
	printf("%s %s %d     %s\t%s\n", member.address.city,member.address.street, member.address.st_num, member.name, member.phone);
	printf("%s %s %d     %s\t%s\n", member2.address.city, member2.address.street, member2.address.st_num, member2.name, member2.phone);
	printf("%s %s %d     %s\t%s\n", member3.address.city, member3.address.street, member3.address.st_num, member3.name, member3.phone);
	return 0;
}
*/
//6
/*
struct student
{
	char name[20];
	int number;
	double mean;
	char major[60];
	char career[60];
};
typedef struct student student;

int main(void) {
	student Student[5] = {
		{"김태근",52029,4.2,"전자상거래","웹디자너"},
		{"배태준",52030,4.3,"전자상거래","군인"},
		{"김보름",52031,4.3,"전자상거래","웹디자너"},
		{"서정순",52032,4.5,"전자상거래","웹마스터"},
		{"최종욱",52033,4.7,"전자상거래","DB관리자"},
	};
	printf("이 름    학번\t학점\t\t학과\t진로\n");
	for (int i = 0; i < 5; i++) {
		printf("%s %07d   %.1f\t  %s\t%s\n", Student[i].name, Student[i].number, Student[i].mean, Student[i].major, Student[i].career);
	}
	return 0;
}
*/
/*
//7
struct home_address
{
	char city[20];
	char gu[20];
	char dong[20];
};
struct person {
	struct home_address address;
	char name[20];
	char phone[60];
};
struct professor
{
	struct person person;
	char* lecture[2];
	char course[30];
};
int main(void) {
	//	struct person member = { {123, "시청로", "춘천시"}, "홍길동", "011-1111-1111" };

	struct professor professor1[5] = { 
		{{{"서울시","구로구","고척동"},"홍길동","011-1111-1111"},{"전산과","객체지향"},"분석설계" },
		{{{"서울시","구로구","고척동"},"최윤호","011-2222-2456"},{"전산과","객체지향"},"분석설계" },
		{{{"서울시","구로구","고척동"},"박종학","011-3333-2456"},{"전산과","객체지향"},"분석설계" },
		{{{"서울시","구로구","고척동"},"이종석","016-3467-4389"},{"전산과","객체지향"},"분석설계" },
		{{{"서울시","구로구","고척동"},"신용현","017-2222-2456"},{"전산과","객체지향"},"분석설계" },

										
	};


	return 0;
};
*/
//8
//7
/*
struct home_address
{
	char city[20];
	char gu[20];
	char dong[20];
};
struct person {
	struct home_address address;
	char name[20];
	char phone[60];
};
struct professor
{
	struct person person;
	char* lecture[2];
	char course[30];
};
struct student
{
	struct person person_student;
	int number;
	double mean;
	char major[20];
	char career[30];
	int professor_name;

};
typedef struct student student;
int main(void) {
	//	struct person member = { {123, "시청로", "춘천시"}, "홍길동", "011-1111-1111" };

	struct professor professor1[5] = {
		{{{"서울시","구로구","고척동"},"홍길동","011-1111-1111"},{"전산과","객체지향"},"분석설계" },
		{{{"서울시","구로구","고척동"},"최윤호","011-2222-2456"},{"전산과","객체지향"},"분석설계" },
		{{{"서울시","구로구","고척동"},"박종학","011-3333-2456"},{"전산과","객체지향"},"분석설계" },
		{{{"서울시","구로구","고척동"},"이종석","016-3467-4389"},{"전산과","객체지향"},"분석설계" },
		{{{"서울시","구로구","고척동"},"신용현","017-2222-2456"},{"전산과","객체지향"},"분석설계" },
	};
	student student_info[10] = {
		{ {{"서울시","","도곡동"},"김영국","011-4567-9834"}, 9952203, 4.20, "전자상거래", "공무원", 1},
		{ {{"서울시","","도화동"},"강미연","011-4567-9834"}, 9952203, 3.50, "전산정보과", "회사원", 0},
		{ {{"서울시","","고척동"},"송은혜","011-4567-9834"}, 9952203, 3.20, "비즈니스과", "회사원", 2},
		{ {{"서울시","","마곡동"},"박보현","011-4567-9834"}, 9952203, 3.00, "전자상거래", "프로게이머", 3},
		{ {{"서울시","","화곡동"},"김미경","011-4567-9834"}, 9952203, 4.10, "전자상거래", "웹마스터", 4},
		{ {{"서울시","","대치동"},"김형근","011-4567-9834"}, 9952203, 4.20, "비즈니스과", "웹디자너", 2},
		{ {{"서울시","","마장동"},"배태준","011-4567-9834"}, 9952203, 4.30, "전자상거래", "군인", 0},
		{ {{"서울시","","부평동"},"김보름","011-4567-9834"}, 9952203, 4.30, "전자상거래", "웹디자너", 1},
		{ {{"서울시","","도곡동"},"서정순","011-4567-9834"}, 9952203, 3.50, "비즈니스과", "웹마스터", 3},
		{ {{"서울시","","도곡동"},"최종욱","011-4567-9834"}, 9952203, 3.70, "비서과", "DB관리자", 2},

	};
	//이름 전화번호 주소(시,동) 학번 평점 학과 진로 지도교수
	int len = sizeof(student_info) / sizeof(student_info[0]);
	printf("%s  %12s   %11s    %8s %5s     %s    %10s  %s\n", "이름", "전화번호", "주소", "학 번", "평점", "학과","진로","지도교수");
	for (int i = 0; i < len; i++) {
		printf("%s  %s   %s%s  %07d %.2lf  %10s   %10s  %s\n", student_info[i].person_student.name, student_info[i].person_student.phone, student_info[i].person_student.address.city, student_info[i].person_student.address.dong, student_info[i].number, student_info[i].mean, student_info[i].major, student_info[i].career, professor1[student_info[i].professor_name].person.name);
	}


	return 0;
};
*/