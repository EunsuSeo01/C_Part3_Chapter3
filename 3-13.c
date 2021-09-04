/*
 ���� ���� �Լ� - fseek(), ftell().
 fseek() �Լ��� ���� start�� offset�� �̿��Ͽ� ���� ������ stream�� ��ġ�� ���ϴ� ��ġ�� �̵���Ű�� �ڵ�.
 last modified 2021-09-05
*/
#include <stdio.h>
int main() {
	FILE* stream;
	stream = fopen("seek.txt", "w");
	fputs("ABCDEFGHIJ", stream);
	fclose(stream);

	stream = fopen("seek.txt", "r");

	fseek(stream, 0, SEEK_SET);
	fprintf(stdout, "%c \n", fgetc(stream));

	fseek(stream, 2, SEEK_SET);
	fprintf(stdout, "%c \n", fgetc(stream));

	fseek(stream, -1, SEEK_END);
	fprintf(stdout, "%c \n", fgetc(stream));

	fseek(stream, -2, SEEK_CUR);
	fprintf(stdout, "%c \n", fgetc(stream));
	fclose(stream);

	return 0;
}