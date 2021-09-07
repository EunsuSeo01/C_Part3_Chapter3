/*
 랜덤 접근 함수 - fseek(), ftell().
 fseek()함수로 파일 포인터의 위치를 변경하고, ftell() 함수로 파일의 시작 위치에서부터
 현재 얼마나 떨어져 있는지를 출력하는 예제.
 last modified 2021-09-07
*/
#include <stdio.h>
int main() {
	FILE* stream;
	long distance;		// ftell()함수의 반환값을 받기 위한 변수. 반환 타입이 long이라서.

	stream = fopen("ftell.txt", "w");
	fputs("ABCDEFGHIJ", stream);
	fclose(stream);

	stream = fopen("ftell.txt", "r");

	fseek(stream, -8, SEEK_END);	// 파일의 끝에서부터 -8바이트만큼 위치 이동.
	fprintf(stdout, "%c \n", fgetc(stream));	// 출력문이 수행되면서 SEEK_CUR가 오른쪽으로 하나 증가됨.

	distance = ftell(stream);
	printf("거리 : %ld \n", distance);		// long형은 서식문자가 %ld.
	fclose(stream);

	return 0;
}