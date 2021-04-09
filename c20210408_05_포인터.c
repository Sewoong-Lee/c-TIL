#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {// 노트 포인터 참고
	//포인터 변수
	//int a = 10; 
	//int* p = &a; //인트형 포인터 변수 생성
	//
	//char c = '@';
	//char* p2 = &c;

	//double d = 3.14;
	//double* p3 = &d;

	//float f = 5.55f; //기본으로 더블형으로 올라감 바이트 차이로 뒤에f붙여줘야 float 변수 생성 가능
	//float* p4 = &f;


	//포인터를 통해 변수 안의 값 가져오기
	//int a = 10; 
	//int* p = &a;  //*선언하겠다의 *
	//printf("a: %d  %p\n",a,&a);
	//printf("p: %p  %d\n",p,*p);  //*여기 포인트의 값

	//double d = 3.14;
	//double* p3 = &d;
	//printf("a: %f  %p\n", d, &d);


	//char c = '@';
	//char* p2 = &c;
	//printf("c: %c  %p\n", c, &c);
	//printf("c: %p  %c\n", p2, *p2);
	//printf("c: %c  %c\n", c, *p2);
	// 
	//float f = 5.55;
	//float* p3 = &f;
	//printf("f : %f  %f\n",f,*p3);
	//printf("f : %f  %p\n", f, &f);

	//실습) 포인터변수 p만을 이용하여 a 와 b의 값을 출력
	//int a = 10, b = 20;
	//int* p;
	//p = &a;
	//printf("a: %d\n",*p);
	//p = &b;  //이거는 변수 p의 값을 바꾼다.
	////*p = &b;  //이거는 p의 주소값의 값을 바꾼다 즉 &a의 값을 바꾼다.
	//printf("b: %d\n",*p );


	// 실습) a=10, b=10, c=30 일떄 base=100을 각 변수에 더해보시오
	// 단, 변수 a,b,c에 접근 할 깨 포인터 변수를 이용하시오
	//내가한거)
	//int a = 10, b = 20,c= 30, base=100;
	//int* p=&a;
	//printf("a+100: %d\n",*p+base);
	//p = &b;
	//printf("b+100: %d\n", *p + base);
	//p = &c;
	//printf("c+100: %d\n", *p + base);

	////해석)
	//int a = 10, b = 20, c = 30, base = 100;
	//int* p = &a;
	//*p += + base;
	//printf("a+100: %d\n", *p);
	//p = &b;
	//*p += base;
	//printf("a+100: %d\n", *p);
	//p = &c;
	//*p += base;
	//printf("a+100: %d\n", *p);



	//배열의 포인터*************************************************************************************************************
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	//printf("%d\n", *p); 
	//printf("%d\n", *(p + 1));
	//printf("%d\n", *(p + 2)); //p=arr 배열에서 1,2번의 값이 출려됨


	//포인터 배열 반복문
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	//for (int i=0;i<3;i++) {
	//	printf("%d  %d  %d  %d\n", *(p + i),*(arr+i),arr[i],p[i]);   //*(p + i),*(arr+i)  arr도 주소여서 똑같다.
	//}

	//증강연산자 활용
	//내가한거)
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n",*p++);
	//}
	////해석)
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n", *p++);
	//	//p++;  이렇게 따로도 댐
	//	//이렇게 포인터를 이동하는게 플러스 하는거보다 조음 (포인터에 계산이 들어가면 느려짐)
	//}

	////번외
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n", *p,*arr);
	//	p++;  
	//	//arr++;  //얘는 상수 변경불사 수여서 안댐
	//}


	//실습) 문자형 배열에 'p','y','t','h','o','n'를 저장하고 포인터 변수를 이용하여 한글자씩 화면에 출력 하여라
	//char arr[6] = { 'p','y','t','h','o','n' };
	//char* p = arr;
	//for (int i = 0; i < 6; i++) {
	//	printf("%c  ", *p);
	//	p++;
	//	//arr++;  //얘는 상수 변경불사 수여서 안댐
	//}


	//피보나치수열 포인터를 이용하여 구하고 출력
	//0 1 1 2 3 5 8 13.....
	//int pibo[21] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	//int* p = pibo;
	//for(int i =2;i<21;i++) {
	//	//p[0] = 0;
	//	//p[1] = 1;
	//	p= p[i - 1] + p[i - 2];
	//	printf("%d", p);
	//}

	//해석
	int fibo[20];
	int* p = fibo;
	*p = 0; p++;  //p의 0번 인덱스 하드코딩, 한칸 옮기고
	*p = 1; p++;  //p의 1번 인덱스 하드코딩, 한칸 옮기고
	for (int i = 2; i < 20; i++) {
		*p = *(p - 2) + *(p - 1);
		p++;
	}
	p = fibo; //포인터 위치 초기화
	for (int i = 0; i < 20; i++) {
		printf("%d  ",*p); 
		p++;
	}

















	return 0;
}