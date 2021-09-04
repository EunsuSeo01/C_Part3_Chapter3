/*
 랜덤 접근 함수 - fseek(), ftell().
 fseek() 함수의 인자 start와 offset을 이용하여 파일 포인터 stream의 위치를 원하는 위치로 이동시키는 코드.
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