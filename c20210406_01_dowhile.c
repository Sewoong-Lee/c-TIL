#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	//do~while (�ּ� �ѹ��� ���� ����, ������ ����)
	//int a = -1;
	//do {
	//	printf("%d",a);
	//} while (a>0);  //(�ּ� �ѹ��� ���� ����, ������ ����)

	////����ڿ��� ���� �Է��� �޾Ƽ� y�̸� �����÷��� ���
	//char an;
	//while (an=='y'){
	//	printf("���� �÷���y?");
	//	scanf("%c",&an);
	//	printf("�÷��� ����");
	//}  // �� ó�� �ϸ� �Է��� �ޱ����� �ݺ����� ������ üũ�Ͽ� ������ �ȴ�


	//char an='y'; //an�ʱ�ȭ
	//while (an == 'y') {
	//	printf("���� �÷���y?");
	//	scanf("%c", &an);
	//	getchar();  //�Է��� �� �����ִ� ���͸� ����
	//	printf("�÷��� ����");
	//}


	//char an = 'y'; 
	//do {
	//	printf("�÷��� ����\n");  //���� �̻��ؼ� �ٲ�
	//	printf("��� ���� y ?");
	//	scanf("%c", &an);
	//	getchar();  
	//} while (an == 'y');


	//�ǽ�) � ������ ��� �Է� �޾Ƽ� �հ踦 ���ϰ� 0�� �Է��� ��� �����ϴ� ���α׷��� �ۼ� �Ͻÿ�.
	//(do~while �̿�)
	int a,b=0;
	do {
		printf("���� �Է���");
		scanf("%d",&a);
		b += a;
	} while (a!=0);
	printf("�հ贫? : %d", b);











	return 0;
}