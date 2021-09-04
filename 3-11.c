/*
 바이너리 파일의 입출력 예제.
 last modified 2021-09-05
*/
#include <stdio.h>
int main() {
	int buffer1[5] = { 0xff, 0x56, 0x78, 0xfa, 0xf1 };
	int buffer2[5];

	FILE* stream;
	stream = fopen("student.dat", "wb");	// wb : 바이너리 파일을 쓰기 모드로 연다.
	fwrite(buffer1, sizeof(int), 5, stream);	// buffer1의 데이터를 sizeof(int) 크기만큼
												// 5개를 가져와서 바이너리 파일에 출력한다.
	fclose(stream);

	stream = fopen("student.dat", "rb");	// rb : 바이너리 파일을 읽기 모드로 연다.
	fread(buffer2, sizeof(int), 5, stream);		// 바이너리 파일로부터 데이터를 sizeof(int) 크기씩
												// 5개를 buffer2에 입력받아`온다.
	printf("%x %x %x %x %x \n", buffer2[0], buffer2[1], buffer2[2], buffer2[3], buffer2[4]);

	fclose(stream);

	return 0;
}