#include<stdio.h>

int main() {
	int i = 0;
<<<<<<< HEAD
	//���� ����

	do {
		i++;
		// i�� 1������
		if (i % 2 == 0) {
			continue;
			// i �� ¦���� ó������
		}
		printf("%d Hello World!\n", i);
		// ¦���� �ƴϸ� ���

=======
//변수 i 선언
	do {
		i++;
		// i 를 1씩 증가
		if (i % 2 == 0) {
			continue;
			// i가 짝수면 처음으로
		}
		printf("%d Hello World!\n", i);
// i 가 홀수면 출력
>>>>>>> dfe5f5a17254caf398246db159357a05d30bbbdd
	} while (i < 10); 
	// i 가 10미만까지 반복


	return 0;
}