/*
 구조체에 저장된 데이터를 바이너리 파일로 입출력하는 예제.
 last modified 2021-09-05
*/
#include <stdio.h>

struct score {
	char name[20];
	double kor, eng, total;
};
typedef struct score STUDENT;

int main() {
	STUDENT s, ss;		// 구조체 변수 2개 선언.
	FILE* stream;

	printf("1. 이름 입력 : ");
	fscanf(stdin, "%s", s.name);

	printf("2. 국어 점수, 영어 점수 입력 : ");
	fscanf(stdin, "%lf %lf", &s.kor, &s.eng);
	s.total = s.kor + s.eng;		// 구조체 변수 s의 멤버들의 데이터를 입력 받음.

	stream = fopen("student.dat", "wb");	// 바이너리 파일을 쓰기 모드로 오픈.
	fwrite(&s, sizeof(s), 1, stream);	// 구조체 변수 s가 가진 데이터를 stream이 가리키는 파일에 
										// s의 크기만큼 1번 출력한다.
	fclose(stream);		// 파일 닫음.

	stream = fopen("student.dat", "rb");	// 같은 바이너리 파일을 읽기 모드로 오픈!
	fread(&ss, sizeof(s), 1, stream);	// stream이 가리키는 파일의 데이터를 구조체 변수 ss에
										// s의 크기만큼 1번 읽어온다.
	fprintf(stdout, "%s %.2lf %.2lf %.2lf \n", ss.name, ss.kor, ss.eng, ss.total);	// 모니터에 출력.
	fclose(stream);		// 파일 닫음.

	return 0;
}