#include<stdio.h>

int main() {
	int x = 4;
	int y = 2;
	// x �� y�� int�� ������ �����԰� ���ÿ� 4 , 2�� ���� �ʱ�ȭ
	int z;
	// z �� int �� ������ ����

	z = x + y;
	//z�� x+y�� ����
	printf("z = x + y =%d\n", z);
	//z �� ���
	z = x - y;
	//z�� x-y�� ����
	printf("z = x - y =%d\n", z);
	//z �� ���
	z = x * y;
	//z�� x*y�� ����
	printf("z = x * y =%d\n", z);
	//z �� ���
	z = x / y;
	//z�� x/y�� ����
	printf("z = x / y =%d\n", z);
	//z �� ���
	return 0;

}