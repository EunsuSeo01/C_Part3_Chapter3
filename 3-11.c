/*
 ���̳ʸ� ������ ����� ����.
 last modified 2021-09-05
*/
#include <stdio.h>
int main() {
	int buffer1[5] = { 0xff, 0x56, 0x78, 0xfa, 0xf1 };
	int buffer2[5];

	FILE* stream;
	stream = fopen("student.dat", "wb");	// wb : ���̳ʸ� ������ ���� ���� ����.
	fwrite(buffer1, sizeof(int), 5, stream);	// buffer1�� �����͸� sizeof(int) ũ�⸸ŭ
												// 5���� �����ͼ� ���̳ʸ� ���Ͽ� ����Ѵ�.
	fclose(stream);

	stream = fopen("student.dat", "rb");	// rb : ���̳ʸ� ������ �б� ���� ����.
	fread(buffer2, sizeof(int), 5, stream);		// ���̳ʸ� ���Ϸκ��� �����͸� sizeof(int) ũ�⾿
												// 5���� buffer2�� �Է¹޾�`�´�.
	printf("%x %x %x %x %x \n", buffer2[0], buffer2[1], buffer2[2], buffer2[3], buffer2[4]);

	fclose(stream);

	return 0;
}