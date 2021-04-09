#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void arrp(int argc, char* argv[]) {  //char** argv 똑같다.
	for (int i = 0; i < argc ; i++) {
		printf("%s  ", argv[i]);
	}
}



int main() {
	//이차 문자열 배열의 매개변수
	
	//포인터의 배열
	//char* p[3] = { "python","c","java" };  //포인터가 3개
	//char (*p)[7] = { "python","c","java" };  // 이건 포인터는 하나, 배열을 건너뜀


	//다차원 배열의 포인터
	//char arr[][7] = { "python","c","java" };  
	//char (*p)[7] = arr;  //이거는 지금 3행 7열짜리 배열  (전체 7바이트) 총21바이트
	//printf("%d  %d  %d", p, p+1, p+2);

	char* p[3] = { "python","c","java" }; 
	//printf("%p  %p  %p\n", p[0], p[1], p[2]);
	//아래의 애를 함수로 만들어보자
	//for (int i = 0; i < 3; i++) {
	//	printf("%s  ", p[i]);
	//}
	//함수 완성
	arrp(3,p);

	return 0;
}