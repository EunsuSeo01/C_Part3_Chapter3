/*
 �ڷ��� ���� ǥ�� ���� ����� �Լ� ����. fscanf(), fprintf()
 last modified 2021-09-04
*/
#include <stdio.h>
int main(void) {
	FILE* stream;
	char name[10];
	int kor, eng, total;

	printf("1. �̸� �Է� : ");
	fscanf(stdin, "%s", name);		// Ű����κ��� �����͸� �Է�.

	printf("2. ���� ����, ���� ���� �Է� : ");
	fscanf(stdin, "%d %d", &kor, &eng);		// Ű����κ��� �����͸� �Է�.
	total = kor + eng;

	stream = fopen("data4.txt", "wt");
	fprintf(stream, "%s %d %d %d \n", name, kor, eng, total);	// �����͸� ���Ͽ� ���!
	// fprintf(stdout, "%s %d %d %d \n", name, kor, eng, total);	// ���� ��Ʈ���� stdout�̴ϱ� �����͸� ����Ϳ� ����ϴ� �ڵ�!
	fclose(stream);

	return 0;
}