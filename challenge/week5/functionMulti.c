#include<stdio.h>

long MultiF(int value);
// MultiF�Լ� ���� ����

<<<<<<< HEAD
int main() {
	printf("1���� 2������ ���� %ld\n", MultiF(2));
	printf("1���� 3������ ���� %ld\n", MultiF(3));
	printf("1���� 5������ ���� %ld\n", MultiF(5));
	return 0;
}
// main�Լ� ����(������ ����ϴ� �Լ��Դϴ�.) 
=======
void main() {
	printf("1���� 2������ ���� %d\n", MultiF(2));
	printf("1���� 3������ ���� %d\n", MultiF(3));
	printf("1���� 5������ ���� %d\n", MultiF(5));
}
// main�Լ� ����(������ ����ϴ� �Լ�)
>>>>>>> 67c12be015477616827adf522cfd2e6ed9dddc2c

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
