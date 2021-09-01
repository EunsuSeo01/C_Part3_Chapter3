/*
 fopen()�� fclose()�� �̿��� ���� ����¿��� ��� ���Ǵ� �⺻ �ڵ�.
 last modified 2021-09-01
*/
#include <stdio.h>
int main(void) {
	FILE* stream;	// ���� ��Ʈ�� ������ ���� stream ����.
	int file_state;		// ������ ���Ḧ ���� ���� üũ int�� ���� ����.

	// ���� ��Ʈ�� ������ ���� ����.
	stream = fopen("data1.txt", "w");	// ��Ʈ���� �����ϰ� data1.txt������ ���� ���� ����.
										// "w" == "wt" t�� ������ ��.
	if (stream == NULL) {
		printf("���� ���� ���� \n");
	}

	// ���� �ݱ�. (���� ��Ʈ�� �Ҹ�)
	file_state = fclose(stream);	// ������ �ݴ´�. ��ȯ���� int. �����ϸ� EOF ��ȯ.
	if (file_state == EOF) {
		printf("���� �ݱ� ���� \n");
	}

	return 0;
}