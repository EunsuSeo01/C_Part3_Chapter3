/*
 ���� ���� ǥ�� ���� ����� �Լ� ��� ����.
 last modified 2021-09-01
*/
#include <stdio.h>
int main(void) {
	FILE* stream;
	int file_state;
	int input = 0;

	// ���� ��Ʈ�� ������ ���� ����.
	stream = fopen("data1.txt", "w");
	if (stream == NULL)
		printf("���� ���� ���� \n");

	puts("������ �Է�");
	while (input != EOF) {
		input = fgetc(stdin);	// stdin�� ���� ��Ʈ���̴ϱ� ���ڷ� �� �� �ִ�.
								// ������ ��Ʈ���� stdin�̹Ƿ� Ű����κ��� ���ڸ� �Է¹޴� ��!
								// Ű����� �Է¹��� ���� input�� ����.
		fputc(input, stream);	// ���� input�� ����� ���ڸ� ���� ��Ʈ�� stream�� ����
								// data1.txt ���Ͽ� ����Ѵ�.
	}

	// ���� �ݱ�. (���� ��Ʈ�� �Ҹ�)
	file_state = fclose(stream);
	if (file_state == EOF)
		puts("���� �ݱ� ���� \n");

	return 0;
}