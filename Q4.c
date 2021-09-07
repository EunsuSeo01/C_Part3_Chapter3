/*
 연습문제 4번 풀이.
 last modified 2021-09-08.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int no;
	char name[10];
	double score1, score2, score3, total = 0;

	FILE* stream1 = fopen("score.txt", "r");
	FILE* stream2 = fopen("totalscore.txt", "w");
	if (stream1 == NULL || stream2 == NULL)
		exit(-1);

	// fscanf()함수는 파일의 끝에 도달하면 EOF를 반환한다! (NULL로 확인하는 거 아님!)
	// -> EOF가 나올 때까지 파일로부터 읽어오는 행동을 반복하는 것.
	while (fscanf(stream1, "%d. %s %lf %lf %lf\n", &no, name, &score1, &score2, &score3) != EOF) {
		total = score1 + score2 + score3;
		fprintf(stream2, "%d. %s %.1lf %.1lf %.1lf -> total: %.1lf\n", no, name, score1, score2, score3, total);
	}

	fclose(stream1);
	fclose(stream1);

	return 0;
}