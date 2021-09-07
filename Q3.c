/*
 �������� 3�� Ǯ��.
 last modified 2021-09-08.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char slice[], int index) {
	// �����͸� ���� �ڹٲ�� �ϴ� Ƚ��.
	int exchange_num = (int)((index + 1) / 2 + 0.5);
	
	// reverse.
	for (int i = 0; i < exchange_num; i++) {
		char temp = slice[i];
		slice[i] = slice[index - i];
		slice[index - i] = temp;
	}
}
int main() {
	// source.txt ���� �о�ͼ� ����Ϳ� ���.
	FILE* stream = fopen("source.txt", "r");
	if (stream == NULL)
		exit(-1);

	char buffer[50];
	char slice[6];

	fgets(buffer, sizeof(buffer), stream);	// fgets()�� ������ buffer�� ���Ṯ�� �� �ε����� '\n'�� ������ �Ǿ����.

	printf("source.txt ������ ���� : ");
	fprintf(stdout, "%s", buffer);

	fclose(stream);

	// dest.txt ���� ���� source.txt ���� ���� ����.
	// But, 5����Ʈ���� ������ �Ųٷ� ����� ������ ��.
	stream = fopen("dest.txt", "w");
	int size = strlen(buffer) - 1;		// '\n' ����.

	for (int i = 0; i < size; i++) {
		slice[i % 5] = buffer[i];

		// 5����Ʈ�� �Ǵ� �� or ���ڿ��� ���� ������ reverse �ʿ�.
		if (i % 5 == 4 || i == size - 1) {
			// ���� �Ųٷ� ������.
			reverse(slice, i % 5);
			slice[i % 5 + 1] = '\0';

			// ������ ���� ���Ͽ� ���.
			fprintf(stream, "%s", slice);
		}
	}

	fclose(stream);

	return 0;
}