/*
 랜덤 접근 함수 - fseek(), ftell().
 fseek() 함수의 인자 start와 offset을 이용하여 파일 포인터 stream의 위치를 원하는 위치로 이동시키는 코드.
 last modified 2021-09-07
*/
#include <stdio.h>
int main() {
	FILE* stream;
	stream = fopen("seek.txt", "w");
	fputs("ABCDEFGHIJ", stream);	// 파일에 문자열을 출력.
	fclose(stream);

	stream = fopen("seek.txt", "r");

	fseek(stream, 0, SEEK_SET);		// SEEK_SET : 파일의 시작 위치 부터 0바이트만큼 이동.
	fprintf(stdout, "%c \n", fgetc(stream));	// 시작 위치에서 fgetc()로 한 문자를 읽어서 모니터에 출력해줌.

	fseek(stream, 2, SEEK_SET);		// 파일의 시작 위치부터 2바이트만큼 이동.
	fprintf(stdout, "%c \n", fgetc(stream));	// 옮겨진 위치에서 fgetc()로 한 문자를 읽어서 모니터에 출력.

	fseek(stream, -1, SEEK_END);	// SEEK_END : 파일의 끝 위치. 부터 -1바이트만큼 이동.
	fprintf(stdout, "%c \n", fgetc(stream));	// 옮겨진 위치로부터 한 문자를 읽어서 모니터에 출력.
							// ** fgetc()로 한 문자를 읽으면서 파일 포인터의 현재 위치가 오른쪽으로 하나 증가하여 이동하게 된다!

	fseek(stream, -2, SEEK_CUR);	// SEEK_CUR : 파일의 현재 위치. 부터 -2바이트만큼 이동.
	fprintf(stdout, "%c \n", fgetc(stream));	// 옮겨진 위치로부터 한 문자를 읽어서 모니터에 출력.
	fclose(stream);

	return 0;
}