#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���ǽ��� ���϶� ������ ���� �����϶� ���๮���� ����
	//int a = 0;
	//if (a > 0) {
	//	printf("���\n");
	//}
	//else {
	//	//��øif��
	//	if (a < 0) {
	//		printf("����\n");
	//	}
	//	else {
	//		printf("����� ������ �ƴմϴ�.\n");
	//	}
	//}

	//ǥ���� �����ϰ�
	//int a = 0;
	//if (a > 0) 
	//	printf("���\n");
	//else if (a < 0) 
	//	printf("����\n");
	//else 
	//	printf("����� ������ �ƴմϴ�.\n");
		
	//�ǽ�)�������� �Է¹޾� ū���� ���(�μ��� �������� �ִ�)
	//int a, b;
	//printf("��������?");
	//scanf("%d %d", &a,&b);
	//if (a > b)
	//	printf("%d\n", a);
	//else if (b > a)
	//	printf("%d\n", b);
	//else
	//	printf("�μ��� ����\n");

	//�ǽ�)����
	//int score;
	//printf("������?");
	//scanf("%d", &score);

	//if (score > 100 || score < 0)
	//	printf("�߸��� ����\n");
	//else if (score >= 90)
	//	printf("A");
	//else if (score >= 80)
	//	printf("B");
	//else if (score >= 70)
	//	printf("C");
	//else if (score >= 60)
	//	printf("D");
	//else
	//	printf("F");

	//�ǽ�)���� üũ =>�հ�,���
	//int kor, eng, math;
	//printf("��/��/��?");
	//scanf("%d/%d/%d", &kor,&eng,&math);
	//if (kor<60 || eng<60 || math<60) {
	//	printf("����\n");
	//}
	//else {
	//	int sum = kor + eng + math;
	//	double avg = sum / 3.;
	//	printf("�հ�:%d\n", sum);
	//	printf("���:%.2f\n", avg);
	//}

	//�ǽ�)
	//int year = 400;
	//if (year % 4 == 0 && year%100!=0 || year%400==0) {
	//	printf("�����̴�\n");
	//}
	//else {
	//	printf("������ �ƴϴ�\n");
	//}

	//�ǽ�)�޴�����
	int no;
	printf("---------------\n");
	printf("1.�����\n2.«��\n3.������\n4.�����\n5.����\n6.���İ�Ƽ\n");
	printf("�޴���?");
	scanf("%d", &no);
	printf("---------------\n");
	if (no == 1 || no == 2) {
		printf("�߽��ڳ�\n");
	}
	else if (no == 3 || no == 4) {
		printf("�ѽ��ڳ�\n");
	}	
	else if (no == 5 || no == 6) {
		printf("����ڳ�\n");
	}
	else {
		printf("�߸��� �޴�\n");
	}











	
	return 0;
}