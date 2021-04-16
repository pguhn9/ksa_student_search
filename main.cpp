#include <stdio.h>
#include <string.h>
#include "ksa_student.h"
//#include "search.cpp"

typedef struct ksa_student Student;
void company_search(char* parameter, Student* std);
void name_search(char* parameter, Student* std);
void gender_search(char* parameter, Student* std);
void phone_search(char* parameter, Student* std);
void email_search(char* parameter, Student* std);
void age_search(int parameter, Student* std);
void month_search(int parameter, Student* std);
void major_search(char* parameter, Student* std);
void total_list(Student* std);

//��������� �ΰ�  ����, ��
int main()
{
	FILE* ifp;
	Student std1[26];
	Student* psdt = std1;
	char keyword[50];
	int birth = 0;

	fopen_s(&ifp, "slist1.txt", "r");
	if (ifp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return 1;
	}

	for (int i = 0; i < 26; i++) {
		fscanf_s(ifp, "%s %s %s %s %s %d %s", std1[i].company, 30, std1[i].name, 30, std1[i].gender, 30, std1[i].phone, 30, std1[i].email, 30, &std1[i].birthday, std1[i].major, 30);
	}


	printf("�˻�\n1.���� ��� 2.�̸� 3.���� 4.��ȭ��ȣ 5.�̸��� 6.������� 7.���� 8.��ü����\n");
	int a = 0;
	scanf_s("%d", &a);

	switch (a) {
	case 1:
		printf("�������\n");
		printf("������� �˻�: ");
		scanf_s("%s", keyword, 50);
		company_search(keyword, std1);
		
		break;
	case 2:
		printf("�̸�\n");
		printf("�̸� �˻�: ");
		scanf_s("%s", keyword, 50);
		name_search(keyword, std1);

		break;
	case 3:
		printf("����\n");
		printf("���� �˻�:  (M/F) ");
		scanf_s("%s", keyword, 50);
		gender_search(keyword, std1);

		break;
	case 4:
		printf("��ȭ��ȣ\n");
		printf("��ȭ��ȣ �˻�: ");
		scanf_s("%s", keyword, 50);
		phone_search(keyword, std1);

		break;
	case 5:
		printf("�̸���\n");
		printf("�̸��� �˻�: ");
		scanf_s("%s", keyword, 50);
		email_search(keyword, std1);

		break;
	case 6:
		printf("�������\n");
		printf("1.���̰˻� 2.���˻� \n");
		int ch;
		scanf_s("%d", &birth);
		if (birth == 1)
		{
			printf("���� �˻�: ");
			scanf_s("%d", &ch);
			age_search(ch, std1);
		}
		else if (birth == 2) {
			printf("�� �˻�: ");
			scanf_s("%d", &ch);
			month_search(ch, std1);
		}
		else {
			printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �������ּ���.\n");
		}
		break;

	case 7:
		printf("����\n");
		printf("���� �˻�: ");
		scanf_s("%s", keyword, 50);
		major_search(keyword, std1);

		break;
	
	case 8:
		printf("��ü����\n");
		total_list(std1);
		break;
	default:
		printf("�ٽ� �������ּ���.");
		break;
	}

	fclose(ifp);
}