/*
 ����ü�� ����� �����͸� ���̳ʸ� ���Ϸ� ������ϴ� ����.
 last modified 2021-09-05
*/
#include <stdio.h>

struct score {
	char name[20];
	double kor, eng, total;
};
typedef struct score STUDENT;

int main() {
	STUDENT s, ss;		// ����ü ���� 2�� ����.
	FILE* stream;

	printf("1. �̸� �Է� : ");
	fscanf(stdin, "%s", s.name);

	printf("2. ���� ����, ���� ���� �Է� : ");
	fscanf(stdin, "%lf %lf", &s.kor, &s.eng);
	s.total = s.kor + s.eng;		// ����ü ���� s�� ������� �����͸� �Է� ����.

	stream = fopen("student.dat", "wb");	// ���̳ʸ� ������ ���� ���� ����.
	fwrite(&s, sizeof(s), 1, stream);	// ����ü ���� s�� ���� �����͸� stream�� ����Ű�� ���Ͽ� 
										// s�� ũ�⸸ŭ 1�� ����Ѵ�.
	fclose(stream);		// ���� ����.

	stream = fopen("student.dat", "rb");	// ���� ���̳ʸ� ������ �б� ���� ����!
	fread(&ss, sizeof(s), 1, stream);	// stream�� ����Ű�� ������ �����͸� ����ü ���� ss��
										// s�� ũ�⸸ŭ 1�� �о�´�.
	fprintf(stdout, "%s %.2lf %.2lf %.2lf \n", ss.name, ss.kor, ss.eng, ss.total);	// ����Ϳ� ���.
	fclose(stream);		// ���� ����.

	return 0;
}