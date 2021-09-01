/*
 문자 단위 표준 파일 입출력 함수 사용 예제.
 last modified 2021-09-01
*/
#include <stdio.h>
int main(void) {
	FILE* stream;
	int file_state;
	int input = 0;

	// 파일 스트림 생성과 파일 열기.
	stream = fopen("data1.txt", "w");
	if (stream == NULL)
		printf("파일 열기 에러 \n");

	puts("데이터 입력");
	while (input != EOF) {
		input = fgetc(stdin);	// stdin도 파일 스트림이니까 인자로 올 수 있다.
								// 선택한 스트림이 stdin이므로 키보드로부터 문자를 입력받는 것!
								// 키보드로 입력받은 것을 input에 저장.
		fputc(input, stream);	// 변수 input에 저장된 문자를 파일 스트림 stream을 통해
								// data1.txt 파일에 출력한다.
	}

	// 파일 닫기. (파일 스트림 소멸)
	file_state = fclose(stream);
	if (file_state == EOF)
		puts("파일 닫기 에러 \n");

	return 0;
}