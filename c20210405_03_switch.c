#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// if���� �ٸ� ���ǹ�
	//���� ���ǹ� : ����ġ(���ù�)  : if ���� �����ϳ� �������̴�.
	// {}�� �ϳ����̾ �극ũ�� ��� 1���� �丸 ��� ����
	//int a = 0;
	//switch (a) {
	//case 0:
	//	printf("����"); break;
	//case 1:
	//	printf("��"); break;
	//case 2:
	//	printf("��"); break;
	//default:
	//	printf("�߸�");
	//}

	//���� ���������� ���
	//int m = 5;
	//switch (m) {
	//case 1:
	//	printf("31"); break;
	//case 2:
	//	printf("28"); break;
	//case 3:
	//	printf("31"); break;
	//case 4:
	//	printf("30"); break;
	//case 5:
	//	printf("31"); break;
	//case 6:
	//	printf("30"); break;
	//case 7:
	//	printf("31"); break;
	//case 8:
	//	printf("31"); break;
	//case 9:
	//	printf("30"); break;
	//case 10:
	//	printf("31"); break;
	//case 11:
	//	printf("30"); break;
	//case 12:
	//	printf("31"); break;
	//default:
	//	printf("�߸�");
	//}


	// �̰� �� �� �ٲ㺸��
	//int m = 4;
	//switch (m) {
	//case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	//	printf("31"); break;
	//case 4: case 6: case 9: case 11:
	//	printf("30"); break;
	//case 2:
	//	printf("28"); break;
	//default:
	//	printf("�߸�");
	//}
	// �극��ũ �Ȱɸ� �ȳ����ϱ� ��� �ѹ��� ó���ع��� ���ڳ�~


	//�޴����� �����ϰ�
	int a;
	printf("�޴���\n 1.�����  2.«��  3.������  4.�����  5.����  6.�Ľ�Ÿ\n");
	scanf("%d", &a);

	switch (a){
	case 1: case 2:
		printf("�߽��ڳ�");  break;
	case 3: case 4:
		printf("�ѽ��ڳ�");  break;
	case 5: case 6:
		printf("����ڳ�");  break;
	default:
		printf("�߸�");  break;
	}


	return 0;
}