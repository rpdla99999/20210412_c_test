#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//전역변수
//int sum;

//매개변수로 정수를 입력받아 누적하는 함수
int userSum(int a) {
	//static변수
	//함수가 최초로 실행됬을때 생성, 프로그램 종료시 소멸
	//선언된 함수안에서만 접근가능
	static int sum = 0;
	sum = sum + a;
	return sum;
}

//매개변수:없다
//리턴값: 이함수를 실행한 횟수
//함수이름 : countTest
int countTest() {
	static int cnt=0;
	cnt++;
	return cnt;
}

int main() {
	//전역변수,지역변수 사용예
	//printf("누적:%d\n", userSum(10));
	//printf("누적:%d\n", userSum(20));
	//sum = 100; static변수 접근불가

	//반복문을 이용해서 함수를 10번 실행
	//함수의 리턴값을 출력 
	for (int i = 0; i < 10; i++)
		printf("%d\n", countTest());
}