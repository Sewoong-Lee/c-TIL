#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	//문자열의 포인터
	//char str[] = "happy";
	////str = "angry";  // 문자열은 상수여서 바꿀수가 없음
	//char* p = str;
	//printf("%s\n",p);

	//p = "python";
	//puts(p);  //문자열 출력 전용 함수


	//실습)이름을 1개 입력 받고 출력을 하는데
	//포인터를 이용
	//char c[5];
	//printf("문자를 입력 하세요.");
	//gets_s(c,5);
	//char* p = c;
	//printf("이름 %s",p);
	////puts(p);  이거로 해도 출력 가능

	//해석  (반복문 써서 계속 해보기)
	//char name[20];
	//char* p = name;
	//while (2) {
	//	printf("이름은?");
	//	gets_s(p, sizeof(name));
	//	if (name[0] == 'q') break;  //q 쓰면 탈출
	//	//puts(p);
	//	//printf("님 환영합니다.");
	//	printf("%s 님 환영합니다.",p);
	//}










	return 0;
}