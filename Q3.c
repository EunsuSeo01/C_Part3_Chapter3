/*
 연습문제 3번 풀이.
 last modified 2021-09-08.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char slice[], int index) {
	// 데이터를 서로 뒤바꿔야 하는 횟수.
	int exchange_num = (int)((index + 1) / 2 + 0.5);
	
	// reverse.
	for (int i = 0; i < exchange_num; i++) {
		char temp = slice[i];
		slice[i] = slice[index - i];
		slice[index - i] = temp;
	}
}
int main() {
	// source.txt 내용 읽어와서 모니터에 출력.
	FILE* stream = fopen("source.txt", "r");
	if (stream == NULL)
		exit(-1);

	char buffer[50];
	char slice[6];

	fgets(buffer, sizeof(buffer), stream);	// fgets()로 받으면 buffer에 종료문자 전 인덱스에 '\n'도 포함이 되어버림.

	printf("source.txt 파일의 내용 : ");
	fprintf(stdout, "%s", buffer);

	fclose(stream);

	// dest.txt 파일 만들어서 source.txt 파일 내용 복사.
	// But, 5바이트마다 내용을 거꾸로 뒤집어서 복사해 줌.
	stream = fopen("dest.txt", "w");
	int size = strlen(buffer) - 1;		// '\n' 제거.

	for (int i = 0; i < size; i++) {
		slice[i % 5] = buffer[i];

		// 5바이트가 되는 곳 or 문자열이 끝난 곳에서 reverse 필요.
		if (i % 5 == 4 || i == size - 1) {
			// 내용 거꾸로 뒤집기.
			reverse(slice, i % 5);
			slice[i % 5 + 1] = '\0';

			// 뒤집은 내용 파일에 출력.
			fprintf(stream, "%s", slice);
		}
	}

	fclose(stream);

	return 0;
}