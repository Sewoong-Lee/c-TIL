#define _CRT_SECURE_NO_WARNINGS  //scanf함수를 사용하기 위해
#include <stdio.h>

int main() {
	////입력함수
	////정수형 입력방법
	//int a;    // scanf 함수를 사용하기 위해 선언을 통하여 공간 확보
	//printf("입력할 정수는? \n");
	//scanf("%d",&a); //입력받을 값을 정해줘야함  //a의 주소
	//printf("입력한 값 : %d   주소 : %p\n",a,&a);

	//실수형 입력방법
	//float f;
	//double d;
	//printf("f 실수는?\n");
	//scanf("%f",&f);
	//printf("d 실수는?\n");
	//scanf("%lf",&d);  //포맷문자 doule 형일때는 %lf로 입력 받아야한다.
	//printf("입력한 값 : %f %p  %f  %p\n", f,&f,d,&d);

	//문자형 입력받기
	//char c;
	//printf("문자는?");
	//scanf("%c",&c);
	//printf("입력한 문자 : %c", c);

	//실습) 두 정수를 입력받아서 합계를 출력 하시오.
	//int a, b;
	//printf("첫번째 정수는?");
	//scanf("%d", &a);
	//printf("두번째 정수는?");
	//scanf("%d", &b);
	//printf("%d + %d = %d",a,b,a+b);

	//방법2) 두 수를 한꺼번에 받는 방법
	//int a, b;
	//printf("두수는?");
	//scanf("%d %d",&a,&b);
	//printf("%d + %d = %d", a, b, a + b);


	//실습)오늘의 날짜(년,월,일)를 입력 받아서 출력하기.
	//int y, m, d;
	//printf("년, 월, 일 을 입력하시오.");
	//scanf("%d %d %d",&y,&m,&d);
	//printf("%d년 %d월 %d일",y,m,d);

	//만약 구분자를 다른거로 넣고 싶다면
	//int y, m, d;
	//printf("년, 월, 일 을 입력하시오.");
	//scanf("%d-%d-%d", &y, &m, &d);  //구분자를 -로 지정
	//printf("%d년 %d월 %d일", y, m, d);


	//문자열은 포인트를 알아야해서 다음시간에.........

	//실습) 두개의 정수를 입력 받아서 산술연산을 구해보시오.
	//int a, b;
	//printf("두 수를 입력하시오");
	//scanf("%d %d",&a,&b);
	//printf("%d + %d = %d\n", a, b, a + b);
	//printf("%d - %d = %d\n", a, b, a - b);
	//printf("%d * %d = %d\n", a, b, a * b);
	//printf("%d / %d = %f\n", a, b, (double)a / b);


	// 문자를 함께 받는법
	//int a, b;
	//char s;
	//printf("더하기 계산식은?"); 
	//scanf("%d %c %d", &a, &s, &b);
	//printf("%d  %c  %d", a, s, b);


	//엔터를 처리하기 위한 예제
	//아래처럼 이렇게 되면 문제생김
	//윈도우와 c 사이의 인풋스트림에서 엔터를 캐릭터의 한바이트로 인식하여 건너뜀
	//int a, b;
	//char s;
	//printf("첫수?");
	//scanf("%d", &a);
	//printf("문자?");
	//scanf("%c", &s);
	//printf("두번째?");
	//scanf("%d", &b);
	//printf("%d  %c  %d", a, s, b);

	//해결법
	//int a, b;
	//char s;
	//printf("첫수?");
	//scanf("%d", &a);

	//getchar();  //한 문자를 읽어서 반환하는, 버리는 함수 (숫자 이후의 엔터를 날리기 위해)
	//printf("문자?");
	//scanf("%c", &s);

	//printf("두번째?");
	//scanf("%d", &b);

	//printf("%d  %c  %d", a, s, b);



	//실습) 물건 구입 후 거스름돈을 계산하여 출력하는 프로그램을 완성하시오.
	//(단, 물건값과 지불한 돈을 입력 받는다.)
	//int a, b;
	//printf("물건값은?");
	//scanf("%d",&a);
	//printf("받은돈은?");
	//scanf("%d", &b);
	//a<b ? 
	//	printf("거스름돈 : %d",b-a) : 
	//	printf("모자란돈 : %d", a-b);

	// 같은 금액 추가
	//int a, b;
	//printf("물건값은?");
	//scanf("%d", &a);
	//printf("받은돈은?");
	//scanf("%d", &b);
	//a < b ?
	//	printf("거스름돈 : %d", b - a) :
	//	a>b ? printf("모자란돈 : %d", a - b): printf("계산 완료");





	//실습) 국어, 영어, 수학 점수를 입력 받아 합계와 첨균을 구하는 프로그램을 완성하시오
	//int g, y, s;
	//printf("국 영 수 점수를 입력하시오");
	//scanf("%d %d %d",&g,&y,&s);
	//printf("합계 : %d\n평균 : %.2f",g+y+s, (double)(g+y+s)/3);
	////printf("합계 : %d\n평균 : %.2f", g + y + s, (g + y + s) / 3.); // 이렇게 실수형으로 만들어도 댐


	// 두번 계산 안하게 따로 저장하여 하는 방법
	//int g, y, s;
	//printf("국 영 수 점수를 입력하시오");
	//scanf("%d %d %d", &g, &y, &s);
	//int h = g + y + s;
	//printf("합계 : %d\n평균 : %.2f", h, (double)h / 3);
	////printf("합계 : %d\n평균 : %.2f", g + y + s, (g + y + s) / 3.); // 이렇게 실수형으로 만들어도 댐




	//rgb 값 만들기  (바이트 아끼기)
	int r, g, b ; 
	printf("r?"); scanf("%d", &r);
	printf("g?"); scanf("%d", &g);
	printf("b?"); scanf("%d", &b);
	unsigned int rgb = r<<16 | g<<8 | b; //unsigne//마이너스 영역이 없어 공간을 아낄 수 있음
	printf("RGB : %0X",rgb); //16진수를 표현할 수 있는 포맷문자 (0B는 2진수)







	return 0;
}