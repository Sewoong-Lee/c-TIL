#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�ݺ��� 1�� ���� 0�� �޽�
	//while (1){  //���⿡ ture ���� �ȴ��~~~~~
	//	printf("zzzzz");
	//}


	//break�� ����Ͽ� �ݺ��� Ż��
	//int tt = 0;
	//while (1) {
	//	printf("zzz!! %d\n",tt+1);
	//	tt++;    //tt += 1;  // tt+1=tt
	//	if (tt > 9) break;
	//}


	//�ǽ�) �հ踦 ���Ͻÿ� (1~10����)
	//int i = 0, sum = 0;
	//while (i < 10) {
	//	//printf("%d\n", ++i);
	//	sum += ++i;  //i=i+1;   sum += i;  sum=sum+i;
	//	//printf("%d\n", sum);
	//}
	//printf("%d\n", sum);



	//���� 2õ�� �Ѵ� ������ �� ���� ���϶�
	//int i = 0, sum = 0;
	//while (sum<2000){
	//	sum += ++i;
	//	//printf("%d %d",sum, i);
	//}
	//printf("%d + %d = %d",sum-i,i,sum);



	//�ǽ�) 1���� 20������ �� �� 3�� ����� ����ϴ� ���α׷��� �ۼ� �Ͻÿ� (while�� �̿�)
	//1)
	//int a = 0;
	//while (a<20) {
	//	a++;
	//	if (a%3==0){
	//		printf("%d\n",a);
	//	}
	//}

	//2)
	//int a = 0;  //0�� ������ �ٲ㵵��
	//while (a < 20) {
	//	printf("%d\n", a); //21�� ������ ��ġ ����
	//	a+=3;
	//}


	//3)
	//int a = 0;  
	//while (1) {
	//	a += 3;
	//	if (a > 20) break;
	//	printf("%d\n", a); 
	//}

	//4) continue:���
	//1~10���� ¦���� ���
	//int a = 0;
	//while (a<10){
	//	a++;
	//	if (a % 2 != 0) continue;
	//	printf("%d\n",a);
	//}
	

	











	return 0;
}