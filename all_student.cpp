#pragma once
#include <stdio.h>
#include <string.h>
#include "ksa_student.h"

typedef struct ksa_student Student;



void total_list(Student* std)
{
	int i;
	for (i = 0; i < 25; i++)

	{
		printf("%15s%8s%6s%16s%30s%10d%25s\n", std[i].company, std[i].name, std[i].gender, std[i].phone, std[i].email, std[i].birthday, std[i].major);
	}
}