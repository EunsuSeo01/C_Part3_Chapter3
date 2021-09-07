/*
 랜덤 접근 함수 - fseek(), ftell()를 이용하여 파일의 크기를 측정하는 예제.
 last modified 2021-09-07
*/
#include <stdio.h>
int main() {
	FILE* stream = fopen("ftell.txt", "rb");	// 바이너리 모드로 오픈. = 텍스트 모드에서는 ftell()함수의 반환값이 일정하지 않을 수 있어서.
	fseek(stream, 0, SEEK_END);		// 파일 위치를 파일의 끝으로 옮김.
	printf("ftell.txt 파일의 크기 : %d바이트\n", ftell(stream));	// 현재 위치가 시작 지점으로부터 몇 바이트나 떨어져 있는가.
																	// -> 파일의 크기를 가리키게 됨.
	fclose(stream);

	return 0;
}