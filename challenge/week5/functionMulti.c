#include<stdio.h>

long MultiF(int value);
// MultiF함수 원형 선언

<<<<<<< HEAD
int main() {
	printf("1부터 2까지의 곱은 %ld\n", MultiF(2));
	printf("1부터 3까지의 곱은 %ld\n", MultiF(3));
	printf("1부터 5까지의 곱은 %ld\n", MultiF(5));
	return 0;
}
// main함수 정의(각각을 출력하는 함수입니다.) 
=======
void main() {
	printf("1부터 2까지의 곱은 %d\n", MultiF(2));
	printf("1부터 3까지의 곱은 %d\n", MultiF(3));
	printf("1부터 5까지의 곱은 %d\n", MultiF(5));
}
// main함수 정의(각각을 출력하는 함수)
>>>>>>> 67c12be015477616827adf522cfd2e6ed9dddc2c

long MultiF(int value) {
// MultiF함수 정의
	int i = 0;

	long Mul = 1;
// 변수 i 와 Mul을 선언
	while (i < value) {
		i++;
// i 가 1씩 증가
		Mul = Mul * i;
// Mul를 Mul에 i를 곱(i는 1씩 증가)

	}
	return Mul;
//마지막 Mul값을 반환
}
