/*
 "���ڿ�" ���� ǥ�� ���� ����� �Լ� ��� ����.
 last modified 2021-09-02
*/
#include <stdio.h>
int main(void) {
	FILE* stream;
	char buffer[50];

	stream = fopen("data3.txt", "wt");
	if (stream == NULL)
		puts("���� ���� ����");

	fgets(buffer, sizeof(buffer), stdin);		// Ű����κ���,
												// sizeof(buffer) ũ�⸸ŭ �Է¹޾�
												// -> ���ڿ��� �ִ� �� ��° ����(sizeof(buffer))��ŭ �Է¹��� �� �ִٴ� ��.
												// �迭 buffer�� �����Ѵ�.
	fputs(buffer, stream);		// �迭 buffer�� stream�� ���� data3.txt ���Ͽ� ���.

	fclose(stream);

	return 0;
}