/*
 data1.txt 파일의 내용을 data2.txt로 복사하는 코드.
 last modified 2021-09-02
*/
#include <stdio.h>
int main(void) {
	FILE* stream1, * stream2;
	int input = 0;

	stream1 = fopen("data1.txt", "rt");		// 읽기 모드는 해당 파일이 없으면 파일 열기 에러가 발생!
	stream2 = fopen("data2.txt", "wt");		// 쓰기 모드는 해당 파일이 없으면 새로 만들어줌.

	puts("파일로부터 데이터를 입력받았다.");
	while (input != EOF) {
		input = fgetc(stream1);		// 인자가 파일 스트림이라서 파일에서 데이터를 입력받아옴.
		fputc(input, stream2);		// 두 번째 인자가 파일 스트림이라서 첫 번째 인자의 내용을 파일에 출력함.
		fputc(input, stdout);		// stdout에 출력. 즉, 모니터에 input 내용을 출력.
	}

	fclose(stream1);
	fclose(stream2);

	return 0;
}