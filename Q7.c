/*
 �������� 7�� Ǯ��.
 last modified 2021-09-08.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct student {
	int no;
	char name[10];
	int midexam_score;
	int finalexam_score;
	int attendance;
	int homework;
	int total;
	char grade;
} STUDENT;

int main() {
	FILE* outputFile = fopen("output.txt", "w");
	if (outputFile == NULL)
		exit(-1);

	fprintf(outputFile, "�й� �̸� �߰���� �⸻��� �⼮ ���� ���� ����\n");

	STUDENT s[3];

	for (int i = 0; i < 3; i++) {
		puts("�й�, �̸�, �߰���� ����, �⸻��� ����, �⼮ ����, ���� ������ �Է��ϼ���: ");
		scanf("%d %s %d %d %d %d", &s[i].no, &s[i].name, &s[i].midexam_score, &s[i].finalexam_score, &s[i].attendance, &s[i].homework);
		
		s[i].total = s[i].midexam_score + s[i].finalexam_score + s[i].attendance + s[i].homework;
		
		switch (s[i].total / 10) {
		case 10:
			s[i].grade = 'A';
			break;
		case 9:
			s[i].grade = 'B';
			break;
		case 8:
			s[i].grade = 'C';
			break;
		case 7:
			s[i].grade = 'D';
			break;
		default:
			s[i].grade = 'F';
			break;
		}
		fprintf(outputFile, "%d %s %d %d %d %d %d %c\n", s[i].no, s[i].name,
			s[i].midexam_score, s[i].finalexam_score, s[i].attendance, s[i].homework,
			s[i].total, s[i].grade);
	}

	fclose(outputFile);

	return 0;
}