/*
 ���� ���� �Լ� - fseek(), ftell()�� �̿��Ͽ� ������ ũ�⸦ �����ϴ� ����.
 last modified 2021-09-07
*/
#include <stdio.h>
int main() {
	FILE* stream = fopen("ftell.txt", "rb");	// ���̳ʸ� ���� ����. = �ؽ�Ʈ ��忡���� ftell()�Լ��� ��ȯ���� �������� ���� �� �־.
	fseek(stream, 0, SEEK_END);		// ���� ��ġ�� ������ ������ �ű�.
	printf("ftell.txt ������ ũ�� : %d����Ʈ\n", ftell(stream));	// ���� ��ġ�� ���� �������κ��� �� ����Ʈ�� ������ �ִ°�.
																	// -> ������ ũ�⸦ ����Ű�� ��.
	fclose(stream);

	return 0;
}