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
		{"ȫ�浿",2000000},
		{"�Ӱ���",3000000},
		{"�迵ö",2500000},
	};
	for (int i = 0; i < sizeof(Employee) / sizeof(Employee[0]); i++) {
		printf("���� �̸�: %s ���޿�:%d\n",Employee[i].name,Employee[i].wage);
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
	struct home_address add1 = { 223, "������", "�����" };
	struct home_address add2 = { .city = "�����", .st_num = 567, .street="���η�"};
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
	struct person member = { {123, "��û��", "��õ��"}, "ȫ�浿", "011-1111-1111" };
	struct person member2 = { {456, "���η�", "�����"}, "����ȣ", "017-3245-3278" };
	struct person member3 = { {789, "�����", "������"}, "������", "011-2222-2456" };
	printf("\t�ּ�          �� ��\t  ��ȭ��ȣ\n");
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
		{"���±�",52029,4.2,"���ڻ�ŷ�","�����ڳ�"},
		{"������",52030,4.3,"���ڻ�ŷ�","����"},
		{"�躸��",52031,4.3,"���ڻ�ŷ�","�����ڳ�"},
		{"������",52032,4.5,"���ڻ�ŷ�","��������"},
		{"������",52033,4.7,"���ڻ�ŷ�","DB������"},
	};
	printf("�� ��    �й�\t����\t\t�а�\t����\n");
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
	//	struct person member = { {123, "��û��", "��õ��"}, "ȫ�浿", "011-1111-1111" };

	struct professor professor1[5] = { 
		{{{"�����","���α�","��ô��"},"ȫ�浿","011-1111-1111"},{"�����","��ü����"},"�м�����" },
		{{{"�����","���α�","��ô��"},"����ȣ","011-2222-2456"},{"�����","��ü����"},"�м�����" },
		{{{"�����","���α�","��ô��"},"������","011-3333-2456"},{"�����","��ü����"},"�м�����" },
		{{{"�����","���α�","��ô��"},"������","016-3467-4389"},{"�����","��ü����"},"�м�����" },
		{{{"�����","���α�","��ô��"},"�ſ���","017-2222-2456"},{"�����","��ü����"},"�м�����" },

										
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
	//	struct person member = { {123, "��û��", "��õ��"}, "ȫ�浿", "011-1111-1111" };

	struct professor professor1[5] = {
		{{{"�����","���α�","��ô��"},"ȫ�浿","011-1111-1111"},{"�����","��ü����"},"�м�����" },
		{{{"�����","���α�","��ô��"},"����ȣ","011-2222-2456"},{"�����","��ü����"},"�м�����" },
		{{{"�����","���α�","��ô��"},"������","011-3333-2456"},{"�����","��ü����"},"�м�����" },
		{{{"�����","���α�","��ô��"},"������","016-3467-4389"},{"�����","��ü����"},"�м�����" },
		{{{"�����","���α�","��ô��"},"�ſ���","017-2222-2456"},{"�����","��ü����"},"�м�����" },
	};
	student student_info[10] = {
		{ {{"�����","","���"},"�迵��","011-4567-9834"}, 9952203, 4.20, "���ڻ�ŷ�", "������", 1},
		{ {{"�����","","��ȭ��"},"���̿�","011-4567-9834"}, 9952203, 3.50, "����������", "ȸ���", 0},
		{ {{"�����","","��ô��"},"������","011-4567-9834"}, 9952203, 3.20, "����Ͻ���", "ȸ���", 2},
		{ {{"�����","","���"},"�ں���","011-4567-9834"}, 9952203, 3.00, "���ڻ�ŷ�", "���ΰ��̸�", 3},
		{ {{"�����","","ȭ�"},"��̰�","011-4567-9834"}, 9952203, 4.10, "���ڻ�ŷ�", "��������", 4},
		{ {{"�����","","��ġ��"},"������","011-4567-9834"}, 9952203, 4.20, "����Ͻ���", "�����ڳ�", 2},
		{ {{"�����","","���嵿"},"������","011-4567-9834"}, 9952203, 4.30, "���ڻ�ŷ�", "����", 0},
		{ {{"�����","","����"},"�躸��","011-4567-9834"}, 9952203, 4.30, "���ڻ�ŷ�", "�����ڳ�", 1},
		{ {{"�����","","���"},"������","011-4567-9834"}, 9952203, 3.50, "����Ͻ���", "��������", 3},
		{ {{"�����","","���"},"������","011-4567-9834"}, 9952203, 3.70, "�񼭰�", "DB������", 2},

	};
	//�̸� ��ȭ��ȣ �ּ�(��,��) �й� ���� �а� ���� ��������
	int len = sizeof(student_info) / sizeof(student_info[0]);
	printf("%s  %12s   %11s    %8s %5s     %s    %10s  %s\n", "�̸�", "��ȭ��ȣ", "�ּ�", "�� ��", "����", "�а�","����","��������");
	for (int i = 0; i < len; i++) {
		printf("%s  %s   %s%s  %07d %.2lf  %10s   %10s  %s\n", student_info[i].person_student.name, student_info[i].person_student.phone, student_info[i].person_student.address.city, student_info[i].person_student.address.dong, student_info[i].number, student_info[i].mean, student_info[i].major, student_info[i].career, professor1[student_info[i].professor_name].person.name);
	}


	return 0;
};
*/