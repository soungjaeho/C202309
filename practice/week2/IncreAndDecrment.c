#include<stdio.h>

int main() {
	int x = 1;
	// int �� ���� x �� 1�� �ʱ�ȭ
	printf("x=%d\n", x++);
	// x ����ϰ� 1���ϱ�
	printf("x=%d\n", x++);
	// x ����ϰ� 1���ϱ�
	printf("x=%d\n", x--);
	// x ���� ����ϰ� 1����
	printf("x=%d\n", x--);
	// x ���� ����ϰ� 1����
	printf("x=%d\n", --x);
	// x ���� 1���� ���
	return 0;

}