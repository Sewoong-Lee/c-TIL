#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Լ� : coll by reference
// �ּҸ� �Ű������� �޴´�.
//main �Լ��� a�� ���� ���� ����
void chan(int* p) {
	*p = 20;  //����Ű�� �ִ� �ּ��� ���� ����
}

//�ǽ�) �μ� �ٲٱ�
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
	//�Լ��� ������ �ѱ��
	//int a=10;  //�Լ��Ἥ �ٲٱ�
	//int* p = &a;
	//chan(a);
	//printf("a: %d",a);
	////�Լ��� �ᵵ �ȹٲ�(���� �ƹ� ��� ����)

	//int a = 10;  //�Լ��Ἥ �ٲٱ�
	////int* p = &a; //�̰� �Ⱦ��� �Լ��� �ּ� �Ѱ��ָ��
	//chan(&a);
	//scanf("%d", &a);
	//printf("a: %d", a);

	//�ǽ�) �μ� �ٲٱ�
	//int a = 10, b = 20;
	//chan2(&a,&b);
	//printf("%d %d",a,b);

	//�ǽ�2) �ݺ����� �̿��ؼ� �Է¹��� ���� ����
	//�Լ����� ����
	//�����Ѱ�
	//int f, sum=0;
	//for (int i=0;i<5;i++) {
	//	scanf("%d",&f);
	//	sumcal(&f,&sum);
	//}
	//printf("�հ� : %d",sum);


	//�ؼ�)
	int a, sum = 0;
	while (1) {
		scanf("%d", &a);
		if (a == 0) break;
		sumcal(&a, &sum);
	}
	printf("�հ� : %d", sum);








	return 0;
}