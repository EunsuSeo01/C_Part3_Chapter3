/*
 ��Ʈ���� ����ϴ� ����� �Լ����� ���۸� �����ϸ鼭 ���� ������ ����Ű�µ�,
 fflush() �Լ��� �ذ��� �� �ִ�. �� ����.
 last modified 2021-09-04
*/
#include <stdio.h>
int main() {
	int age;
	char name[20];

	printf("���̸� �Է� : ");
	scanf("%d", &age);

	fflush(stdin);		// �Է¹��۸� �����ְڴٴ� ��!

	printf("�̸��� �Է� : ");
	fgets(name, sizeof(name), stdin);	// Ű����κ��� �Է� ����.

	printf("%d \n", age);
	printf("%s \n", name);

	return 0;
}