#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//do ~whlle
	//int a = -1;
	//do {
	//	printf("%d\n", a);
	//} while (a>0); //�ּ� �ѹ��� ����

	//����ڿ��� �Է��� �޾Ƽ� y�̸� ��� �÷���
	//char answer;
	//do {
	//	printf("����~~~~~�÷���\n");
	//	printf("��� �ұ��(y)?");
	//	scanf("%c",&answer);
	//	getchar(); //���Ͱ� ó��
	//} while (answer == 'y');

	//�ǽ�)����ڰ� �Է��� �� ���ϱ�
	int a, sum = 0;
	do {
		printf("������?");
		scanf("%d", &a);
		sum += a;
	} while (a!=0);
	printf("�հ�� %d\n",sum);


	return 0;
}