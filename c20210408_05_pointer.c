#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�����ͺ���
	//int a = 10;
	//int* p = &a;
	//printf("a:%d %p\n", a, &a);
	//printf("p:%p %d\n", p, *p);

	//char c = '%';
	//char* p2 = &c;
	//printf("c:%c   *p2:%c\n", c, *p2);

	//double d = 3.14;
	//char* p3 = &d;
	//printf("d:%f %p\n", d, &d);
	//printf("*p3:%f\n", *p3);

	//float f = 5.55f;
	//float* p4 = &f;

	//�����ͺ��� p�� �̿��Ͽ� a�� ���� b�� ���� ���
	//int a = 10, b = 20;
	//int* p;
	//p = &a;
	//printf("%d\n", *p);
	//p = &b;
	//printf("%d\n", *p);

	//�ǽ�)
	//int a = 10, b = 20, c = 30, base=100;
	//int* p = &a;
	//*p += base;
	//printf("a:%d\n", *p);
	//p = &b;
	//*p += base;
	//printf("b:%d\n", *p);
	//p = &c;
	//*p += base;
	//printf("b:%d\n", *p);

	//�迭�� ������
	//int arr[3] = {10,20,30};
	//int* p = arr;
	////for (int i = 0; i < 3; i++) {
	////	printf("%d %d %d %d\n", *(p + i), *(arr+i), arr[i], p[i]);
	////}

	//for (int i = 0; i < 3; i++) {
	//	printf("%d %d\n", *p, *arr);
	//	p++;
	//	//arr++; //�Ұ�
	//}

	//�Ǻ���ġ ������ �����͸� �̿��ؼ� ���ϰ� ���
	int fibo[20];
	int* p = fibo;
	*p = 0; p++;
	*p = 1; p++;
	for (int i = 2; i < 20; i++) {
		*p = *(p - 2) + *(p - 1);
		p++;
	}
	p = fibo; //ó�� ��ġ��
	for (int i = 0; i < 20; i++) {
		printf("%d ", *p);
		p++;
	}

















	return 0;
}