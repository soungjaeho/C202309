#include<stdio.h>

int main() {
	int i = 0;
	// 변수 i 선언
	while (i < 10) {
		// i 가 10미만까지 반복
		i++;
		// i 를 1씩 증가
		if (i % 2 == 0) {
			continue; 
// i 가 짝수면 처음으로
		}
		printf("%d Hello World!\n", i++);
	// 홀수면 출력
	}
	

	return 0;

}
