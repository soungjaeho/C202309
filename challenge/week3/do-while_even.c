#include<stdio.h>

int main() {
	int i = 0;
	//변수 선언

	do {
		i++;
		// i를 1씩증가
		if (i % 2 == 0) {
			continue;
			// i 까 짝수면 처음으로
		}
		printf("%d Hello World!\n", i);
		// 짝수가 아니면 출력

	} while (i < 10); 


	return 0;
}