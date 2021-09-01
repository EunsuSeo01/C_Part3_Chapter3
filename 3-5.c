/*
 data1.txt ������ ������ data2.txt�� �����ϴ� �ڵ�.
 last modified 2021-09-02
*/
#include <stdio.h>
int main(void) {
	FILE* stream1, * stream2;
	int input = 0;

	stream1 = fopen("data1.txt", "rt");		// �б� ���� �ش� ������ ������ ���� ���� ������ �߻�!
	stream2 = fopen("data2.txt", "wt");		// ���� ���� �ش� ������ ������ ���� �������.

	puts("���Ϸκ��� �����͸� �Է¹޾Ҵ�.");
	while (input != EOF) {
		input = fgetc(stream1);		// ���ڰ� ���� ��Ʈ���̶� ���Ͽ��� �����͸� �Է¹޾ƿ�.
		fputc(input, stream2);		// �� ��° ���ڰ� ���� ��Ʈ���̶� ù ��° ������ ������ ���Ͽ� �����.
		fputc(input, stdout);		// stdout�� ���. ��, ����Ϳ� input ������ ���.
	}

	fclose(stream1);
	fclose(stream2);

	return 0;
}