/*
 �������� 2�� Ǯ��.
 -> 1���� �� : �̷��� ������ó�� ��� ������ ������ ���� ���� fprintf()�Լ��� ���� ���� �� ȿ�����̴�.
 last modified 2021-09-08.
*/
#include <stdio.h>
int main() {
	FILE* stream = fopen("99_ver2.txt", "w");

	// 1~9 ������ �ƽ�Ű �ڵ�� 49~57�̴�.
	for (int i = 1; i < 10; i++) {
		fputc(i + 48, stream);
		fputs("��\n", stream);

		for (int j = 1; j < 10; j++) {
			fputc(i + 48, stream);
			fputc(' ', stream);
			fputc('*', stream);
			fputc(' ', stream);
			fputc(j + 48, stream);
			fputc(' ', stream);
			fputc('=', stream);
			fputc(' ', stream);

			int r = i * j;
			fputc((int)(r / 10) + 48, stream);
			fputc((r % 10) + 48, stream);
			fputc('\n', stream);
		}
	}

	fclose(stream);

	return 0;
}