/*
 ��Ʈ���� ����ϴ� ����� �Լ����� ���۸� �����ϸ鼭 ���� ������ ����Ű�µ�,
 fflush() �Լ��� �ذ��� �� �ִ�. �� ����.
 -> �׷��� Visual Studio 2015 �̻� �������ʹ� C�� ǥ���� ���󰡱� ����
 fflush(stdin) �ƹ��� ������ ���� �ʵ��� �������Ҵ�. ��� fflush�� ���Ǵ� '��� ����'�� ���� �Լ���.
 last modified 2021-09-05
*/
#include <stdio.h>
int main() {
	int age;
	char name[20];

	printf("���̸� �Է� : ");
	scanf("%d", &age);

	fflush(stdin);		// �Է¹��۸� �����ְڴٴ� ��! -> ���� �ƴ�... ���� �� �Ѵ�.

	printf("�̸��� �Է� : ");
	fgets(name, sizeof(name), stdin);	// Ű����κ��� �Է� ����.

	printf("%d \n", age);
	printf("%s \n", name);

	return 0;
}