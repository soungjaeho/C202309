#include<stdio.h>

long MultiF(int value);
// MultiF�Լ� ���� ����

void main() {
	printf("1���� 2������ ���� %d\n", MultiF(2));
	printf("1���� 3������ ���� %d\n", MultiF(3));
	printf("1���� 5������ ���� %d\n", MultiF(5));
}
// main�Լ� ����(������ ����ϴ� �Լ�)

long MultiF(int value) {
// MultiF�Լ� ����
	int i = 0;

	long Mul = 1;
// ���� i �� Mul�� ����
	while (i < value) {
		i++;
// i �� 1�� ����
		Mul = Mul * i;
// Mul�� Mul�� i�� ��(i�� 1�� ����)

	}
	return Mul;
//������ Mul���� ��ȯ
}
