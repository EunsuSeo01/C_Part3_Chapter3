/*
 스트림을 사용하는 입출력 함수들은 버퍼를 공유하면서 가끔 문제를 일으키는데,
 fflush() 함수로 해결할 수 있다. 그 예제.
 last modified 2021-09-04
*/
#include <stdio.h>
int main() {
	int age;
	char name[20];

	printf("나이를 입력 : ");
	scanf("%d", &age);

	fflush(stdin);		// 입력버퍼를 지워주겠다는 뜻!

	printf("이름을 입력 : ");
	fgets(name, sizeof(name), stdin);	// 키보드로부터 입력 받음.

	printf("%d \n", age);
	printf("%s \n", name);

	return 0;
}