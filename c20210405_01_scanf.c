#define _CRT_SECURE_NO_WARNINGS //scanf�Լ��� ����ϱ� ���ؼ�
#include <stdio.h>

int main(void) {
	//�Է��Լ�
	//������ �Է¹ޱ�	
	//int a;
	//printf("������?");
	//scanf("%d",&a); //a�� �ּ�
	//printf("�Է��Ѱ� : %d   �ּ�:%p\n",a, &a);

	//�Ǽ��� �Է¹ޱ�
	//float f;
	//double d;
	//printf("float �Ǽ���?");
	//scanf("%f",&f);
	//printf("double �Ǽ���?");
	//scanf("%lf", &d); //���˹��� double�ϰ�� : %lf

	//printf("�Է��Ѱ�\n %f %p\n %f %p\n", f,&f, d, &d);

	//������ �Է¹ޱ�
	//char c;
	//printf("���ڴ�?");
	//scanf("%c", &c);
	//printf("�Է��� ���� %c\n", c);

	//�ǽ�)�������� �Է¹޾Ƽ� �հ踦 ���
	//int a, b;
	//printf("ù��°����?");
	//scanf("%d", &a);
	//printf("�ι�°����?");
	//scanf("%d", &b);
	
	//printf("�μ���?");
	//scanf("%d %d", &a, &b);
	//printf("�հ�:%d\n", a+b);

	//�ǽ�)������ ��¥(��,��,��)�� �Է¹޾�  ���
	//int year, month, day;
	//printf("�����(yyyy-mm-dd)?");
	//scanf("%d-%d-%d", &year, &month, &day);
	//printf("%d�� %d�� %d��\n", year, month, day);

	//�ǽ�)��Ģ����
	//int a, b;
	//printf("�μ���?");
	//scanf("%d %d", &a,&b);
	//printf("%d + %d = %d\n", a,b,a+b);
	//printf("%d - %d = %d\n", a,b,a-b);
	//printf("%d * %d = %d\n", a,b,a*b);
	//printf("%d / %d = %f\n", a,b,(double)a/b);

	//���� ó���ϱ� ���� ����
	//int a, b;
	//char sign;
	//printf("first?"); 
	//scanf("%d", &a);
	//printf("second?");
	//scanf("%d", &b);
	
	//�ѹ����� �о ��ȯ�ϴ� �Լ�
	//getchar(); //���͸� ó���ϱ����� ����

	//printf("sign?");
	//scanf("%c", &sign);

	//printf("%d %c %d\n", a, sign, b);

	//�ǽ�)�Ž����� ���
	//int amount, pay; //���ǰ�, ����
	//printf("���ǰ�?");
	//scanf("%d", &amount);
	//printf("����?");
	//scanf("%d", &pay);
	//pay > amount ? 
	//	printf("�Ž�����:%d\n", pay-amount): 
	//	amount>pay?printf("�����ݾ�:%d\n", amount-pay): printf("����Ϸ�\n");

	//�ǽ�)������ �հ�� ���
	//int kor, eng, math;
	//printf("������ ������?");
	//scanf("%d%d%d",&kor,&eng,&math);

	//int sum = kor + eng + math;
	//printf("�հ�:%d\n", sum);
	//printf("���:%.2f\n", (double)sum/3);

	//rgb �� �����
	int r, g, b;
	printf("red?"); scanf("%d", &r);
	printf("green?"); scanf("%d", &g);
	printf("blue?"); scanf("%d", &b);
	unsigned int rgb = r<<16 | g<<8 | b;
	printf("RGB: %0X\n", rgb);










	return 0;
}