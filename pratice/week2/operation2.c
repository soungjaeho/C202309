#include<stdio.h>

int main() {
	int x = 4;
	int y = 2;
	// x �� y�� int�� ������ �����԰� ���ÿ� 4 , 2�� ���� �ʱ�ȭ
	int z;
	// z �� int �� ������ ����
	z = (x + y) * (x - y);
	//z�� (x + y) * (x - y)�� �ʱ�ȭ
	printf("z= (x + y) * (x - y)=%d\n", z);
	//z ���
	z = (x * y) + (x / y);
	//z�� (x * y) * (x / y)�� �ʱ�ȭ
	printf("z= (x + y) * (x - y)=%d\n", z);
	//z ���
	z = x + y + 2004;
	//z�� x + y + 2004�� �ʱ�ȭ
	printf("z= x + y + 2004=%d\n", z);
	//z ���
	return 0;
}