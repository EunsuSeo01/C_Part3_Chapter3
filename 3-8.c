/*
 data4.txt�� ������ data5.txt�� �����ϴ� �ڵ�.
 last modified 2021-09-04
*/
#include <stdio.h>
int main(void) {
	FILE* stream1, * stream2;

	char name[10] = " ";
	int kor = 0, eng = 0, total = 0;

	stream1 = fopen("data4.txt", "r");
	stream2 = fopen("data5.txt", "w");

	fscanf(stream1, "%s %d %d %d \n", name, &kor, &eng, &total);	// ���Ͽ��� ���� �Է¹޾Ƽ�
	fprintf(stream2, "%s %d %d %d \n", name, kor, eng, total);		// �� ���Ͽ� ��½�Ŵ. -> ����.
	// fprintf(stdout, "%s %d %d %d \n", name, kor, eng, total);	// ����Ϳ� ���.

	fclose(stream1);
	fclose(stream2);

	return 0;
}