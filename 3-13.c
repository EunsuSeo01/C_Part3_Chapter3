/*
 ���� ���� �Լ� - fseek(), ftell().
 fseek() �Լ��� ���� start�� offset�� �̿��Ͽ� ���� ������ stream�� ��ġ�� ���ϴ� ��ġ�� �̵���Ű�� �ڵ�.
 last modified 2021-09-07
*/
#include <stdio.h>
int main() {
	FILE* stream;
	stream = fopen("seek.txt", "w");
	fputs("ABCDEFGHIJ", stream);	// ���Ͽ� ���ڿ��� ���.
	fclose(stream);

	stream = fopen("seek.txt", "r");

	fseek(stream, 0, SEEK_SET);		// SEEK_SET : ������ ���� ��ġ ���� 0����Ʈ��ŭ �̵�.
	fprintf(stdout, "%c \n", fgetc(stream));	// ���� ��ġ���� fgetc()�� �� ���ڸ� �о ����Ϳ� �������.

	fseek(stream, 2, SEEK_SET);		// ������ ���� ��ġ���� 2����Ʈ��ŭ �̵�.
	fprintf(stdout, "%c \n", fgetc(stream));	// �Ű��� ��ġ���� fgetc()�� �� ���ڸ� �о ����Ϳ� ���.

	fseek(stream, -1, SEEK_END);	// SEEK_END : ������ �� ��ġ. ���� -1����Ʈ��ŭ �̵�.
	fprintf(stdout, "%c \n", fgetc(stream));	// �Ű��� ��ġ�κ��� �� ���ڸ� �о ����Ϳ� ���.
							// ** fgetc()�� �� ���ڸ� �����鼭 ���� �������� ���� ��ġ�� ���������� �ϳ� �����Ͽ� �̵��ϰ� �ȴ�!

	fseek(stream, -2, SEEK_CUR);	// SEEK_CUR : ������ ���� ��ġ. ���� -2����Ʈ��ŭ �̵�.
	fprintf(stdout, "%c \n", fgetc(stream));	// �Ű��� ��ġ�κ��� �� ���ڸ� �о ����Ϳ� ���.
	fclose(stream);

	return 0;
}