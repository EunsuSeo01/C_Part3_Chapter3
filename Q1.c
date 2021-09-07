/*
 연습문제 1번 풀이.
 last modified 2021-09-08.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE* stream = fopen("99.txt", "w");
	if (stream == NULL)
		exit(-1);

	for (int i = 1; i < 10; i++) {
		fprintf(stream, "\n%d단\n", i);
		for (int j = 1; j < 10; j++) {
			fprintf(stream, "%d * %d = %d \n", i, j, i * j);
		}
	}
	fclose(stream);

	return 0;
}