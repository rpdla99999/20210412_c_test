#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���ڿ��� ������
	//char str[] = "happy";
	////str = "angry"; //str�� ��� ����Ұ�
	//char* p = str;
	//printf("%s\n", p);

	//p = "python";
	//puts(p); //���ڿ������Լ�

	//�ǽ�) �̸��� �Է¹޾� �Է¹ް� ���
	//�����͸� �̿�
	char name[20];
	char* p = name;
	while (1) {
		printf("�̸���?");
		gets_s(p, sizeof(name));
		if (name[0] == 'q') break;
		//puts(p);
		//printf("�� ȯ���մϴ�.");
		printf("%s�� ȯ���մϴ�.\n", p);
	}



}