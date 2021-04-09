#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//매개변수 없다. , 반환값 업다.
void viodtest() {
	printf("void함수\n");  //함수 만듬
}

//매개변수 한개. , 반환값 업다.
void viodt2(int a) {
	printf("매개변수 : %d\n", a);
}

//매개변수 두개. , 반환값 업다.
void viodt3(int a, int p) {
	printf("두수의 합 : %d",a+p);
}

//실습) 매개 변수 : 반지름을 입력 받아
//원의 넓이를 출력해주는 기능
void area(double r) {//r =지역변수 :  함수 실행시 생성,함수 종료시 소멸
	printf("반지름은 %.2f",r);  //지역변수
	printf("원의 넓이는 : %.2f",r*r*3.14);
}
//값이 넘어하는 함수를 coll by value 방식 (r이라는 값을 넘겼으므로)


//매개변수: 반지름(double)  반환값 : 넓이(double)
//반환이 있는 함수 생성
//원의 업이를 구해서 반환하는 함수
double area2(double r) {  //리턴되는 형을 앞에 적어준다.
	double a = r * r * 3.14;
	return a;  //반환값은 1개
}


//실습) 세 정수를 입력 매개변수로 받아서 합을 반환하는 함수 출력
int cc(int a, int b, int c) {
	return a + b + c;
}


//두개의 정수를 배개변수로 받아서 나눈 실수값을 반환하는 함수
double cl(int a, int b) {
	return (double)a / b;
}

//실습) 두 수를 매개변수로 받아서 두수 중 큰 수를 반환하는 함수를 작성하시오.
int bb(int a, int b) {   //함수는 리턴을 만나면 바로 끝!
	if (a>b)
		return a;
	else
		return b;
}
//2)
int bb(int a, int b) {   //함수는 리턴을 만나면 바로 끝!
	int m;
	if (a > b)
		m = a;
	else if (a < b)
		m = b;
	else
		m = 0;  //같다면 0을 줄꺼야 라고 정하자.
	return m;
}

//진입점 함수
int main() { 
	//함수
	//viodtest();  //함수 출력
	//
	//viodt2(20);
	//
	//viodt3(50,20);
	//
	//실습)
	//double a;  //지역변수
	//printf("반지름은?");
	//scanf("%lf",&a);  //주소를 넘겼으므로 콜바이레퍼런스
	//area(a);
	//
	//
	//double r = 3.6;
	//double rv = area2(r);  //함수 결과값 저장 //함수가 더블형이므로 메인에서도 다 함수로 맞춰줌
	//printf("%.2lf", rv);
	//
	//int a, b, c;  // 입력받을시 변수
	////int a = 10, b = 20, c = 30; //하드코딩시 변수
	//scanf("%d %d %d",&a,&b,&c);
	//int e = cc(a, b, c);
	//printf("%d",e);
	//
	//
	//int a = 15, b = 2;
	//double f = cl(a, b);
	//printf("%.2lf",f);
	//
	//
	//int a = 22, b = 12;
	//printf("%d", bb(a, b));

	////2)  만약 같다면 함수안데 특정값을 주고 메인 안에서 따로 작업 처리.
	//int a = 22, b = 12;
	//int m = bb(a, b);
	//if (m != 0)
	//	printf("큰수는 %d", m);
	//else
	//	printf("두수는 같다");







	return 0;
}