/*
 콘솔 비표준 입출력 함수의 기본 동작 과정을 살펴보기 위한 예제.
 last modified 2021-08-31
*/
#include <stdio.h>
#include <conio.h>		// 콘솔 비표준 입출력 함수를 사용하기 위해 인클루드.
						// 콘솔 비표준 입출력 함수는 버퍼를 사용하지 않아서 표준에 비해 속도가 빠르다.
int main(void) {
	char ch = 0;
	printf("키 입력: ");

	while (ch != 'q') {
		if (kbhit()) {		// 키보드가 눌러졌는지 확인. kbhit() -> 눌러진 경우 0이 아닌 수를 반환함!
			ch = getche();	// 비표준 입력 함수. (getch(), getche())
							// ch = getch();와 동작은 같으나 getche()는 내 입력이 콘솔(모니터 화면)에 보이고,
							// getch()는 콘솔에 보이지 않는다는 차이점이 있다.
			putch(ch);		// 비표준 출력 함수.
		}
	}

	return 0;
}