/*
 파일의 끝에 도달했는지 아닌지를 검사하는 feof() 함수의 사용 예제.
 last modified 2021-09-04
*/
#include <stdio.h>
int main() {
	FILE* stream1;
	FILE* stream2;
	char buffer[50];

	stream1 = fopen("data1.txt", "r");
	stream2 = fopen("data2.txt", "w");

	// feof() -> 파일의 끝에 도달: 0이 아닌 수, 도달X: 0을 반환.
	while (!feof(stream1)) {	// 파일의 끝이 아닌 경우! 반복문 실행. -> feof(stream1) == 0과 같음.
		fgets(buffer, sizeof(buffer), stream1);
		fputs(buffer, stream2);
	}

	fclose(stream1);
	fclose(stream2);

	return 0;
}