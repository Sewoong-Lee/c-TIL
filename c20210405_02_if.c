#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//조건식이 참일때 수행할 문장과 거짓일때 수행 문장을 구별

	//int a = 10;
	//if (a > 0) {
	//	printf("양수");
	//}
	//else
	//{
	//	printf("음수");
	//}

	//--------------------------------------------------------------------------------------------------------------------

	//int a = 0;
	//if (a > 0) {
	//	printf("양수");
	//}
	//else{
	//	//중첩 이프문
	//	if (a<0){
	//		printf("음수");
	//	}
	//	printf("음수도 양수도 아님");
	//}



	//표현을 간단하게 //참일때 수행이 하나일때 {} 생략 가능 (printf("양수");)
	//int a = 0;
	//if (a > 0) 
	//	printf("양수");
	//else if (a < 0) 
	//	printf("음수");
	//else
	//	printf("음수도 양수도 아님");


	//실습) 두 정수를 입력받아 큰 수를 출력해주세요. (두수는 같을 수 있음)
	//int a, b;
	//printf("두 수를 입력");
	//scanf("%d %d", &a, &b);

	//if (a > b) {
	//	printf("큰수는 %d", a);
	//}
	//else {
	//	if (b > a) {
	//		printf("큰수는 %d", b);
	//	}
	//	else{
	//		printf("같음");
	//	}
	//}

	//실습) 학생의 점수를 입력 받아 학점을 출력하는 프로그램을 작성해 보시오
	//예) 점수 85
	//int a;
	//printf("점수는?");
	//scanf("%d", &a);

	//if (a<0 || a>100)
	//	printf("잘못된 입력");
	//else if (a >= 90)
	//	printf("A");
	//else if (a>=80)
	//	printf("B");
	//else if (a>=70)
	//	printf("C");
	//else if (a>=60)
	//	printf("D");
	//else 
	//	printf("F");


	//실습) 국영수 점수를 입력 받아 총점과 평균을 출력해 보시오
	//(단 60점 미만이 한과목이라고 있으면 과락)
	//int g, y, s;
	//printf("국 영 수");
	//scanf("%d %d %d",&g,&y,&s);

	//int a = g + y + s;

	//if (g < 60)
	//	printf("아아아 탈락~~~ 국어 과락!!!!!!!!!!!!\n");
	//else if (y < 60)
	//	printf("아아아 탈락~~~ 영어 과락!!!!!!!!!!!!\n");
	//else if (s < 60)
	//	printf("아아아 탈락~~~ 수학 과락!!!!!!!!!!!!\n");
	//else
	//	printf("축 합격!!!!!!!!!!\n");

	//printf("총점 : %d\n", a);
	//printf("평균 : %d\n", a / 3);

	//해석)
	//int g, y, s;
	//printf("국 영 수");
	//
	//scanf("%d %d %d", &g, &y, &s);

	//if (g < 60 || y < 60 || s < 60) {
	//	printf("과락\n");
	//}
	//else {
	//	int a = g + y + s;
	//	double b = a / 3.;
	//		printf("축\n총점 : %d\n평균 : %.2f\n", a, b);
	//}

	
	//실습)연도를 입력하여 윤년인지 확인하시오.
	//int a;
	//printf("년도는?");
	//scanf("%d",&a);

	//if (a%4==0 && a % 100 != 0 || a%400==0)
	//	printf("윤년");
	//else
	//	printf("윤년 아님");

	//실습)보기 메뉴를 보고 음식을 선책하면 가야 할 코너를 알려주는 프로그램을 작성
	int a;
	printf("메뉴판\n 1.자장면  2.짬뽕  3.설렁탕  4.비빔밥  5.피자  6.파스타\n");
	scanf("%d",&a);
	
	if (a == 1 || a == 2)
		printf("중식코너");
	else if (a==3 || a==4)
		printf("한식코너");
	else if (a == 5 || a == 6)
		printf("양식코너");
	else
		printf("잘못된 입력");



	// 위에껄 편하게 해보자구~!
	//스위치(선택문)  : if 문과 유사하나 제한적이다.



















	//int a;
	//printf("메뉴판\n 1.자장면  2.짬뽕  3.설렁탕  4.비빔밥  5.피자  6.파스타\n");
	//scanf("%d", &a);

	//if (a == 1)
	//	printf("주문메뉴 : 자장면 \n 가격 : 5,000원 \n 중식코너로 가세요.");
	//else if (a == 2)
	//	printf("주문메뉴 : 짬뽕 \n 가격 : 7,000원 \n 중식코너로 가세요.");
	//else if (a == 3)
	//	printf("주문메뉴 : 설렁탕 \n 가격 : 8,000원 \n 한식코너로 가세요.");
	//else if (a == 4)
	//	printf("주문메뉴 : 비빔밥 \n 가격 : 6,000원 \n 한식코너로 가세요.");
	//else if (a == 5)
	//	printf("주문메뉴 : 피자 \n 가격 : 9,000원 \n 양식코너로 가세요.");
	//else
	//	printf("주문메뉴 : 파스타 \n 가격 : 8,000원 \n 양식코너로 가세요.");




	return 0;
}

