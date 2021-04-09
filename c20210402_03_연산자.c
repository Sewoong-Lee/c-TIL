#include <stdio.h>

int main() {
	//연산자(+ - * / %)
	//정수와 정수=정수
	//실수와 실수=실수
	//int a = 20, b = 3;
	//printf("%d+%d=%d\n",a,b,a+b);
	//printf("%d-%d=%d\n",a,b,a-b);
	//printf("%d*%d=%d\n",a,b,a*b);
	//printf("%d/%d=%f\n",a,b,(double)a/b); //정수앞에 ()쓰면 바꿀수 있다
	//printf("%d %% %d = %d\n",a,b,a%b);
	
	//실습)
	//int a = 50, b = 3;
	//printf("몫:%d\n",a/b);
	//printf("나머지:%d\n", a%b);
	//printf("실수값:%f\n",(double)a/b);


	//단항연산자
	//++  --
	//앞에쓰면 전위, 뒤에쓰면 후위
	//int a = 10;
	//a++;  //a += 1 ;  //a=a+1;
	//printf("%d",a);
	//a--;  // a -= 1;  // a = a - 1;
	//printf("%d", a);

	////한줄에 수행해야하는 계산이 2가지 이상이라면 
	//int a = 10;
	//printf("%d\n",a++); //출력을 하고 증가해라 라는뜻
	//printf("%d\n",a); 
	//printf("%d\n", ++a); //증가를 하고 출력해라 라는뜻


	//예제)
	//int a = 10;
	//a--;
	//printf("%d\n",--a); //8
	//printf("%d\n", a++);  //8
	//printf("%d\n", a--);  //9
	//printf("%d\n", a);  //8

	//int a = 10;
	//int b = --a;
	//int c = b++;
	//b = ++a;
	//printf("%d %d %d\n", a, b, c); // 10, 10, 9

	//관계연산자
	//int a = 10, b = 20;
	//printf("%d\n", a < b);  //1
	//printf("%d\n", a > b);  //0
	//printf("%d\n", a <= b);  //1
	//printf("%d\n", a == b);  //0
	//printf("%d\n", a != b);  //1
	//printf("%d\n", a >= b);  //0

	//논리연산자 : end=&&, or=||, not=!
	//int a = 10, b = 20;
	//printf("%d\n", a>0 && b>0);
	//printf("%d\n", a > 0 && b <0);
	//printf("%d\n", a > 0 || b < 0);
	//printf("%d\n",!(a>0));


	//비트연산자 : &, |, ~, ^
	//printf("%d\n", 4 & 3);
	//printf("%d\n", 4 | 3);
	
	//시프트 연산자 : <<, >>
	//printf("%d\n", 4 >> 2); //오른쪽으로 2비트 밀으란뜻
	//printf("%d\n", 4 << 1); //왼쪽으로 1비트 밀으란뜻


	//-----------------------------------------------------------------------------------------------------------
	//(if와 비슷)삼항 연산자 (조건문)? (참일떄 수행):(거짓일때 수행)
	//int a = 10;
	//a > 0 ? printf("양수"):printf("음수") ;

	//2수중 큰 수를 출력
	//int a = 10, b = 20;
	//a > b ? printf("%d\n", a) : printf("%d\n", b);

	//int c = a > b ? a : b;
	//printf("%d\n", c);
	

	//실습)세가지 수중 가장 큰 값을 구하시오.
	//int a = 20, b = 10, c = 30;
	//int m = a > b ? a : b;
	//m = m > c ? m : c;
	//printf("%d",m);

	//int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	//printf("%d", max);

	//실습) 어떤 정수가 주어졌을때 짝/홀수를 판별하여 출력하시오
	//출력예시 6은 짝수입니다.
	//         9는 홀수입니다.
	int a = 6, b = 9;
	a % 2 == 0 ? printf("%d은 짝수\n",a) : printf("%d은 홀수\n",a);
	b % 2 == 0 ? printf("9는 짝수\n") : printf("9는 홀수\n");

	//포인터 변수를 이용한 방법
	char* z = a % 2 == 0 ? "짝수" : "홀수";
	printf("%d는 %s", a, z);
	char* c = b % 2 == 0 ? "짝수" : "홀수";
	printf("%d는 %s", b, c);






	
	return 0;
}