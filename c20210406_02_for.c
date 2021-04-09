#define _CRT_SECURE_NO_WARNINGS  //scanf 쓰려구
#include <stdio.h>  //입출력합수
int main() {  //진입점함수
	//반복문 : for문

	//int i; // 반복할 변수
	//for (i=0 ; i<10 ; i++) {    //i++은 출력 이후 진행
	//	printf("%d\n", i);
	//}

	//int i; // 반복할 변수
	//for (i = 0; i < 10; i+=2) {    //2씩 증가할시 //i++은 출력 이후 진행
	//	printf("%d\n", i);
	//}

	//실습)구구단을 출력해 보시오.
	//for (int a=1 ; a<10 ; a++) {
	//	printf("%d * %d = %d\n",2,a,2*a);
	//}

	//단수를 입력받아서 출력 해보셈
	//int b = 0;
	//printf("단수?");
	//scanf("%d", &b);
	//for (int a=1; a < 10; a++) {
	//	printf("%d * %d = %d\n", b, a, b * a);
	//}

	//사용자가 0을 입력할때까지 구구단 출력
	//1)
	//int b = 0;
	//do {
	//	printf("단수?");
	//	scanf("%d", &b);
	//	if (b!=0)
	//		for (int a = 1; a < 10; a++) {
	//			printf("%d * %d = %d\n", b, a, b * a);
	//		}
	//} while (b!=0);


	//2)
	//int b = 0;
	//while (1) {
	//	printf("단수?");
	//	scanf("%d", &b);
	//	if (b == 0) break;
	//	for (int a = 1; a < 10; a++) {
	//		printf("%d * %d = %d\n", b, a, b * a);
	//	}
	//}

	//2중 for문
	//for (int i= 0; i < 10; i++) {
	//	printf("--------------------------\n");
	//	for(int j=0;j<10;j++)
	//		printf("%d   %d\n",i,j);
	//}


	//2단부터 9단
	//for (int i = 2; i < 10; i++) {
	//	printf("------------%d 단--------------\n",i);
	//	for (int j = 1; j < 10; j++)
	//		printf("%d * %d = %d\n", i, j,i*j);
	//}


	//3중 반복문
	//for (int i = 0; i < 10; i++) {
	//	for (int j = 0; j < 10; j++) {
	//		for (int k = 0; k < 10; k++) {
	//			printf("%d  %d  %d\n", i, j, k);
	//		}
	//	}
	//}


	//실습) 1부터 100까지의 합을 구하시오.
	// 반복문이 끝나면 합계를 구하시오.

	//int j = 0;
	//for(int i=1; i < 101; i++) {
	//	j += i;
	//printf("%d\n",j);
	//}


	//수를 받아서 ㄱㄱ
	//1) 내가한거 전체 입력박아 합 구하기
	//int j = 0, i = 0, c = 0;
	//printf("첫수");
	//scanf("%d", &i);
	//printf("둘수");
	//scanf("%d", &c);
	//for (i; i < c+1; i++) {
	//	j += i;
	//	//printf("%d + %d = %d\n", j - i, i, j);
	//}
	//printf("%d + %d = %d\n", j - i, i, j); //밖에서도 쓰려고 포문 밖에 i변수 만듬

	//2) 1~n 까지 입력받아 ㄱㄱ 해석
	//int j = 0,n;
	//printf("n은?");
	//scanf("%d",&n);
	//for (int i = 1; i < n+1; i++) {
	//	j += i;
	//	//printf("%d\n", j);
	//}
	//printf("1에서 %d 까지의 합은 %d\n",n, j);


	//int j = 0, n;
	//printf("n은?");
	//scanf("%d", &n);
	//for (int i = 1; i < n + 1; i++) { //i는 지역변수로 선언 for문 안에 서만 살고있음
	//	j += i;                       //하여 아래에 같은 변수로도 사용 가능(i)
	//	//printf("%d\n", j);
	//}
	//printf("1에서 %d 까지의 합은 %d\n", n, j);
	////printf("i의 현재 값 %d\n", i); // 하여 포문 안에 선언하면 밖에서 못읽음 하여 컴파일 불가



	// 두 정수를 입력 받아서 큰수에서 작은수를 뺀 값을 구하는 프로그램을 작성하시오.
	// 계속 입력을 받게 하고 0을 입력하면 종료되게 만들어라.
	//)내가한거
	//int a, b;
	//for (int i=0;i<10;i++) {
	//	printf("두수는?");
	//	scanf("%d  %d",&a,&b);
	//	if (a == 0 || b == 0) {
	//		printf("종료"); break;
	//	}
	//	else {
	//	}
	//		if (a > b) {
	//			printf("%d\n", a - b);
	//		}
	//		else if (b < a) {
	//			printf("%d\n", b - a);
	//		}
	//		else{
	//			printf("같다\n");
	//		}
	//}

	//해석)
	//int a, b;
	//for (int i = 0; i < 10; i++) {
	//	printf("첫수는?");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	printf("둘수는?");
	//	scanf("%d", &b);
	//	if (a > b)
	//		printf("%d\n", a - b);
	//	else if (b < a) 
	//		printf("%d\n", b - a);
	//	else 
	//		printf("같다\n");
	//}

	//)별찍기 1
	//for (int i=1; i < 7; i++) {
	//	for (int j = 0; j < i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	//별찍기2
	//1)
	//for (int i = 7; i > 0; i--) {
	//	for (int j = 0; j < i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	////2)
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j <7-i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	


	//별찍기3
	//int i = 0, j = 0, c = 0;

	//for (i = 0; i < 7; i++) {
	//	for (j = 0; j < i; j++) {
	//		printf("1");
	//	}
	//	for (c = 0; c < 7-i; c++) {
	//		printf("*");
	//	}
	//	
	//	printf("\n");
	//}



	//해석)
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < 7-i; j++) {
	//		printf("1");
	//	}
	//	for (int c = 0; c < i+1; c++) {
	//		printf("*");
	//	}

	//	printf("\n");
	//}

	
	
	//별찍기4
	//int i = 0, j = 0, c = 0;
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < 7-i; j++) {
	//		printf("1");
	//	}
	//	for (int c = 0; c < i*2; c++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	//)해석
	//int i = 0, j = 0, c = 0;
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < 7 - i; j++) {
	//		printf("1");
	//	}
	//	for (int c = 0; c < (i * 2)+1; c++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}






	//내가한거 전체 입력박아 합 구하기
	//int j = 0, i = 0, a=0,c = 0;
	//printf("첫수");
	//scanf("%d", &i);
	//printf("둘수");
	//scanf("%d", &c);
	//a = i;
	//for (i; i < c+1; i++) {
	//	j += i;
	//	//printf("%d + %d = %d\n", j - i, i, j);
	//}
	//printf("%d 에서 %d 까지의 합 %d\n", a, c, j);


	//실습) 펙토리얼 구하기
	// 정수를 입력하시오 7) 1부터 7까지의 곱한 값은 5040
	//int j = 1, i=0, a = 0;
	//printf("어디까지 곱할래?");
	//scanf("%d", &i);
	//a = i;
	//for ( j ; j <a; j++) {
	//	i *= j;  // 여기에서 i의 값이 계속 변하여 a의 변수를 추가로 주어 한계값 고정
	//	//printf("1 에서 %d 까지의 곱 %d\n", a, i);
	//}
	//printf("1 에서 %d 까지의 곱 %d\n", a, i);


	//)해석)
	//int f = 7;
	//int m = 1;
	//for ( int i=1 ; i <f+1; i++) {
	//	m *= i;  
	//}
	//printf("%d\n",m);




	//실습) 1부터 10까지의 정수에서 두 수를 골라 구 수의 합이 10이 되는 두 수를 구하는 프로그램
	// 예시) (1,9)(2,8)(3,7)(4,6)(5,5)
	//////////  이거 모르겠어~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//int a = 0, b = 0;
	//for (a;a<11;a++) {
	//	if (a % 2 == 0) {
	//		b = a;
	//		for (b;b==10;0) {
	//			printf("%d  %d",a,b);
	//		}
	//	}
	//}

	//해석)
	for (int i = 1; i < 10; i++) {
		for (int j = i; j < 10; j++) { //중복 지우기 위해
			if(i+j==10)
			printf("%d  %d\n",i,j);
		}
	}









	//실습) 점심메뉴 고르기
	//메뉴를 고르면 가격과 해당 코너를 출력하는 프로그램을 작성하시오
	//단 메뉴를 잘못 입력하면 가시 메뉴선택 q를 입력하면 종료
	//예시) 1짬뽕, 2.짜장면, 3.불고기, 4.햄버거, q, 종료
	//1 가격 6000원 a코너로 가세요.

	//) 이거 이상한데 왜이러징
	//char a;
	//do {
	//	printf("1짬뽕, 2.짜장면, 3.불고기, 4.햄버거, q 종료");
	//	scanf("%c", &a); 
	//	getchar();  //엔터값 처리(이거 없으면 다시 시작함, 잘못된 코너 나옴)
	//	if (a == 'q') printf("종료\n");
	//	else if (a == '1') printf("짬뽕 1번 6000원 중식 코너 가세요\n");
	//	else if (a == '2') printf("짜장면 2번 4000원 중식 코너 가세요\n");
	//	else if (a == '3') printf("불고기 3번 7000원 한식 코너 가세요\n");
	//	else if (a == '4') printf("햄버거 4번 5000원 양식 코너 가세요\n");
	//	else printf("잘못된 입력\n");
	//	printf("\n");
	//} while (a != 'q');


















	return 0;
}