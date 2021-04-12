#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//이차배열의 포인터
	//int arr[][3] = { {1,2,3},{4,5,6} };
	//int* p = arr;
	//for (int i = 0; i < 6; i++) {
	//	printf("%d ", *p++);
	//}

	//두명의 학생의 국영수 점수를 배열에
	int score[][3] = { {90,89,77},{89,99,88} };
	int sum = 0; double avg;
	int (*p)[3] = score;
	printf("%p %p\n", p, p + 1);

	for (int i = 0; i < 2; i++) {
		sum = (*p)[0] + (*p)[1] + (*p)[2];
		avg = sum / 3.;
		printf("합계:%d 평균:%.2f\n", sum, avg);
		p++;
	}


	return 0;
}