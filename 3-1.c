/*
 �ܼ� ǥ�� �Լ��� getchar()�� putchar() �Լ��� �⺻ ���� ������ ���캸�� ���� ����.
 last modified 2021-08-31
*/
#include <stdio.h>		// �ܼ� ǥ�� ����� �Լ� (= ǥ�� ����� �Լ�)�� ����ϱ� ����.
						// -> �ܼ�(Ű����, �����)�� �̿��� �����͸� �аų� ����ϴ� �Լ���.
						// getchar(), putchar()�� ���⿡ ����.
int main(void) {
	char ch = 0;
	
	while (ch != EOF) {	// EOF(= -1)�� �ƴϸ� ��� �ݺ�.
		ch = getchar();
		putchar(ch);
	}	// Ctrl + ZŰ�� ������ EOF�� �νĵǾ� �ݺ����� ����ȴ�!

	return 0;
}