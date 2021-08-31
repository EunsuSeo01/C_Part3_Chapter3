/*
 콘솔 표준 함수인 getchar()와 putchar() 함수의 기본 동작 과정을 살펴보기 위한 예제.
 last modified 2021-08-31
*/
#include <stdio.h>		// 콘솔 표준 입출력 함수 (= 표준 입출력 함수)를 사용하기 위해.
						// -> 콘솔(키보드, 모니터)을 이용해 데이터를 읽거나 출력하는 함수들.
						// getchar(), putchar()도 여기에 포함.
int main(void) {
	char ch = 0;
	
	while (ch != EOF) {	// EOF(= -1)가 아니면 계속 반복.
		ch = getchar();
		putchar(ch);
	}	// Ctrl + Z키를 누르면 EOF로 인식되어 반복문이 종료된다!

	return 0;
}