#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5
int main() {
	//�迭 : array
	//int arr[3];
	//arr[0] = 10; arr[1] = 20; arr[2] = 30;
	//printf("%d  %d  %d\n", arr[0], arr[1], arr[2]);
	//printf("%p  %d\n", arr, sizeof(arr));

	//�迭�� �ݺ��� // �ݺ����� �̿��� ���
	//int arr[3];
	//arr[0] = 1; arr[1] = 2; arr[2] = 3;
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n", arr[i]);
	//}


	// �ݺ����� �̿��� �ʱ�ȭ  arr[0] = 1; arr[1] = 2; arr[2] = 3; ���� �����
	//int arr[3];
	//for (int i=0;i<3;i++) {
	//	arr[i] = i+1;
	//}
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n", arr[i]);
	//}

	//���ΰ� �ٸ��ŷ�  arr[0] = 10; arr[1] = 20; arr[2] = 30; ���� �����
	//int arr[3];
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i + 1)*10;
	//}
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n", arr[i]);
	//}


	//�ǽ�) �Ǽ��� ���
	//double arr[3] = {1.1,2.1,3.1};  //����� ���ÿ� �ʱ�ȭ
	//double arr[3];
	//for (int i=0;i<3;i++) {
	//	arr[i] = i + 1.1;
	//}
	//for (int i =0 ; i<3 ; i++){
	//	printf("%.1f\n",arr[i]);
	//}

	//)�迭�� ����� �ٲ㵵 ���� �� �� �ٲ� �� �ְ�
	//double arr[3] = {1.1,2.1,3.1};  //����� ���ÿ� �ʱ�ȭ
	//double arr[5]; // �Ʒ� ������ �˰������� ���� ���ڸ� �ٲ㵵 �迭�� ���� ����
	////�迭�� ũ�� ���ϱ�
	//int s = sizeof(arr) / sizeof(double);
	//printf("%d\n", s);
	//for (int i = 0; i < s; i++) {
	//	arr[i] = i + 1.1;
	//}
	//for (int i = 0; i < s; i++) {
	//	printf("%.1f\n", arr[i]);
	//}

	//������ �迭
	//char arr[] = { '~','!','@','#','$','!','@','#','$' }; //�迭���� ������ ���� ����
	//int s = sizeof(arr) / sizeof(char);
	//for (int i=0;i<s;i++) {
	//	printf("%c  ",arr[i]);
	//}


	//�迭 ���� �հ豸�ϱ�
	//int arr[] = { 4,8,6,8,9 };
	//int s = sizeof(arr) / sizeof(int);
	//int sum = 0;
	//for (int i=0;i<s;i++) {
	//	//printf("%d\n", arr[i]);
	//	sum += arr[i];
	//}
	//printf("%d", sum);

	// �Է¹޾� ���� ���� ���
	//�����Ѱ�)
	//int a, b, c, d, f;
	//printf("���� �Է� �Ͻÿ�.");
	//scanf("%d %d %d %d %d",&a,&b,&c,&d,&f);
	//int arr[] = { a,b,c,d,f };
	//int s = sizeof(arr) / sizeof(int);
	//int sum = 0;
	//for (int i = 0; i < s; i++) {
	//	//printf("%d\n", arr[i]);
	//	sum += arr[i];
	//}
	//printf("%d", sum);

	//�ؼ�)
	//// c�� �����迭 (����� ���س��� �װŸ� ���� �� ����, �ٲܼ��� ����) �׷��� ������ ó������ �˳��ϰ� ��Ƶ־���
	//// a�� ���� �Ҵ�Ǵ� ������ ��Ÿ��
	////int a = 5;//�׷��� �̰Ÿ� arr[]�ȿ� ���� ���� ����  
	////const int a = 5; // ��� ��� : ������ �Ұ��� �굵 ������ �Ұ� ��Ÿ�ӿ� ����
	//int arr[LEN], sum = 0;  //�׷��� ���� #define LEN 5 �� ���� 5�� ���� ���� �Ҵ��ϰ� ������ ����
	//                        //#define LEN 5 : �����ο� ���ǵ� ��ũ�� ��� : �������� ���� �ǿ� ��ü �޸𸮿� �ö����� ����
	//int s = sizeof(arr) / sizeof(int);

	//// �Է� �ޱ�
	//for (int i = 0; i < s; i++) {
	//	printf("%d�� ������?  ",i+1);
	//	scanf("%d",&arr[i]);
	//}
	////Ȯ�ο� ���
	//for(int i=0;i<s;i++)
	//	printf("%d  %p\n",arr[i],&arr[i]);
	//
	////�հ� ���
	//for (int i = 0; i < s; i++) {
	//	//printf("%d\n", arr[i]);
	//	sum += arr[i];
	//}
	//printf("�հ� : %d", sum);

	//�ǽ�) �� �л��� ������ �Է¹޾� ��ȣ��� �迭�� �����ϰ� �� ��ȣ ������� ����ϴ� ���α׷��� �ۼ�
	//)������ �հ�� ��յ� ���
	//int abb[3],ajj[3], b = 0, j=0;
	//int s = sizeof(abb) / sizeof(int);

	//for (int i=0;i<s;i++) {
	//	printf("�л��� ��ȣ, ����?\n");
	//	scanf("%d  %d", &abb[i], &ajj[i]); 
	//}
	//for (int i=0;i<s;i++) {
	//	printf("%d��  %d��\n", abb[i], ajj[i]);
	//}
	//for (int i = 0; i < s; i++) {
	//	b += ajj[i];
	//	//printf("���� �� : %d  ��� : %.2f\n", b, (double)b / 3);
	//}
	//printf("���� �� : %d  ��� : %.2f\n", b, (double)b / 3);
	//while (j!='q'){    //�̰� �ȴ�
	//	printf("���ϴ� �л��� ��ȣ��?\n");
	//	scanf("%d", &abb[j]); 
	//	printf("%d�� %d��\n", abb[j+1], ajj[j+1]); getchar;
	//}


	//�ؼ�)
	//int abb[3], sum=0;
	//int s = sizeof(abb) / sizeof(int);

	//for (int i = 0; i < s; i++) {
	//	printf("%d������?\n",i+1); 
	//	scanf("%d", &abb[i]);
	//}
	//for (int i = 0; i < s; i++) {
	//	printf("%d��  %d��\n", i + 1, abb[i]);
	//	sum += abb[i];
	//}
	//printf("���� �� : %d  ��� : %.2f\n", sum, (double)sum / s);

	//�˻�
	//int abb[3] = { 20,50,30 };  //�׽�Ʈ �ð��� �Ƴ������� 
	//int no;
	//char q;
	//while (1){
	//	printf("�˻��� ��ȣ��?\n");
	//	scanf("%d", &no);
	//	getchar(); //����ó��
	//	//�߸��� ��ȣ ó��
	//	if (no <1 || no>3) {  //3�� s�� �ٲ���� �׽�Ʈ�� ���� ��
	//		printf("�߸��� ��ȣ\n");
	//		continue;
	//	}
	//	printf("������ %d\n", abb[no - 1]);
	//	printf("����(q)?\n");
	//	scanf("%c",&q); 
	//	if (q == 'q') break;
	//}


	//�˻� 2)
	//int abb[3] = { 20,50,30 };  //�׽�Ʈ �ð��� �Ƴ������� 
	//int no;
	//char q;
	//do {
	//	printf("�˻��� ��ȣ��?\n");
	//	scanf("%d", &no);
	//	getchar(); //����ó��
	//	//�߸��� ��ȣ ó��
	//	if (no < 1 || no>s) {  //3�� s�� �ٲ���� �׽�Ʈ�� ���� ��
	//		printf("�߸��� ��ȣ\n");
	//		continue;
	//	}
	//	printf("������ %d\n", abb[no - 1]); //�ε����� ������ߵǼ� �Է��� ���� 1�� ��
	//	printf("����(q)?\n");
	//	scanf("%c", &q);
	//} while (q != 'q');


	//�Ǻ���ġ�� ���� ���ϱ�
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