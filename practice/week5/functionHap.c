#include<stdio.h>

int hapf(int value);
//hapf 함수 원형 선언

void main() {
	printf("1부터 10까지의 합은 %d\n", hapf(10));
	printf("1부터 100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));
// main함수 선언 (각각을 출력하는함수입니다)
}

int hapf(int value) {
//함수 hapf 정의
	int i = 0;
	int hap = 0;
// 변수 i 와 hap를 int형 0으로 정의

	while (i <= value) {
		hap = hap + i;
//hap 를 hap + i 로 정의
		i = i + 1;
//i 를 증가시키는데 i+1씩 증가
	}
	return hap;
// 변수 마지막 hap를 반환
}