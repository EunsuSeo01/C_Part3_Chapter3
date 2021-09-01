/*
 "문자열" 단위 표준 파일 입출력 함수 사용 예제.
 last modified 2021-09-02
*/
#include <stdio.h>
int main(void) {
	FILE* stream;
	char buffer[50];

	stream = fopen("data3.txt", "wt");
	if (stream == NULL)
		puts("파일 열기 오류");

	fgets(buffer, sizeof(buffer), stdin);		// 키보드로부터,
												// sizeof(buffer) 크기만큼 입력받아
												// -> 문자열을 최대 두 번째 인자(sizeof(buffer))만큼 입력받을 수 있다는 뜻.
												// 배열 buffer에 저장한다.
	fputs(buffer, stream);		// 배열 buffer를 stream을 통해 data3.txt 파일에 출력.

	fclose(stream);

	return 0;
}