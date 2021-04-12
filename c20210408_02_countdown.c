#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

//매개변수:카운트다운 초
//반환값 : 없음
//기능:카운트 다운을 출력
void countDown(int t) {
	for (int i = t; i > -1; i--) {
		Sleep(1000); //1/1000초 단위
		printf("%d초\n", i);
	}
}

int main() {
	//카운트 다운
	//5초....발사
	int t;
	printf("초?");
	scanf("%d", &t);
	printf("카운트 시작\n");
	countDown(t);
	printf("발사\n");

	return 0;
}