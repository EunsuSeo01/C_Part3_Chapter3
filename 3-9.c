/*
 ������ ���� �����ߴ��� �ƴ����� �˻��ϴ� feof() �Լ��� ��� ����.
 last modified 2021-09-04
*/
#include <stdio.h>
int main() {
	FILE* stream1;
	FILE* stream2;
	char buffer[50];

	stream1 = fopen("data1.txt", "r");
	stream2 = fopen("data2.txt", "w");

	// feof() -> ������ ���� ����: 0�� �ƴ� ��, ����X: 0�� ��ȯ.
	while (!feof(stream1)) {	// ������ ���� �ƴ� ���! �ݺ��� ����. -> feof(stream1) == 0�� ����.
		fgets(buffer, sizeof(buffer), stream1);
		fputs(buffer, stream2);
	}

	fclose(stream1);
	fclose(stream2);

	return 0;
}