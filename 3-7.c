/*
 자료형 단위 표준 파일 입출력 함수 예제. fscanf(), fprintf()
 last modified 2021-09-04
*/
#include <stdio.h>
int main(void) {
	FILE* stream;
	char name[10];
	int kor, eng, total;

	printf("1. 이름 입력 : ");
	fscanf(stdin, "%s", name);		// 키보드로부터 데이터를 입력.

	printf("2. 국어 점수, 영어 점수 입력 : ");
	fscanf(stdin, "%d %d", &kor, &eng);		// 키보드로부터 데이터를 입력.
	total = kor + eng;

	stream = fopen("data4.txt", "wt");
	fprintf(stream, "%s %d %d %d \n", name, kor, eng, total);	// 데이터를 파일에 출력!
	// fprintf(stdout, "%s %d %d %d \n", name, kor, eng, total);	// 파일 스트림이 stdout이니까 데이터를 모니터에 출력하는 코드!
	fclose(stream);

	return 0;
}