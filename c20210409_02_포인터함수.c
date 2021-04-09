#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수 : coll by reference
// 주소를 매개변수로 받는다.
//main 함수의 a의 값을 변경 가능
void chan(int* p) {
	*p = 20;  //가리키고 있는 주소의 값을 변경
}

//실습) 두수 바꾸기
void chan2(int* p, int* p2) {
	int a=0;
	a = *p;
	*p = *p2;
	*p2 = a;
}

void sumcal(int* pa, int* pb) {
	*pb += *pa;
}



int main() {
	//함수에 포인터 넘기기
	//int a=10;  //함수써서 바꾸기
	//int* p = &a;
	//chan(a);
	//printf("a: %d",a);
	////함수를 써도 안바뀜(서로 아무 상관 ㄴㄴ)

	//int a = 10;  //함수써서 바꾸기
	////int* p = &a; //이거 안쓰고 함수에 주소 넘겨주면댐
	//chan(&a);
	//scanf("%d", &a);
	//printf("a: %d", a);

	//실습) 두수 바꾸기
	//int a = 10, b = 20;
	//chan2(&a,&b);
	//printf("%d %d",a,b);

	//실습2) 반복문을 이용해서 입력받은 값을 누적
	//함수에서 누적
	//내가한거
	//int f, sum=0;
	//for (int i=0;i<5;i++) {
	//	scanf("%d",&f);
	//	sumcal(&f,&sum);
	//}
	//printf("합계 : %d",sum);


	//해석)
	int a, sum = 0;
	while (1) {
		scanf("%d", &a);
		if (a == 0) break;
		sumcal(&a, &sum);
	}
	printf("합계 : %d", sum);








	return 0;
}