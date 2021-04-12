#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//다차원배열
	//int arr[2][3];
	////arr[0][0] = 1; 	arr[0][1] = 2;	arr[0][2] = 3;
	////arr[1][0] = 4;	arr[1][1] = 5;	arr[1][2] = 6;

	//int rsize = sizeof(arr)/sizeof(arr[0]);
	//int csize = sizeof(arr[0]) / sizeof(int);
	//printf("사이즈:%d\n", rsize);


	//for (int i = 0; i < rsize; i++) { //행
	//	for (int j = 0; j < csize; j++) { //열
	//		arr[i][j] = (3*i) + j+1;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}

	//실습)학생들의 국/영/수 점수
	int score[2][3];
	for (int i = 0; i < 2; i++) {
		printf("%d)국영수는?", i+1);
		for (int j = 0; j < 3; j++) {
			scanf("%d", &score[i][j]);
		}
	}
	printf("----------------------------\n");
	//합계,평균 출력
	int sum=0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sum += score[i][j];
		}
		//합계,평균
		printf("[%d]합계:%d 평균:%.2f\n",i+1,sum, (double)sum/3);
		sum = 0;
	}




	return 0;
}