#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////매개변수로 정수 하나의 값을 입력 받아 누적하는 함수
//int b;  // 그래서 여기에 변수를 생성해주면 여기에 누적되서 아래 메인에서 합계  //프로그램이 종료될때까지 유지.
//int usum(int a) {
//	//int b=0;  //여기에 b를 생성하면 지역변수여서 아래 usum이 실행되고 끝나면 사라짐.
//	b += a;
//	return b;
//}

int usum(int a) {
	//static 변수 : 함수가 최초로 실행됬을때 생성. 프로그램 종료시 소멸.
	//선언된 함수 안에서만 접근 가능.  // 다른 공간에 따로 저장
	//지역변수 처럼 함수안에서만 접근 가능하지만 다른 메모리에 저장
	//static int b=0; // static을 붙이면 전역변수 아니어도 누적됨
	//b += a;
	//return b;
}

//실습) 스테틱을 이용한 함수 만들기
// 매개변수 : 없음, 리턴값 : 정수 이 함수를 실행한 횟수
//함수이름 : contt 를 몇번을 실행 했는지.
//반복문을 이용해서 
//)내가한거
int contt() {
		static int b = 0;
		b++;
		return b;
}

//해석)
int conttest() {
	static int cnt = 0;
	cnt++;
	return cnt;
}





int main() {
	//전역변수, 지역변수 사용예시

	//printf("누적 : %d\n", usum(10));
	////b = 100;  //만약 전역변수 까먹고 다시 만들면 다른 값이 나옴.
	//printf("누적 : %d\n", usum(20));
	

	// 내가한거)
	for (int i = 0; i < 5; i++) {
		int a = 0;
		a +=contt();
		printf("누적 : %d\n", a);
	}

	//해석)
	for (int i = 0; i < 10; i++) {
		printf("누적 : %d\n", conttest());
	}






	return 0;
}