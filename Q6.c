/*
 �������� 6�� Ǯ��.
 last modified 2021-09-08.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE* stream = fopen("score.txt", "r");
	if (stream == NULL)
		exit(-1);

	fseek(stream, 0, SEEK_END);
	printf("score.txt ������ ũ�� : %d\n", ftell(stream));

	fclose(stream);

	return 0;
}