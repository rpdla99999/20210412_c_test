#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//조건식이 참일때 수행할 문장 거짓일때 수행문장을 구별
	//int a = 0;
	//if (a > 0) {
	//	printf("양수\n");
	//}
	//else {
	//	//중첩if문
	//	if (a < 0) {
	//		printf("음수\n");
	//	}
	//	else {
	//		printf("양수도 음수도 아닙니다.\n");
	//	}
	//}

	//표현을 간단하게
	//int a = 0;
	//if (a > 0) 
	//	printf("양수\n");
	//else if (a < 0) 
	//	printf("음수\n");
	//else 
	//	printf("양수도 음수도 아닙니다.\n");
		
	//실습)두정수를 입력받아 큰수를 출력(두수는 같을수도 있다)
	//int a, b;
	//printf("두정수는?");
	//scanf("%d %d", &a,&b);
	//if (a > b)
	//	printf("%d\n", a);
	//else if (b > a)
	//	printf("%d\n", b);
	//else
	//	printf("두수는 같다\n");

	//실습)학점
	//int score;
	//printf("점수는?");
	//scanf("%d", &score);

	//if (score > 100 || score < 0)
	//	printf("잘못된 점수\n");
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

	//실습)과락 체크 =>합계,평균
	//int kor, eng, math;
	//printf("국/영/수?");
	//scanf("%d/%d/%d", &kor,&eng,&math);
	//if (kor<60 || eng<60 || math<60) {
	//	printf("과락\n");
	//}
	//else {
	//	int sum = kor + eng + math;
	//	double avg = sum / 3.;
	//	printf("합계:%d\n", sum);
	//	printf("평균:%.2f\n", avg);
	//}

	//실습)
	//int year = 400;
	//if (year % 4 == 0 && year%100!=0 || year%400==0) {
	//	printf("윤년이다\n");
	//}
	//else {
	//	printf("윤년이 아니다\n");
	//}

	//실습)메뉴선택
	int no;
	printf("---------------\n");
	printf("1.자장면\n2.짬뽕\n3.설렁탕\n4.비빕밥\n5.피자\n6.스파게티\n");
	printf("메뉴는?");
	scanf("%d", &no);
	printf("---------------\n");
	if (no == 1 || no == 2) {
		printf("중식코너\n");
	}
	else if (no == 3 || no == 4) {
		printf("한식코너\n");
	}	
	else if (no == 5 || no == 6) {
		printf("양식코너\n");
	}
	else {
		printf("잘못된 메뉴\n");
	}











	
	return 0;
}