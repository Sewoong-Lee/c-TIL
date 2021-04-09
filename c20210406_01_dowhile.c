#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	//do~while (최소 한번은 실행 이후, 조건을 따짐)
	//int a = -1;
	//do {
	//	printf("%d",a);
	//} while (a>0);  //(최소 한번은 실행 이후, 조건을 따짐)

	////사용자에게 값을 입력을 받아서 y이면 뮤직플레이 출력
	//char an;
	//while (an=='y'){
	//	printf("음악 플레이y?");
	//	scanf("%c",&an);
	//	printf("플레이 ㄱㄱ");
	//}  // 위 처럼 하면 입력을 받기전에 반복문의 조건을 체크하여 시작이 안댐


	//char an='y'; //an초기화
	//while (an == 'y') {
	//	printf("음악 플레이y?");
	//	scanf("%c", &an);
	//	getchar();  //입력한 뒤 남아있는 엔터를 지움
	//	printf("플레이 ㄱㄱ");
	//}


	//char an = 'y'; 
	//do {
	//	printf("플레이 ㄱㄱ\n");  //말이 이상해서 바꿈
	//	printf("계속 ㄱㄱ y ?");
	//	scanf("%c", &an);
	//	getchar();  
	//} while (an == 'y');


	//실습) 어떤 정수를 계속 입력 받아서 합계를 더하고 0을 입력한 경우 종료하는 프로그램을 작성 하시오.
	//(do~while 이용)
	int a,b=0;
	do {
		printf("정수 입력해");
		scanf("%d",&a);
		b += a;
	} while (a!=0);
	printf("합계눈? : %d", b);











	return 0;
}