#include <stdio.h>

int main() {
	//연산자(+,-,*,/,%)
	//정수와 정수=>정수
	//실수와 정수=>실수
	//int a = 20, b = 3; 
	//printf("%d + %d = %d\n",a,b,a+b);
	//printf("%d - %d = %d\n",a,b,a-b);
	//printf("%d * %d = %d\n",a,b,a*b);
	//printf("%d / %d = %f\n",a,b, (double)a/b);
	//printf("%d %% %d = %d\n", a, b, a % b);

	//실습)
	//int a = 50, b = 3;
	//printf("몫:%d\n", a/b);
	//printf("나머지:%d\n", a % b);
	//printf("실수값:%f\n", (double)a/b);

	//단항연산자
	//++, --
	//앞에붙이면 전위, 뒤에 붙이면 후위
	//int a = 10;
	//a++;//a += 1;//a = a + 1;
	//printf("%d\n", a);
	//a--;//a -= 1;//a = a - 1;
	//printf("%d\n", a);

	//
	//int a = 10;
	//printf("%d\n", a++); //출력을 하고 증가해라
	//printf("%d\n", a);
	//printf("%d\n", ++a);  //증가하고 출력해라

	//실습)
	//int a = 10;
	//a--;
	//printf("%d\n", --a);
	//printf("%d\n", a++);
	//printf("%d\n", a--);
	//printf("%d\n", a);

	//실습)
	//int a = 10;
	//int b = --a; // a=a-1; b=a;
	//int c = b++; //c=b ; b=b+1;
	//b = ++a;     // a=a+1; b=a;

	//printf("%d %d %d\n", a, b, c);

	//관계연산자
	//int a = 10, b = 20;
	//printf("%d\n", a < b);//1 , true
	//printf("%d\n", a > b);//0 , false
	//printf("%d\n", a == b);//0 , false
	//printf("%d\n", a != b);//1 , true

	//논리연산자:&&, ||, !
	//int a = 10, b = 20;
	//printf("%d\n", a>0 && b>0 );
	//printf("%d\n", a > 0 && b < 0);
	//printf("%d\n", a > 0 || b < 0);
	//printf("%d\n", !(a>0));

	//비트연산자:&,|, ~,^
	//printf("%d\n", 4 & 3);
	//printf("%d\n", 4 | 3);
	//시프트 연산자
	//printf("%d\n", 4>>2); //오른쪽으로 2비트 밀기
	//printf("%d\n", 4<<1); //왼쪽으로 1비트 밀기

	//삼항연산자
	//int a = -10;
	//a > 0 ?printf("양수") : printf("음수");

	//두수중 큰수를 출력
	//int a = 10, b = 20;
	//a>b? printf("%d\n",a):printf("%d\n", b);

	//int c = a > b ? a : b;
	//printf("%d\n", c);

	//
	//int a = 20, b = 10, c = 30;
	////int max = a> b ? a : b;
	////max = max > c ? max : c;
	////printf("%d\n", max);

	//int max = a > b ? (a>c?a:c) : (b>c?b:c);
	//printf("%d\n", max);

	//실습)짝/홀수 판별
	//int a = 6;
	//a % 2 == 0 ? printf("%d은 짝수\n",a) : printf("%d은 홀수\n",a);

	//포인터변수를 이용해서 출력
	//char* p = a % 2 == 0 ? "짝수" : "홀수";
	//printf("%d는 %s\n", a, p);


}