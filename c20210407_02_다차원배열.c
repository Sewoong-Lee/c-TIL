#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// 다차원 배열
	//int arr[3][3];
	//////arr[0][0] = 1; arr[0][1] = 2; 요런식을 한번에

	//for (int i = 0; i < 3;i++) {  //행
	//	for (int j = 0; j < 3; j++) {  //열
	//		arr[i][j] = 3*i+j+1;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}


	//사이즈 구하기
	//int arr[2][3];
	//int s = sizeof(arr) / sizeof(arr[0]);  //행의 사이즈
	//int c = sizeof(arr[0]) / sizeof(int);  //열의 사이즈
	//printf("%d  %d\n",s,c);

	//for (int i = 0; i < s;i++) {  //행
	//	for (int j = 0; j < c; j++) {  //열
	//		arr[i][j] = 3*i+j+1;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}


	//실습) 반 학생의 국어 영어 수학 점수를 이력 받아 
	//번호대로 배열에 저장하고 반 번호 순서대로 총점과 평균을 출력하는 프로그램을 작성
	int arr[2][3];
	int s = sizeof(arr) / sizeof(arr[0]);  //행의 사이즈
	int c = sizeof(arr[0]) / sizeof(int);  //열의 사이즈
	for (int i = 0; i < s; i++) {
		printf("%d학생의 국 영 수 점수는?",i+1);
		for (int j = 0; j < c; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	int sum = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sum += arr[i][j];
		}
		//합계 평균
		printf("%d  %.2f\n", sum, (double)sum/3);
		sum = 0;
	}














	return 0;
}