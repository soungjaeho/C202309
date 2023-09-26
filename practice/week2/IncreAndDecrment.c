#include<stdio.h>

int main() {
	int x = 1;
	// int 형 변수 x 를 1로 초기화
	printf("x=%d\n", x++);
	// x 출력하고 1더하기
	printf("x=%d\n", x++);
	// x 출력하고 1더하기
	printf("x=%d\n", x--);
	// x 에서 출력하고 1빼기
	printf("x=%d\n", x--);
	// x 에서 출력하고 1빼기
	printf("x=%d\n", --x);
	// x 에서 1뺴고 출력
	return 0;

}