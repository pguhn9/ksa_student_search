#pragma once
#include <stdio.h>
#include <string.h>
#include "ksa_student.h"

typedef struct ksa_student Student;


void company_search(char* parameter, Student* std) {
	int count = 0;
	for (int i = 0; i < 25; i++) {
		if (!strcmp((std + i)->company, parameter)) {
			printf("%s %s %s %s %s %d %s\n", (std + i)->company, (std + i)->name, (std + i)->gender, (std + i)->phone, (std + i)->email, (std + i)->birthday, (std + i)->major);
			count++;
		}
	}
	if (count == 0) {
		printf("검색결과가 없습니다.");
	}
}

void name_search(char* parameter, Student* std) {
	int count = 0;
	for (int i = 0; i < 25; i++) {
		if (!strcmp((std + i)->name, parameter)) {
			printf("%s %s %s %s %s %d %s\n", (std + i)->company, (std + i)->name, (std + i)->gender, (std + i)->phone, (std + i)->email, (std + i)->birthday, (std + i)->major);
			count++;
		}
	}
	if (count == 0) {
		printf("검색결과가 없습니다.");
	}
}

void gender_search(char* parameter, Student* std) {
	int count = 0;
	for (int i = 0; i < 25; i++) {
		if (!strcmp((std + i)->gender, parameter)) {
			printf("%s %s %s %s %s %d %s\n", (std + i)->company, (std + i)->name, (std + i)->gender, (std + i)->phone, (std + i)->email, (std + i)->birthday, (std + i)->major);
			count++;
		}
	}
	if (count == 0) {
		printf("검색결과가 없습니다.");
	}
}

void phone_search(char* parameter, Student* std) {
	int count = 0;
	for (int i = 0; i < 25; i++) {
		if (!strcmp((std + i)->phone, parameter)) {
			printf("%s %s %s %s %s %d %s\n", (std + i)->company, (std + i)->name, (std + i)->gender, (std + i)->phone, (std + i)->email, (std + i)->birthday, (std + i)->major);
			count++;
		}
	}
	if (count == 0) {
		printf("검색결과가 없습니다.");
	}
}

void email_search(char* parameter, Student* std) {
	int count = 0;
	for (int i = 0; i < 25; i++) {
		if (!strcmp((std + i)->email, parameter)) {
			printf("%s %s %s %s %s %d %s\n", (std + i)->company, (std + i)->name, (std + i)->gender, (std + i)->phone, (std + i)->email, (std + i)->birthday, (std + i)->major);
			count++;
		}
	}
	if (count == 0) {
		printf("검색결과가 없습니다.");
	}
}

void age_search(int parameter, Student* std) {
	int count = 0;
	int age;
	for (int i = 0; i < 25; i++) {
		age = 122 - (((std + i)->birthday) / 10000);
		if (age == parameter) {
			printf("%s %s %s %s %s %d %s\n", (std + i)->company, (std + i)->name, (std + i)->gender, (std + i)->phone, (std + i)->email, (std + i)->birthday, (std + i)->major);
			count++;
		}
	}
	if (count == 0) {
		printf("검색결과가 없습니다.");
	}
}

void month_search(int parameter, Student* std) {
	int count = 0;
	int month;
	for (int i = 0; i < 25; i++) {
		month = (((std + i)->birthday) % 10000) / 100;
		if (month == parameter) {
			printf("%s %s %s %s %s %d %s\n", (std + i)->company, (std + i)->name, (std + i)->gender, (std + i)->phone, (std + i)->email, (std + i)->birthday, (std + i)->major);
			count++;
		}
	}
	if (count == 0) {
		printf("검색결과가 없습니다.");
	}
}

void major_search(char* parameter, Student* std) {
	int count = 0;
	for (int i = 0; i < 25; i++) {
		if (!strcmp((std + i)->major, parameter)) {
			printf("%s %s %s %s %s %d %s\n", (std + i)->company, (std + i)->name, (std + i)->gender, (std + i)->phone, (std + i)->email, (std + i)->birthday, (std + i)->major);
			count++;
		}
	}
	if (count == 0) {
		printf("검색결과가 없습니다.");
	}
}
