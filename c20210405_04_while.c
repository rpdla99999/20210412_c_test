#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//반복문 : while
	//while (1) {
	//	printf("c!!!");
	//}
	
	//break 반복문 탈출
	int cnt = 0;
	while (1) { //1:true, 0 :false
		printf("%d c!!!\n", cnt+1);
		cnt++;//cnt += 1; //cnt = cnt + 1;
		if (cnt > 9) break;
	}

	//1~1000까지의 합
	//int i=0, sum=0;
	//while (i<1000) {
	//	//printf("%d\n",++i);
	//	sum += ++i;//i=i+1; sum = sum + i;
	//}
	//printf("합계:%d\n", sum);

	//합이 2000을 넘는 정수와 그합을 구하라
	//1+2+3+4......+n
	//1,3,6,10.......2000이넘는 n
	//int n = 0, sum = 0;
	//while (sum<2000) {
	//	n++;
	//	sum += n;
	//}
	//printf("n:%d  sum:%d\n", n, sum);

	//실습)20이하의 3의 배수만 출력
	//1)
	//int a=0;
	//while (a<20) {
	//	a++;
	//	if (a%3==0) printf("%d ", a);
	//}
	//2)
	//int a = 3;
	//while (a < 20) {
	//	printf("%d ", a);
	//	a += 3;
	//}
	//3)
	//int a = 0;
	//while (1) {
	//	a+=3;
	//	if (a > 20) break;
	//	printf("%d ", a);		
	//}

	//continue:계속
	//1~10까지 짝수만 출력
	int a = 0;
	while (a < 10) {
		a++;
		if (a % 2 != 0) continue;
		printf("%d ", a);
	}






}