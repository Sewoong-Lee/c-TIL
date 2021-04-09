#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>  // 문자열 관련 함수를 포함한 헤더파일
int main() {
	//문자
	//char c;
	//scanf("%c",&c);
	//printf("%c",c);
	


	// 에코기능이 있다.
	//int c = getchar();  //문자 입력 전용함수 / int로 해도 괜춘 대신 문자로만 읽음
	//printf("입력문자 %c  %d\n",c,c);  //숫자시 아스키코드로 출력
	//putchar(c);  //문자출력 전용함수


	//getch()함수  :  에코기능이 없다.
	//char c = getch();
	//printf("입력문자\n");
	//putchar(c);



	//비밀번호 입력(별표가 찍히게)
	//char pw[5];
	//printf("비밀번호 ㄱㄱ\n");
	//for (int i = 0; i < 4; i++) {
	//	pw[i] = getch();
	//	putchar('*');
	//}
	//pw[4] = '\0';  //pw[]를 문자열로 취급
	//printf("\n비밀번호 : %s",pw);



	//문자열
	//char s[] = "hello";  //맨 뒤에 널문자가 들어가므로 6바이트 필요 []안에 안넣어도 알아서함
	//printf("%s",s);


	//문자열 입력받기
	//char s[6];  //배열의 이름이 주소
	//scanf("%s",s);  // 공백처리 불가
	//printf("%s", s);


	//문자열 입출력 전용 함수 사용  : 공백처리 가능
	//char n[20];
	//printf("너의 이름은?");
	//gets(n);  //문자열 전용 입력 함수
	//printf("당신의 이름은  ");    puts(n);// 문자 전용 함수  // 대신 다른거 할거면 앞에 프린트 써줘야댐
	//                                      //공백이 있는 문자열이어도 하나로 쳐서 바로 들어옴




	//문자열 전용 함수 예시
	//char n[10] = "qqwwee";
	////n = "kkk";  // n이 상수여서 따로 못씀
	//strcpy(n,"kkk");  //뒤에 있는걸 앞으로 복사함
	//puts(n);  // 이제 복사되서 kkk 씀


	//실습)
	//문자열을 입력 받고 그 문자열의 값과 
	char c[20];
	printf("문자를 입력 하세요.");
	gets(c);
	puts(c); 
	printf("주소 : %p \n길이 : %d",c, strlen(c));



	//












	return 0;
}