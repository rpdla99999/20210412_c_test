#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//반복문 : for
	//int i;//반복할 변수

	//for (i=0 ; i<10 ; i++) {
	//	printf("%d\n", i);
	//}

	//실습)구구단 출력
	//int dan;
	//while (1) {
	//	printf("단수는?");
	//	scanf("%d", &dan);
	//	if (dan == 0) break;
	//	for (int i = 1; i < 10; i++) {
	//		printf("%d * %d = %d\n", dan, i, dan * i);
	//	}
	//}

	// do{
	//	printf("단수는?");
	//	scanf("%d", &dan);
	//	if (dan!=0)
	//		for (int i = 1; i < 10; i++) {
	//			printf("%d * %d = %d\n", dan, i, dan * i);
	//		}
	//}while (dan != 0);

	//이중 for
	//for (int i = 2; i < 10; i++) {
	//	printf("[%d]단\n", i);
	//	for (int j = 1; j < 10; j++) {
	//		printf("%d * %d = %d\n", i, j, i*j);
	//	}
	//}
	//3중 for
	//for (int i = 0; i < 10; i++)
	//	for (int j = 0; j < 10; j++)
	//		for (int k = 0; k < 10; k++)
	//			printf("%d %d %d\n", i, j, k);

	//실습)1~100까지의 합
	//int sum=0;
	//for (int i = 1; i < 101; i++) {
	//	sum += i;
	//}
	//printf("1부터 100까지의 합은 %d\n",sum);

	//실습)1~n까지의 합
	//int n, sum = 0;
	//printf("n값은?");
	//scanf("%d", &n);

	//for (int i = 1; i < n+1; i++) { //i는 for의 지역변수
	//	sum += i;
	//}
	//printf("1부터 %d까지의 합은 %d\n",n, sum);
	//printf("i의 현재값 :%d\n", i); //i변수 사용불가

	//실습)큰수에서 작은수 빼기
	//int a, b;
	//for (int i = 0; i < 10; i++) {
	//	//두수를 입력받기
	//	printf("두수는?");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	scanf("%d", &b);
	//	//큰수에서 작은수 빼고 출력
	//	if (a > b) printf("절대값:%d\n", a-b);
	//	else printf("절대값:%d\n", b-a);
	//	printf("스페이스를 입력하면 종료됩니다\n");
	//	int c = getch(); //에코없는 함수
	//	//printf("%d\n", c);
	//	if (c == 32) break; //스페이스를 입력하면 종료
	//}

	//별찍기1
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < i+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//별찍기2
	//for (int i = 7; i > 0; i--) {
	//	for (int j = 0; j < i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//별찍기3
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < 7-i; j++) {
	//		printf(" ");
	//	}
	//	for (int j = 0; j < i+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//별찍기4
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
	//if (no == 10) { //엔터를 입력했다면 
	//	printf("ok");
	//}

	//메뉴고르기
	//char a;
	//do {
	//	printf("메뉴를 고르세요.\n");
	//	printf("1.짜장\n2.탕수육\n3.뚝불\n4.제육\n5.연어초밥\n6.모둠초밥\nq:종료\n음식번호:");
	//	scanf("%c", &a);
	//	//printf("%c %d\n",a, a);
	//	getchar(); //엔터처리

	//	switch (a) {
	//	case '1':
	//	case '2':
	//		printf("중식코너\n\n"); break;
	//	case '3':
	//	case '4':
	//		printf("한식코너\n\n"); break;
	//	case '5':
	//	case '6':
	//		printf("일식코너\n\n"); break;
	//	case 'q':
	//		printf("프로그램을 종료\n\n"); break;
	//	default :
	//		printf("잘못입력하셨습니다.\n\n"); break;
	//	} 
	//} while (a != 'q');

	//팩토리얼 구하기
	//int fac = 7;
	//int mul = 1; //곱한값 누적변수
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