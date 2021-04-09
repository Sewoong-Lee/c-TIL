#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5
int main() {
	//배열 : array
	//int arr[3];
	//arr[0] = 10; arr[1] = 20; arr[2] = 30;
	//printf("%d  %d  %d\n", arr[0], arr[1], arr[2]);
	//printf("%p  %d\n", arr, sizeof(arr));

	//배열과 반복문 // 반복문을 이용한 출력
	//int arr[3];
	//arr[0] = 1; arr[1] = 2; arr[2] = 3;
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n", arr[i]);
	//}


	// 반복문을 이용한 초기화  arr[0] = 1; arr[1] = 2; arr[2] = 3; 으로 만들기
	//int arr[3];
	//for (int i=0;i<3;i++) {
	//	arr[i] = i+1;
	//}
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n", arr[i]);
	//}

	//내부값 다른거로  arr[0] = 10; arr[1] = 20; arr[2] = 30; 으로 만들기
	//int arr[3];
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i + 1)*10;
	//}
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n", arr[i]);
	//}


	//실습) 실수로 출력
	//double arr[3] = {1.1,2.1,3.1};  //선언과 동시에 초기화
	//double arr[3];
	//for (int i=0;i<3;i++) {
	//	arr[i] = i + 1.1;
	//}
	//for (int i =0 ; i<3 ; i++){
	//	printf("%.1f\n",arr[i]);
	//}

	//)배열의 사이즈만 바꿔도 안의 값 다 바꿀 수 있게
	//double arr[3] = {1.1,2.1,3.1};  //선언과 동시에 초기화
	//double arr[5]; // 아래 사이즈 알고리즘으로 여기 숫자만 바꿔도 배열수 변경 가능
	////배열의 크기 구하기
	//int s = sizeof(arr) / sizeof(double);
	//printf("%d\n", s);
	//for (int i = 0; i < s; i++) {
	//	arr[i] = i + 1.1;
	//}
	//for (int i = 0; i < s; i++) {
	//	printf("%.1f\n", arr[i]);
	//}

	//문자형 배열
	//char arr[] = { '~','!','@','#','$','!','@','#','$' }; //배열안의 사이즈 공백 가능
	//int s = sizeof(arr) / sizeof(char);
	//for (int i=0;i<s;i++) {
	//	printf("%c  ",arr[i]);
	//}


	//배열 값의 합계구하기
	//int arr[] = { 4,8,6,8,9 };
	//int s = sizeof(arr) / sizeof(int);
	//int sum = 0;
	//for (int i=0;i<s;i++) {
	//	//printf("%d\n", arr[i]);
	//	sum += arr[i];
	//}
	//printf("%d", sum);

	// 입력받아 값의 합을 출력
	//내가한거)
	//int a, b, c, d, f;
	//printf("값을 입력 하시오.");
	//scanf("%d %d %d %d %d",&a,&b,&c,&d,&f);
	//int arr[] = { a,b,c,d,f };
	//int s = sizeof(arr) / sizeof(int);
	//int sum = 0;
	//for (int i = 0; i < s; i++) {
	//	//printf("%d\n", arr[i]);
	//	sum += arr[i];
	//}
	//printf("%d", sum);

	//해석)
	//// c는 정적배열 (사이즈를 정해놓고 그거만 받을 수 있음, 바꿀수가 없음) 그래서 공간은 처음부터 넉넉하게 잡아둬야함
	//// a에 값이 할당되는 시점은 런타임
	////int a = 5;//그래서 이거를 arr[]안에 넣을 수가 없음  
	////const int a = 5; // 얘는 상수 : 변경이 불가능 얘도 컴파일 불가 런타임에 실행
	//int arr[LEN], sum = 0;  //그래서 위에 #define LEN 5 을 만들어서 5의 값을 먼저 할당하고 넣으면 가능
	//                        //#define LEN 5 : 디파인에 정의된 매크로 상수 : 컴파일이 되지 건에 대체 메모리에 올라가지도 않음
	//int s = sizeof(arr) / sizeof(int);

	//// 입력 받기
	//for (int i = 0; i < s; i++) {
	//	printf("%d번 정수는?  ",i+1);
	//	scanf("%d",&arr[i]);
	//}
	////확인용 출력
	//for(int i=0;i<s;i++)
	//	printf("%d  %p\n",arr[i],&arr[i]);
	//
	////합계 출력
	//for (int i = 0; i < s; i++) {
	//	//printf("%d\n", arr[i]);
	//	sum += arr[i];
	//}
	//printf("합계 : %d", sum);

	//실습) 반 학생의 점수를 입력받아 번호대로 배열에 저장하고 반 번호 순서대로 출력하는 프로그램을 작성
	//)점수의 합계와 평균도 출력
	//int abb[3],ajj[3], b = 0, j=0;
	//int s = sizeof(abb) / sizeof(int);

	//for (int i=0;i<s;i++) {
	//	printf("학생의 번호, 점수?\n");
	//	scanf("%d  %d", &abb[i], &ajj[i]); 
	//}
	//for (int i=0;i<s;i++) {
	//	printf("%d번  %d점\n", abb[i], ajj[i]);
	//}
	//for (int i = 0; i < s; i++) {
	//	b += ajj[i];
	//	//printf("점수 합 : %d  평균 : %.2f\n", b, (double)b / 3);
	//}
	//printf("점수 합 : %d  평균 : %.2f\n", b, (double)b / 3);
	//while (j!='q'){    //이거 안대
	//	printf("원하는 학생의 번호는?\n");
	//	scanf("%d", &abb[j]); 
	//	printf("%d번 %d점\n", abb[j+1], ajj[j+1]); getchar;
	//}


	//해석)
	//int abb[3], sum=0;
	//int s = sizeof(abb) / sizeof(int);

	//for (int i = 0; i < s; i++) {
	//	printf("%d번점수?\n",i+1); 
	//	scanf("%d", &abb[i]);
	//}
	//for (int i = 0; i < s; i++) {
	//	printf("%d번  %d점\n", i + 1, abb[i]);
	//	sum += abb[i];
	//}
	//printf("점수 합 : %d  평균 : %.2f\n", sum, (double)sum / s);

	//검색
	//int abb[3] = { 20,50,30 };  //테스트 시간을 아끼기위한 
	//int no;
	//char q;
	//while (1){
	//	printf("검색할 번호는?\n");
	//	scanf("%d", &no);
	//	getchar(); //엔터처리
	//	//잘못된 번호 처리
	//	if (no <1 || no>3) {  //3을 s로 바꿔야함 테스트를 위한 수
	//		printf("잘못된 번호\n");
	//		continue;
	//	}
	//	printf("점수는 %d\n", abb[no - 1]);
	//	printf("종료(q)?\n");
	//	scanf("%c",&q); 
	//	if (q == 'q') break;
	//}


	//검색 2)
	//int abb[3] = { 20,50,30 };  //테스트 시간을 아끼기위한 
	//int no;
	//char q;
	//do {
	//	printf("검색할 번호는?\n");
	//	scanf("%d", &no);
	//	getchar(); //엔터처리
	//	//잘못된 번호 처리
	//	if (no < 1 || no>s) {  //3을 s로 바꿔야함 테스트를 위한 수
	//		printf("잘못된 번호\n");
	//		continue;
	//	}
	//	printf("점수는 %d\n", abb[no - 1]); //인덱스를 보여줘야되서 입력한 수의 1을 뺌
	//	printf("종료(q)?\n");
	//	scanf("%c", &q);
	//} while (q != 'q');


	//피보나치의 수열 구하기
	//0 1 1 2 3 5 8 13.....
	//int arr[20];
	//for (int i = 0; i < 20; i++) {
	//	printf("%d",arr[i]);
	//}
	int arr[20],sum=0;
	arr[0] = 0; arr[1] = 1;
	for (int i = 2; i < 20; i++) {
		arr[i] = i-1;
	}
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr[i]);
	}

















	return 0;
}