#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define LEN 5
int main() {
	//�迭 : array
	//int arr[3];
	//arr[0] = 10; arr[1] = 20; arr[2] = 30;
	//printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	//printf("%p %d\n", arr, sizeof(arr));
	//�ݺ����� �̿��ؼ� �ʱ�ȭ
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i+1) * 10;
	//}
	//////�ݺ����� �̿��ؼ� ���
	//for (int i = 0; i < 3; i++) {
	//	printf("%d ", arr[i]);
	//}

	//�ǽ�)
	//double arr[3] = {1.1,2.1,3.1};
	//double arr[5];
	////�迭�� ũ�� ���ϱ�
	//int size = sizeof(arr) / sizeof(double);
	//printf("������:%d\n", size);

	////�ݺ����� �̿��ؼ� �ʱ�ȭ
	//for (int i = 0; i < size; i++) {
	//	arr[i] = i + 1.1;
	//}

	////�ݺ����� �̿��ؼ� ���
	//for (int i = 0; i < size; i++) {
	//	printf("%.1f ", arr[i]);
	//}

	//������ �迭
	//char arr[] = { 'p', 'y', 't', 'h','o','n' };

	//int size = sizeof(arr)/sizeof(char);

	//for (int i = 0; i < size; i++) {
	//	printf("%c", arr[i]);
	//}

	//�迭���� ��
	//c�� �����迭
	//a�� ���� �Ҵ�Ǵ� ������ ��Ÿ�ӽ�
	//int a = 5;
	//const int a = 5; //���:������ �Ұ���
	//#define�� ���ǵ� ��ũ�λ�� : �����ϵǱ� ���� ��ü
	//int arr[LEN], sum = 0; 
	//int size = sizeof(arr) / sizeof(int);

	////�Է¹ޱ�
	//for (int i = 0; i < size; i++) {
	//	printf("[%d]������?",i+1);
	//	scanf("%d", &arr[i]);
	//}
	////����ϱ�
	//for (int i = 0; i < size; i++) {
	//	printf("%d %p\n", arr[i] , &arr[i]);
	//}


	////�հ豸�ϱ�
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("�հ�:%d\n", sum);

	//�ǽ�)���л��� ���� �Է¹޾� �հ�/���/�˻�
	//int score[3], sum=0;
	//int size = sizeof(score) / sizeof(int);
	//for (int i = 0; i < size; i++) {
	//	printf("%d�� ������?", i+1);
	//	scanf("%d", &score[i]);
	//}
	//printf("----------------\n");
	//for (int i = 0; i < size; i++) {
	//	printf("%d�� ������ %d\n", i + 1, score[i]);
	//	sum += score[i];
	//}
	//printf("----------------\n");
	//printf("�հ�:%d\n", sum);
	//printf("���:%.2f\n", (double)sum/size);

	//�˻�
	//int score[3] = { 20,50,30 };
	//int no;
	//int quit; //���ắ��
	//do{
	//	printf("�˻���ȣ?");
	//	scanf("%d", &no);
	//	getchar(); //����ó��
	//	//�߸��� ��ȣ ó��
	//	if (no <1 || no >3) {
	//		printf("�߸��� ��ȣ\n");
	//		continue; //��� ����
	//	}
	//	printf("������ %d\n", score[no - 1]);
	//	printf("******************\n");
	//	printf("����(q)?");
	//	no = getchar();
	//	//printf("%d", no);
	//	//scanf("%c", &quit);
	//} while (no != 'q');


	//int num, s = 0;
	//int grade[5];
	//int size = sizeof(grade) / sizeof(int);
	//int quit;

	//for (int i = 0; i < size; i++) {
	//	printf("grade %d: ", i + 1);
	//	scanf("%d", &grade[i]);
	//	s += grade[i];
	//}
	//for (int i = 0; i < size; i++) {
	//	printf("%d grade : %d\n", i + 1, grade[i]);
	//}
	//printf("sum: %d, avarage: %.2f\n", s, (double)s / size);

	//�׽�Ʈ ��
	//int grade[3] = { 20,50,30 };
	//char num[2];
	//int newnum;
	//while (1)
	//{
	//	printf("number 1~%d(q:stop)? : ", 3);
	//	scanf("%s", num);
	//	if (isdigit(num[0])) { //���ڿ���
	//		newnum = atoi(num); //���ڿ��� ���ڷ� ��ȯ�ϴ� �Լ�
	//		if (newnum < 3 + 1 && newnum>0)
	//			printf("%d grade: %d\n", num, grade[newnum - 1]);
	//		else printf("wrong\n");
	//	}
	//	else {
	//		printf("���ھƴ�\n");
	//		if (num[0] == 113)break; //q�� �ԷµǸ� ����
	//	}

	//}


	//�Ǻ���ġ�� ���� ���ϱ�
	//0 1 1 2 3 5 8 13 .....
	int fibo[20];
	fibo[0] = 0; fibo[1] = 1;
	for (int i = 2; i < 20; i++) {
		fibo[i] = fibo[i - 2] + fibo[i - 1];
	}

	//���
	for (int i = 0; i < 20; i++)
		printf("%d\n", fibo[i]);

	
	return 0;
}