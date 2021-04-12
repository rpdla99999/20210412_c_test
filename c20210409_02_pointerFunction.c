#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//함수:call by reference
//주소를 매개변수로 받는다
//main함수의 a의 값을 변경 가능
void change(int* p) {
	*p = 20;
}

//main함수의 두수를 바꾸기
void twoChange(int* pa, int* pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
//합계구하기
void sumCal(int* pa, int* psum) {
	*psum += *pa;
}

int main() {
	//함수에 포인터 넘기기
	//int a=10;
	//change(&a);
	//scanf("%d", &a);
	//printf("a: %d\n", a);
	//
	//실습1)두수 바꾸기
	//int a = 10, b = 20;
	//twoChange(&a, &b);
	//printf("%d %d\n", a,b);
	//
	//실습2)반복문을 이용해서 입력받은값을 누적
	//함수에서 누적
	int a, sum = 0;
	while (1) {
		printf("정수는?");
		scanf("%d", &a);
		if (a == 0) break;
		sumCal(&a, &sum);
	}
	printf("누적합계:%d\n", sum);

}