#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Ű�����:����, ��ȯ��:����
void voidTest() {
	printf("void�Լ�\n");
}
//�Ű�����:�Ѱ�, ��ȯ��:����
void voidTest2(int a) {
	printf("�Ű�����:%d\n", a);
}

void voidTest3(int a, int b) {
	printf("�μ��� ��:%d\n", a+b);
}
//�Ű�����:������
//���ǳ��̸� ������ִ� ���
//�Լ��� �̸� : area, �Ű������̸� : r(double)
//call by value���
void area(double r2) { //��������:�Լ������ ����, �Լ� ����� �Ҹ�
	printf("����:%.2f\n", r2 * r2 *3.14);
}

//�Ű�����:������(double)
//��ȯ��:����(double)
//���ǳ��̸� ���ؼ� ��ȯ�ϴ� �Լ�
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area; //��ȯ���� �Ѱ�
}

//�������� �Ű������� �޾Ƽ� ���� ��ȯ�ϴ� �Լ�
int add(int a, int b, int c) {
	return a + b + c;
}

//�ΰ��� ������ �Ű������� �޾Ƽ� �����Ǽ����� ��ȯ�ϴ� �Լ�
double div(int a, int b) {
	return (double)a / b;
}

int max(int a, int b) {
	int m;
	if (a > b)
		m = a;
	else if (b > a)
		m = b;
	else
		m = 0; //�μ��� ���� ���� 0�� ����
		
	return m;//return�� �Լ��� ����
}

//�������Լ�
int main() {
	//�Լ�
	//voidTest();
	//voidTest2(10);
	//voidTest3(20,30);
	//
	//double r; //��������
	//printf("��������?");
	//scanf("%lf", &r);
	//area(r);
	//
	//double r = 3.6;
	//double rValue = areaReturn(r);
	//printf("����: %.2f\n", rValue);
	//
	//printf("�հ�:%d\n", add(20, 30, 50));
	//
	//int a=10, b=3;
	//double d = div(a,b);
	//printf("������:%.2f\n", d);
	int a = 20, b = 20;
	int m = max(a,b);
	if (m!=0)
		printf("ū���� %d\n",m );
	else
		printf("%d == %d\n",a,b);

	return 0;
}