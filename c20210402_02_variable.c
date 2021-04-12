#include <stdio.h>

int main() {
	//정수형 변수명을 선언
	//int a; 
	//초기화
	//a = 20;
	//printf("%d\n",a);

	//실수형 변수명 선언
	//float f; //4byte
	//double d; //8byte
	//f = 3.141215242124542124521; //초기화
	//d = 3.141215242124542124521; //초기화
	//printf("%.15f\n",f);
	//printf("%.15f\n", d);

	//문자형
	//선언과 동시에 초기화
	//char c = 'A';
	//printf("문자는 %c  %d\n", c, c);

	//데이터형의 바이트수
	//int a = 100;
	//printf("정수형: %d\n", sizeof(a));
	//float f = 3.14;
	//double d = 3.14;
	//printf("float형: %d\n", sizeof(f));
	//printf("double형: %d\n", sizeof(d));
	//char c = 'a';
	//printf("char형: %d\n", sizeof(c));

	//문자열
	//배열의 이름은 주소를 가지고 있다:상수
	//배열의 크기는 문자열의 크기 +1
	//선언과 동시에 초기화 시에는 배열의 크기 생략가능
	char c[]="hello"; //nul문자가 마지막에 추가가 된다
	//c = "hello"; //상수기때문에 불가

	printf("문자열:%s  크기:%d\n",c, sizeof(c));
	printf("5번 : %c\n", c[5]);






	return 0;

}
