#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

//�Ű�����:ī��Ʈ�ٿ� ��
//��ȯ�� : ����
//���:ī��Ʈ �ٿ��� ���
void countDown(int t) {
	for (int i = t; i > -1; i--) {
		Sleep(1000); //1/1000�� ����
		printf("%d��\n", i);
	}
}

int main() {
	//ī��Ʈ �ٿ�
	//5��....�߻�
	int t;
	printf("��?");
	scanf("%d", &t);
	printf("ī��Ʈ ����\n");
	countDown(t);
	printf("�߻�\n");

	return 0;
}