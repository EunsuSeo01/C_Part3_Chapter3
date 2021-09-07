/*
 ���� ���� �Լ� - fseek(), ftell().
 fseek()�Լ��� ���� �������� ��ġ�� �����ϰ�, ftell() �Լ��� ������ ���� ��ġ��������
 ���� �󸶳� ������ �ִ����� ����ϴ� ����.
 last modified 2021-09-07
*/
#include <stdio.h>
int main() {
	FILE* stream;
	long distance;		// ftell()�Լ��� ��ȯ���� �ޱ� ���� ����. ��ȯ Ÿ���� long�̶�.

	stream = fopen("ftell.txt", "w");
	fputs("ABCDEFGHIJ", stream);
	fclose(stream);

	stream = fopen("ftell.txt", "r");

	fseek(stream, -8, SEEK_END);	// ������ ���������� -8����Ʈ��ŭ ��ġ �̵�.
	fprintf(stdout, "%c \n", fgetc(stream));	// ��¹��� ����Ǹ鼭 SEEK_CUR�� ���������� �ϳ� ������.

	distance = ftell(stream);
	printf("�Ÿ� : %ld \n", distance);		// long���� ���Ĺ��ڰ� %ld.
	fclose(stream);

	return 0;
}