#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// ������ �迭
	//int arr[3][3];
	//////arr[0][0] = 1; arr[0][1] = 2; �䷱���� �ѹ���

	//for (int i = 0; i < 3;i++) {  //��
	//	for (int j = 0; j < 3; j++) {  //��
	//		arr[i][j] = 3*i+j+1;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}


	//������ ���ϱ�
	//int arr[2][3];
	//int s = sizeof(arr) / sizeof(arr[0]);  //���� ������
	//int c = sizeof(arr[0]) / sizeof(int);  //���� ������
	//printf("%d  %d\n",s,c);

	//for (int i = 0; i < s;i++) {  //��
	//	for (int j = 0; j < c; j++) {  //��
	//		arr[i][j] = 3*i+j+1;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}


	//�ǽ�) �� �л��� ���� ���� ���� ������ �̷� �޾� 
	//��ȣ��� �迭�� �����ϰ� �� ��ȣ ������� ������ ����� ����ϴ� ���α׷��� �ۼ�
	int arr[2][3];
	int s = sizeof(arr) / sizeof(arr[0]);  //���� ������
	int c = sizeof(arr[0]) / sizeof(int);  //���� ������
	for (int i = 0; i < s; i++) {
		printf("%d�л��� �� �� �� ������?",i+1);
		for (int j = 0; j < c; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	int sum = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sum += arr[i][j];
		}
		//�հ� ���
		printf("%d  %.2f\n", sum, (double)sum/3);
		sum = 0;
	}














	return 0;
}