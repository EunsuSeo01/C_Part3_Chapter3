/*
 스트림을 사용하는 입출력 함수들은 버퍼를 공유하면서 가끔 문제를 일으키는데,
 fflush() 함수로 해결할 수 있다. 그 예제.
 -> 그러나 Visual Studio 2015 이상 버전부터는 C의 표준을 따라가기 위해
 fflush(stdin) 아무런 동작을 하지 않도록 돌려놓았다. 사실 fflush의 정의는 '출력 버퍼'를 비우는 함수다.
 last modified 2021-09-05
*/
#include <stdio.h>
int main() {
	int age;
	char name[20];

	printf("나이를 입력 : ");
	scanf("%d", &age);

	fflush(stdin);		// 입력버퍼를 지워주겠다는 뜻! -> 이젠 아님... 동작 안 한다.

	printf("이름을 입력 : ");
	fgets(name, sizeof(name), stdin);	// 키보드로부터 입력 받음.

	printf("%d \n", age);
	printf("%s \n", name);

	return 0;
}