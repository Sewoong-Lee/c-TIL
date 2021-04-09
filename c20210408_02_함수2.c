#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

// 실습1) 매개변수로 카운트다운 초
// 반환값 없음
// 함수의 목적은 카운트 다운을 출력 해주는 목적의 함수 만드세요

void ca(int t) { //반환이 없으므로 보이드
	for (int i = t; i > -1; i--) {
		Sleep(1000);  //1000이 1초 (밀리세컨드 단위) 1/1000초 단위
		printf("%d\n", i);
	}
	Sleep(1000);
	printf("발사~");
}





int main() {
	//카운트다운 만들기
	//5부터 다운 만들기
	//printf("카운트다운 시작!\n");
	//for (int i = 5; i > -1; i--) {
	//	Sleep(1000);  //1000이 1초 (밀리세컨드 단위) 1/1000초 단위
	//	printf("%d 초\n",i);
	//}
	//Sleep(1000);
	//printf("발사~~~~~~");

	// 실습1)
	//printf("카운트다운 시작!\n");
	ca(10);





	return 0;
}