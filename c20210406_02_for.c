#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�ݺ��� : for
	//int i;//�ݺ��� ����

	//for (i=0 ; i<10 ; i++) {
	//	printf("%d\n", i);
	//}

	//�ǽ�)������ ���
	//int dan;
	//while (1) {
	//	printf("�ܼ���?");
	//	scanf("%d", &dan);
	//	if (dan == 0) break;
	//	for (int i = 1; i < 10; i++) {
	//		printf("%d * %d = %d\n", dan, i, dan * i);
	//	}
	//}

	// do{
	//	printf("�ܼ���?");
	//	scanf("%d", &dan);
	//	if (dan!=0)
	//		for (int i = 1; i < 10; i++) {
	//			printf("%d * %d = %d\n", dan, i, dan * i);
	//		}
	//}while (dan != 0);

	//���� for
	//for (int i = 2; i < 10; i++) {
	//	printf("[%d]��\n", i);
	//	for (int j = 1; j < 10; j++) {
	//		printf("%d * %d = %d\n", i, j, i*j);
	//	}
	//}
	//3�� for
	//for (int i = 0; i < 10; i++)
	//	for (int j = 0; j < 10; j++)
	//		for (int k = 0; k < 10; k++)
	//			printf("%d %d %d\n", i, j, k);

	//�ǽ�)1~100������ ��
	//int sum=0;
	//for (int i = 1; i < 101; i++) {
	//	sum += i;
	//}
	//printf("1���� 100������ ���� %d\n",sum);

	//�ǽ�)1~n������ ��
	//int n, sum = 0;
	//printf("n����?");
	//scanf("%d", &n);

	//for (int i = 1; i < n+1; i++) { //i�� for�� ��������
	//	sum += i;
	//}
	//printf("1���� %d������ ���� %d\n",n, sum);
	//printf("i�� ���簪 :%d\n", i); //i���� ���Ұ�

	//�ǽ�)ū������ ������ ����
	//int a, b;
	//for (int i = 0; i < 10; i++) {
	//	//�μ��� �Է¹ޱ�
	//	printf("�μ���?");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	scanf("%d", &b);
	//	//ū������ ������ ���� ���
	//	if (a > b) printf("���밪:%d\n", a-b);
	//	else printf("���밪:%d\n", b-a);
	//	printf("�����̽��� �Է��ϸ� ����˴ϴ�\n");
	//	int c = getch(); //���ھ��� �Լ�
	//	//printf("%d\n", c);
	//	if (c == 32) break; //�����̽��� �Է��ϸ� ����
	//}

	//�����1
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < i+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//�����2
	//for (int i = 7; i > 0; i--) {
	//	for (int j = 0; j < i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//�����3
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < 7-i; j++) {
	//		printf(" ");
	//	}
	//	for (int j = 0; j < i+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//�����4
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < 7 - i; j++) {
	//		printf(" ");
	//	}
	//	for (int j = 0; j < (i*2)+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//char no;
	//scanf("%c", &no);
	//printf("%d\n", no);
	//if (no == 10) { //���͸� �Է��ߴٸ� 
	//	printf("ok");
	//}

	//�޴�����
	//char a;
	//do {
	//	printf("�޴��� ������.\n");
	//	printf("1.¥��\n2.������\n3.�Һ�\n4.����\n5.�����ʹ�\n6.����ʹ�\nq:����\n���Ĺ�ȣ:");
	//	scanf("%c", &a);
	//	//printf("%c %d\n",a, a);
	//	getchar(); //����ó��

	//	switch (a) {
	//	case '1':
	//	case '2':
	//		printf("�߽��ڳ�\n\n"); break;
	//	case '3':
	//	case '4':
	//		printf("�ѽ��ڳ�\n\n"); break;
	//	case '5':
	//	case '6':
	//		printf("�Ͻ��ڳ�\n\n"); break;
	//	case 'q':
	//		printf("���α׷��� ����\n\n"); break;
	//	default :
	//		printf("�߸��Է��ϼ̽��ϴ�.\n\n"); break;
	//	} 
	//} while (a != 'q');

	//���丮�� ���ϱ�
	//int fac = 7;
	//int mul = 1; //���Ѱ� ��������
	//for (int i = 1; i < fac + 1; i++) {
	//	mul *= i;
	//}
	//printf("%d\n", mul);

	//
	for (int i = 1; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (i+j==10) printf("%d,%d\n", i,j);
		}
	}

	return 0;
}