#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define LEN 5
int main() {
	//배열 : array
	//int arr[3];
	//arr[0] = 10; arr[1] = 20; arr[2] = 30;
	//printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	//printf("%p %d\n", arr, sizeof(arr));
	//반복문을 이용해서 초기화
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i+1) * 10;
	//}
	//////반복문을 이용해서 출력
	//for (int i = 0; i < 3; i++) {
	//	printf("%d ", arr[i]);
	//}

	//실습)
	//double arr[3] = {1.1,2.1,3.1};
	//double arr[5];
	////배열의 크기 구하기
	//int size = sizeof(arr) / sizeof(double);
	//printf("사이즈:%d\n", size);

	////반복문을 이용해서 초기화
	//for (int i = 0; i < size; i++) {
	//	arr[i] = i + 1.1;
	//}

	////반복문을 이용해서 출력
	//for (int i = 0; i < size; i++) {
	//	printf("%.1f ", arr[i]);
	//}

	//문자형 배열
	//char arr[] = { 'p', 'y', 't', 'h','o','n' };

	//int size = sizeof(arr)/sizeof(char);

	//for (int i = 0; i < size; i++) {
	//	printf("%c", arr[i]);
	//}

	//배열값의 합
	//c는 정적배열
	//a에 값이 할당되는 시점은 런타임시
	//int a = 5;
	//const int a = 5; //상수:변경이 불가능
	//#define에 정의된 매크로상수 : 컴파일되기 전에 대체
	//int arr[LEN], sum = 0; 
	//int size = sizeof(arr) / sizeof(int);

	////입력받기
	//for (int i = 0; i < size; i++) {
	//	printf("[%d]정수는?",i+1);
	//	scanf("%d", &arr[i]);
	//}
	////출력하기
	//for (int i = 0; i < size; i++) {
	//	printf("%d %p\n", arr[i] , &arr[i]);
	//}


	////합계구하기
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("합계:%d\n", sum);

	//실습)반학생의 점수 입력받아 합계/평균/검색
	//int score[3], sum=0;
	//int size = sizeof(score) / sizeof(int);
	//for (int i = 0; i < size; i++) {
	//	printf("%d번 점수는?", i+1);
	//	scanf("%d", &score[i]);
	//}
	//printf("----------------\n");
	//for (int i = 0; i < size; i++) {
	//	printf("%d번 점수는 %d\n", i + 1, score[i]);
	//	sum += score[i];
	//}
	//printf("----------------\n");
	//printf("합계:%d\n", sum);
	//printf("평균:%.2f\n", (double)sum/size);

	//검색
	//int score[3] = { 20,50,30 };
	//int no;
	//int quit; //종료변수
	//do{
	//	printf("검색번호?");
	//	scanf("%d", &no);
	//	getchar(); //엔터처리
	//	//잘못된 번호 처리
	//	if (no <1 || no >3) {
	//		printf("잘못된 번호\n");
	//		continue; //계속 진행
	//	}
	//	printf("점수는 %d\n", score[no - 1]);
	//	printf("******************\n");
	//	printf("종료(q)?");
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

	//테스트 중
	//int grade[3] = { 20,50,30 };
	//char num[2];
	//int newnum;
	//while (1)
	//{
	//	printf("number 1~%d(q:stop)? : ", 3);
	//	scanf("%s", num);
	//	if (isdigit(num[0])) { //숫자여부
	//		newnum = atoi(num); //문자열을 숫자로 변환하는 함수
	//		if (newnum < 3 + 1 && newnum>0)
	//			printf("%d grade: %d\n", num, grade[newnum - 1]);
	//		else printf("wrong\n");
	//	}
	//	else {
	//		printf("숫자아님\n");
	//		if (num[0] == 113)break; //q가 입력되면 종료
	//	}

	//}


	//피보나치의 수열 구하기
	//0 1 1 2 3 5 8 13 .....
	int fibo[20];
	fibo[0] = 0; fibo[1] = 1;
	for (int i = 2; i < 20; i++) {
		fibo[i] = fibo[i - 2] + fibo[i - 1];
	}

	//출력
	for (int i = 0; i < 20; i++)
		printf("%d\n", fibo[i]);

	
	return 0;
}