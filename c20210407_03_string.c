#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //���ڿ� ���� �Լ�

int main() {
	//����
	//char c;
	//scanf("%c", &c);
	//printf("����:%c\n", c);

	//���ڱ���� �ִ�
	//int c = getchar(); //�����Է� �����Լ�
	//printf("�Է¹���: %c %d\n", c, c);
	//putchar(c); //������� �����Լ�


	//getch()�Լ�:���ڱ���� ����
	//char c = getch();
	//printf("�Է¹���:");
	//putchar(c);

	//��й�ȣ�� �Է��ϸ� *�� ���
	//char pw[5];
	//printf("password?");
	//for (int i=0; i < 4; i++) {
	//	pw[i] = getch();
	//	putchar('*');
	//}
	//pw[4] = '\0'; //���ڿ��� ��
	//printf("\n��й�ȣ:%s\n", pw);

	//���ڿ�
	//char s[6] = "hello";
	//char s[6]; //�迭�� �̸��� �ּ�
	//scanf("%s", s); //����ó�� �ȵ�
	//printf("%s\n", s);

	//���ڿ� �����Լ�:����ó������
	//char name[20];
	//printf("�̸���?");
	//gets(name);
	//printf("����� �̸��� "); puts(name);

	//���ڿ� �����Լ�
	char name[10] = "hong";
	//name = "kim";
	strcpy(name,"kim");
	puts(name);



	return 0;

}