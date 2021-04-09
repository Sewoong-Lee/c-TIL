#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// if문과 다른 조건문
	//선택 조건문 : 스위치(선택문)  : if 문과 유사하나 제한적이다.
	// {}가 하나뿐이어서 브레크를 적어서 1가지 답만 출력 가능
	//int a = 0;
	//switch (a) {
	//case 0:
	//	printf("제로"); break;
	//case 1:
	//	printf("원"); break;
	//case 2:
	//	printf("투"); break;
	//default:
	//	printf("잘못");
	//}

	//월의 마지막날만 출력
	//int m = 5;
	//switch (m) {
	//case 1:
	//	printf("31"); break;
	//case 2:
	//	printf("28"); break;
	//case 3:
	//	printf("31"); break;
	//case 4:
	//	printf("30"); break;
	//case 5:
	//	printf("31"); break;
	//case 6:
	//	printf("30"); break;
	//case 7:
	//	printf("31"); break;
	//case 8:
	//	printf("31"); break;
	//case 9:
	//	printf("30"); break;
	//case 10:
	//	printf("31"); break;
	//case 11:
	//	printf("30"); break;
	//case 12:
	//	printf("31"); break;
	//default:
	//	printf("잘못");
	//}


	// 이거 넘 김 바꿔보쟈
	//int m = 4;
	//switch (m) {
	//case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	//	printf("31"); break;
	//case 4: case 6: case 9: case 11:
	//	printf("30"); break;
	//case 2:
	//	printf("28"); break;
	//default:
	//	printf("잘못");
	//}
	// 브레이크 안걸면 안나가니까 묶어서 한번에 처리해버림 되자너~


	//메뉴판을 간단하게
	int a;
	printf("메뉴판\n 1.자장면  2.짬뽕  3.설렁탕  4.비빔밥  5.피자  6.파스타\n");
	scanf("%d", &a);

	switch (a){
	case 1: case 2:
		printf("중식코너");  break;
	case 3: case 4:
		printf("한식코너");  break;
	case 5: case 6:
		printf("양식코너");  break;
	default:
		printf("잘못");  break;
	}


	return 0;
}