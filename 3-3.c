/*
 fopen()과 fclose()를 이용한 파일 입출력에서 계속 사용되는 기본 코드.
 last modified 2021-09-01
*/
#include <stdio.h>
int main(void) {
	FILE* stream;	// 파일 스트림 포인터 변수 stream 선언.
	int file_state;		// 파일의 종료를 위한 상태 체크 int형 변수 선언.

	// 파일 스트림 생성과 파일 열기.
	stream = fopen("data1.txt", "w");	// 스트림을 생성하고 data1.txt파일을 쓰기 모드로 연다.
										// "w" == "wt" t가 생략된 것.
	if (stream == NULL) {
		printf("파일 열기 에러 \n");
	}

	// 파일 닫기. (파일 스트림 소멸)
	file_state = fclose(stream);	// 파일을 닫는다. 반환형이 int. 실패하면 EOF 반환.
	if (file_state == EOF) {
		printf("파일 닫기 에러 \n");
	}

	return 0;
}