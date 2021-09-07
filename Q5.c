/*
 연습문제 5번 풀이.
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

	int searchNo;
	printf("찾고 싶은 선수의 번호를 입력하세요: ");
	scanf("%d", &searchNo);

	while (fscanf(stream1, "%d. %s %lf %lf %lf\n", &no, name, &score1, &score2, &score3) != EOF) {
		total = score1 + score2 + score3;
		fprintf(stream2, "%d. %s %.1lf %.1lf %.1lf -> total: %.1lf\n", no, name, score1, score2, score3, total);

		if (no == searchNo) {
			printf("%d. %s total: %.1lf\n", no, name, total);
		}
	}

	fclose(stream1);
	fclose(stream1);

	return 0;
}