#include<stdio.h>

int hapf(int value);
//hapf �Լ� ���� ����

void main() {
	printf("1���� 10������ ���� %d\n", hapf(10));
	printf("1���� 100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));
// main�Լ� ���� (������ ����ϴ��Լ��Դϴ�)
}

int hapf(int value) {
//�Լ� hapf ����
	int i = 0;
	int hap = 0;
// ���� i �� hap�� int�� 0���� ����

	while (i <= value) {
		hap = hap + i;
//hap �� hap + i �� ����
		i = i + 1;
//i �� ������Ű�µ� i+1�� ����
	}
	return hap;
// ���� ������ hap�� ��ȯ
}