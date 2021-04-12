#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//매개변수:없다, 반환값:없다
void voidTest() {
	printf("void함수\n");
}
//매개변수:한개, 반환값:없다
void voidTest2(int a) {
	printf("매개변수:%d\n", a);
}

void voidTest3(int a, int b) {
	printf("두수의 합:%d\n", a+b);
}
//매개변수:반지름
//원의넓이를 출력해주는 기능
//함수의 이름 : area, 매개변수이름 : r(double)
//call by value방식
void area(double r2) { //지역변수:함수실행시 생성, 함수 종료시 소멸
	printf("넓이:%.2f\n", r2 * r2 *3.14);
}

//매개변수:반지름(double)
//반환값:넓이(double)
//원의넓이를 구해서 반환하는 함수
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area; //반환값은 한개
}

//세정수를 매개변수로 받아서 합을 반환하는 함수
int add(int a, int b, int c) {
	return a + b + c;
}

//두개의 정수를 매개변수로 받아서 나눈실수값을 반환하는 함수
double div(int a, int b) {
	return (double)a / b;
}

int max(int a, int b) {
	int m;
	if (a > b)
		m = a;
	else if (b > a)
		m = b;
	else
		m = 0; //두수가 같을 때는 0을 리턴
		
	return m;//return은 함수의 종료
}

//진입점함수
int main() {
	//함수
	//voidTest();
	//voidTest2(10);
	//voidTest3(20,30);
	//
	//double r; //지역변수
	//printf("반지름은?");
	//scanf("%lf", &r);
	//area(r);
	//
	//double r = 3.6;
	//double rValue = areaReturn(r);
	//printf("넓이: %.2f\n", rValue);
	//
	//printf("합계:%d\n", add(20, 30, 50));
	//
	//int a=10, b=3;
	//double d = div(a,b);
	//printf("나눈값:%.2f\n", d);
	int a = 20, b = 20;
	int m = max(a,b);
	if (m!=0)
		printf("큰수는 %d\n",m );
	else
		printf("%d == %d\n",a,b);

	return 0;
}