#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���ǽ��� ���϶� ������ ����� �����϶� ���� ������ ����

	//int a = 10;
	//if (a > 0) {
	//	printf("���");
	//}
	//else
	//{
	//	printf("����");
	//}

	//--------------------------------------------------------------------------------------------------------------------

	//int a = 0;
	//if (a > 0) {
	//	printf("���");
	//}
	//else{
	//	//��ø ������
	//	if (a<0){
	//		printf("����");
	//	}
	//	printf("������ ����� �ƴ�");
	//}



	//ǥ���� �����ϰ� //���϶� ������ �ϳ��϶� {} ���� ���� (printf("���");)
	//int a = 0;
	//if (a > 0) 
	//	printf("���");
	//else if (a < 0) 
	//	printf("����");
	//else
	//	printf("������ ����� �ƴ�");


	//�ǽ�) �� ������ �Է¹޾� ū ���� ������ּ���. (�μ��� ���� �� ����)
	//int a, b;
	//printf("�� ���� �Է�");
	//scanf("%d %d", &a, &b);

	//if (a > b) {
	//	printf("ū���� %d", a);
	//}
	//else {
	//	if (b > a) {
	//		printf("ū���� %d", b);
	//	}
	//	else{
	//		printf("����");
	//	}
	//}

	//�ǽ�) �л��� ������ �Է� �޾� ������ ����ϴ� ���α׷��� �ۼ��� ���ÿ�
	//��) ���� 85
	//int a;
	//printf("������?");
	//scanf("%d", &a);

	//if (a<0 || a>100)
	//	printf("�߸��� �Է�");
	//else if (a >= 90)
	//	printf("A");
	//else if (a>=80)
	//	printf("B");
	//else if (a>=70)
	//	printf("C");
	//else if (a>=60)
	//	printf("D");
	//else 
	//	printf("F");


	//�ǽ�) ������ ������ �Է� �޾� ������ ����� ����� ���ÿ�
	//(�� 60�� �̸��� �Ѱ����̶�� ������ ����)
	//int g, y, s;
	//printf("�� �� ��");
	//scanf("%d %d %d",&g,&y,&s);

	//int a = g + y + s;

	//if (g < 60)
	//	printf("�ƾƾ� Ż��~~~ ���� ����!!!!!!!!!!!!\n");
	//else if (y < 60)
	//	printf("�ƾƾ� Ż��~~~ ���� ����!!!!!!!!!!!!\n");
	//else if (s < 60)
	//	printf("�ƾƾ� Ż��~~~ ���� ����!!!!!!!!!!!!\n");
	//else
	//	printf("�� �հ�!!!!!!!!!!\n");

	//printf("���� : %d\n", a);
	//printf("��� : %d\n", a / 3);

	//�ؼ�)
	//int g, y, s;
	//printf("�� �� ��");
	//
	//scanf("%d %d %d", &g, &y, &s);

	//if (g < 60 || y < 60 || s < 60) {
	//	printf("����\n");
	//}
	//else {
	//	int a = g + y + s;
	//	double b = a / 3.;
	//		printf("��\n���� : %d\n��� : %.2f\n", a, b);
	//}

	
	//�ǽ�)������ �Է��Ͽ� �������� Ȯ���Ͻÿ�.
	//int a;
	//printf("�⵵��?");
	//scanf("%d",&a);

	//if (a%4==0 && a % 100 != 0 || a%400==0)
	//	printf("����");
	//else
	//	printf("���� �ƴ�");

	//�ǽ�)���� �޴��� ���� ������ ��å�ϸ� ���� �� �ڳʸ� �˷��ִ� ���α׷��� �ۼ�
	int a;
	printf("�޴���\n 1.�����  2.«��  3.������  4.�����  5.����  6.�Ľ�Ÿ\n");
	scanf("%d",&a);
	
	if (a == 1 || a == 2)
		printf("�߽��ڳ�");
	else if (a==3 || a==4)
		printf("�ѽ��ڳ�");
	else if (a == 5 || a == 6)
		printf("����ڳ�");
	else
		printf("�߸��� �Է�");



	// ������ ���ϰ� �غ��ڱ�~!
	//����ġ(���ù�)  : if ���� �����ϳ� �������̴�.



















	//int a;
	//printf("�޴���\n 1.�����  2.«��  3.������  4.�����  5.����  6.�Ľ�Ÿ\n");
	//scanf("%d", &a);

	//if (a == 1)
	//	printf("�ֹ��޴� : ����� \n ���� : 5,000�� \n �߽��ڳʷ� ������.");
	//else if (a == 2)
	//	printf("�ֹ��޴� : «�� \n ���� : 7,000�� \n �߽��ڳʷ� ������.");
	//else if (a == 3)
	//	printf("�ֹ��޴� : ������ \n ���� : 8,000�� \n �ѽ��ڳʷ� ������.");
	//else if (a == 4)
	//	printf("�ֹ��޴� : ����� \n ���� : 6,000�� \n �ѽ��ڳʷ� ������.");
	//else if (a == 5)
	//	printf("�ֹ��޴� : ���� \n ���� : 9,000�� \n ����ڳʷ� ������.");
	//else
	//	printf("�ֹ��޴� : �Ľ�Ÿ \n ���� : 8,000�� \n ����ڳʷ� ������.");




	return 0;
}
