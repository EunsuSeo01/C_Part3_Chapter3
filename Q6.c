/*
 연습문제 6번 풀이.
 last modified 2021-09-08.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE* stream = fopen("score.txt", "r");
	if (stream == NULL)
		exit(-1);

	fseek(stream, 0, SEEK_END);
	printf("score.txt 파일의 크기 : %d\n", ftell(stream));

	fclose(stream);

	return 0;
}