#include<stdio.h>

int main() {
	int i = 0;
	//���� ����
	while (i < 10) {
		// 10�̸����� ���Ǽ���
		i++;
		// i�� 1������
		if (i % 2 == 0) {
			continue; 
			// i �� ¦���� ó������
		}
		printf("%d Hello World!\n", i++);
		// ¦���� �ƴϸ� ���
	}

	return 0;

}