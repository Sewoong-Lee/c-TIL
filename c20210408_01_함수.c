#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Ű����� ����. , ��ȯ�� ����.
void viodtest() {
	printf("void�Լ�\n");  //�Լ� ����
}

//�Ű����� �Ѱ�. , ��ȯ�� ����.
void viodt2(int a) {
	printf("�Ű����� : %d\n", a);
}

//�Ű����� �ΰ�. , ��ȯ�� ����.
void viodt3(int a, int p) {
	printf("�μ��� �� : %d",a+p);
}

//�ǽ�) �Ű� ���� : �������� �Է� �޾�
//���� ���̸� ������ִ� ���
void area(double r) {//r =�������� :  �Լ� ����� ����,�Լ� ����� �Ҹ�
	printf("�������� %.2f",r);  //��������
	printf("���� ���̴� : %.2f",r*r*3.14);
}
//���� �Ѿ��ϴ� �Լ��� coll by value ��� (r�̶�� ���� �Ѱ����Ƿ�)


//�Ű�����: ������(double)  ��ȯ�� : ����(double)
//��ȯ�� �ִ� �Լ� ����
//���� ���̸� ���ؼ� ��ȯ�ϴ� �Լ�
double area2(double r) {  //���ϵǴ� ���� �տ� �����ش�.
	double a = r * r * 3.14;
	return a;  //��ȯ���� 1��
}


//�ǽ�) �� ������ �Է� �Ű������� �޾Ƽ� ���� ��ȯ�ϴ� �Լ� ���
int cc(int a, int b, int c) {
	return a + b + c;
}


//�ΰ��� ������ �谳������ �޾Ƽ� ���� �Ǽ����� ��ȯ�ϴ� �Լ�
double cl(int a, int b) {
	return (double)a / b;
}

//�ǽ�) �� ���� �Ű������� �޾Ƽ� �μ� �� ū ���� ��ȯ�ϴ� �Լ��� �ۼ��Ͻÿ�.
int bb(int a, int b) {   //�Լ��� ������ ������ �ٷ� ��!
	if (a>b)
		return a;
	else
		return b;
}
//2)
int bb(int a, int b) {   //�Լ��� ������ ������ �ٷ� ��!
	int m;
	if (a > b)
		m = a;
	else if (a < b)
		m = b;
	else
		m = 0;  //���ٸ� 0�� �ٲ��� ��� ������.
	return m;
}

//������ �Լ�
int main() { 
	//�Լ�
	//viodtest();  //�Լ� ���
	//
	//viodt2(20);
	//
	//viodt3(50,20);
	//
	//�ǽ�)
	//double a;  //��������
	//printf("��������?");
	//scanf("%lf",&a);  //�ּҸ� �Ѱ����Ƿ� �ݹ��̷��۷���
	//area(a);
	//
	//
	//double r = 3.6;
	//double rv = area2(r);  //�Լ� ����� ���� //�Լ��� �������̹Ƿ� ���ο����� �� �Լ��� ������
	//printf("%.2lf", rv);
	//
	//int a, b, c;  // �Է¹����� ����
	////int a = 10, b = 20, c = 30; //�ϵ��ڵ��� ����
	//scanf("%d %d %d",&a,&b,&c);
	//int e = cc(a, b, c);
	//printf("%d",e);
	//
	//
	//int a = 15, b = 2;
	//double f = cl(a, b);
	//printf("%.2lf",f);
	//
	//
	//int a = 22, b = 12;
	//printf("%d", bb(a, b));

	////2)  ���� ���ٸ� �Լ��ȵ� Ư������ �ְ� ���� �ȿ��� ���� �۾� ó��.
	//int a = 22, b = 12;
	//int m = bb(a, b);
	//if (m != 0)
	//	printf("ū���� %d", m);
	//else
	//	printf("�μ��� ����");







	return 0;
}