#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void arrp(int argc, char* argv[]) {  //char** argv �Ȱ���.
	for (int i = 0; i < argc ; i++) {
		printf("%s  ", argv[i]);
	}
}



int main() {
	//���� ���ڿ� �迭�� �Ű�����
	
	//�������� �迭
	//char* p[3] = { "python","c","java" };  //�����Ͱ� 3��
	//char (*p)[7] = { "python","c","java" };  // �̰� �����ʹ� �ϳ�, �迭�� �ǳʶ�


	//������ �迭�� ������
	//char arr[][7] = { "python","c","java" };  
	//char (*p)[7] = arr;  //�̰Ŵ� ���� 3�� 7��¥�� �迭  (��ü 7����Ʈ) ��21����Ʈ
	//printf("%d  %d  %d", p, p+1, p+2);

	char* p[3] = { "python","c","java" }; 
	//printf("%p  %p  %p\n", p[0], p[1], p[2]);
	//�Ʒ��� �ָ� �Լ��� ������
	//for (int i = 0; i < 3; i++) {
	//	printf("%s  ", p[i]);
	//}
	//�Լ� �ϼ�
	arrp(3,p);

	return 0;
}