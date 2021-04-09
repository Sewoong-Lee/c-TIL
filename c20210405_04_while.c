#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//반복문 1은 무한 0은 펄스
	//while (1){  //여기에 ture 쓰면 안대요~~~~~
	//	printf("zzzzz");
	//}


	//break를 사용하여 반복문 탈출
	//int tt = 0;
	//while (1) {
	//	printf("zzz!! %d\n",tt+1);
	//	tt++;    //tt += 1;  // tt+1=tt
	//	if (tt > 9) break;
	//}


	//실습) 합계를 구하시오 (1~10까지)
	//int i = 0, sum = 0;
	//while (i < 10) {
	//	//printf("%d\n", ++i);
	//	sum += ++i;  //i=i+1;   sum += i;  sum=sum+i;
	//	//printf("%d\n", sum);
	//}
	//printf("%d\n", sum);



	//합이 2천을 넘는 정수와 그 합을 구하라
	//int i = 0, sum = 0;
	//while (sum<2000){
	//	sum += ++i;
	//	//printf("%d %d",sum, i);
	//}
	//printf("%d + %d = %d",sum-i,i,sum);



	//실습) 1부터 20까지의 수 중 3의 배수만 출력하는 프로그램을 작성 하시오 (while문 이용)
	//1)
	//int a = 0;
	//while (a<20) {
	//	a++;
	//	if (a%3==0){
	//		printf("%d\n",a);
	//	}
	//}

	//2)
	//int a = 0;  //0이 찍혀서 바꿔도댐
	//while (a < 20) {
	//	printf("%d\n", a); //21이 찍혀서 위치 변경
	//	a+=3;
	//}


	//3)
	//int a = 0;  
	//while (1) {
	//	a += 3;
	//	if (a > 20) break;
	//	printf("%d\n", a); 
	//}

	//4) continue:계속
	//1~10까지 짝수만 출력
	//int a = 0;
	//while (a<10){
	//	a++;
	//	if (a % 2 != 0) continue;
	//	printf("%d\n",a);
	//}
	

	











	return 0;
}