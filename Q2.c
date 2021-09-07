/*
 연습문제 2번 풀이.
 -> 1번과 비교 : 이렇게 구구단처럼 출력 포맷이 정해져 있을 때는 fprintf()함수를 쓰는 것이 더 효율적이다.
 last modified 2021-09-08.
*/
#include <stdio.h>
int main() {
	FILE* stream = fopen("99_ver2.txt", "w");

	// 1~9 숫자의 아스키 코드는 49~57이다.
	for (int i = 1; i < 10; i++) {
		fputc(i + 48, stream);
		fputs("단\n", stream);

		for (int j = 1; j < 10; j++) {
			fputc(i + 48, stream);
			fputc(' ', stream);
			fputc('*', stream);
			fputc(' ', stream);
			fputc(j + 48, stream);
			fputc(' ', stream);
			fputc('=', stream);
			fputc(' ', stream);

			int r = i * j;
			fputc((int)(r / 10) + 48, stream);
			fputc((r % 10) + 48, stream);
			fputc('\n', stream);
		}
	}

	fclose(stream);

	return 0;
}