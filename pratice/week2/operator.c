#include<stdio.h>

int main() {
	int x = +4;
	int y = -2;
	//���� x,y���� ����4��-2�� �ʱ�ȭ
	printf("x+(-y)=%d\n", x + (-y));
	//x+(-y)�� ���
	printf("-x+(+y)=%d\n", -x + (+y));
	//-x+(+y)�� ���
	return 0;


}
