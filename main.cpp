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

//생년월일은 두개  나이, 월
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
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}

	for (int i = 0; i < 26; i++) {
		fscanf_s(ifp, "%s %s %s %s %s %d %s", std1[i].company, 30, std1[i].name, 30, std1[i].gender, 30, std1[i].phone, 30, std1[i].email, 30, &std1[i].birthday, std1[i].major, 30);
	}


	printf("검색\n1.지망 기업 2.이름 3.성별 4.전화번호 5.이메일 6.생년월일 7.전공 8.전체보기\n");
	int a = 0;
	scanf_s("%d", &a);

	switch (a) {
	case 1:
		printf("지망기업\n");
		printf("지망기업 검색: ");
		scanf_s("%s", keyword, 50);
		company_search(keyword, std1);
		
		break;
	case 2:
		printf("이름\n");
		printf("이름 검색: ");
		scanf_s("%s", keyword, 50);
		name_search(keyword, std1);

		break;
	case 3:
		printf("성별\n");
		printf("성별 검색:  (M/F) ");
		scanf_s("%s", keyword, 50);
		gender_search(keyword, std1);

		break;
	case 4:
		printf("전화번호\n");
		printf("전화번호 검색: ");
		scanf_s("%s", keyword, 50);
		phone_search(keyword, std1);

		break;
	case 5:
		printf("이메일\n");
		printf("이메일 검색: ");
		scanf_s("%s", keyword, 50);
		email_search(keyword, std1);

		break;
	case 6:
		printf("생년월일\n");
		printf("1.나이검색 2.월검색 \n");
		int ch;
		scanf_s("%d", &birth);
		if (birth == 1)
		{
			printf("나이 검색: ");
			scanf_s("%d", &ch);
			age_search(ch, std1);
		}
		else if (birth == 2) {
			printf("월 검색: ");
			scanf_s("%d", &ch);
			month_search(ch, std1);
		}
		else {
			printf("잘못입력하셨습니다. 다시 실행해주세요.\n");
		}
		break;

	case 7:
		printf("전공\n");
		printf("전공 검색: ");
		scanf_s("%s", keyword, 50);
		major_search(keyword, std1);

		break;
	
	case 8:
		printf("전체보기\n");
		total_list(std1);
		break;
	default:
		printf("다시 실행해주세요.");
		break;
	}

	fclose(ifp);
}