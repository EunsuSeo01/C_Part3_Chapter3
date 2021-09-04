/*
 data4.txt의 내용을 data5.txt로 복사하는 코드.
 last modified 2021-09-04
*/
#include <stdio.h>
int main(void) {
	FILE* stream1, * stream2;

	char name[10] = " ";
	int kor = 0, eng = 0, total = 0;

	stream1 = fopen("data4.txt", "r");
	stream2 = fopen("data5.txt", "w");

	fscanf(stream1, "%s %d %d %d \n", name, &kor, &eng, &total);	// 파일에서 내용 입력받아서
	fprintf(stream2, "%s %d %d %d \n", name, kor, eng, total);		// 새 파일에 출력시킴. -> 복사.
	// fprintf(stdout, "%s %d %d %d \n", name, kor, eng, total);	// 모니터에 출력.

	fclose(stream1);
	fclose(stream2);

	return 0;
}