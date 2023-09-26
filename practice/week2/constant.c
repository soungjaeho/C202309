#include<stdio.h>

#define X 1 
#define PI 3.171592
// X PI 메인 함수 이전에 고정값처럼 선언
int main() {
	double z;
	// z 변수를 더블형으로 선언
	z = X + PI;
	// z 변수를 X+PI 로 초기화
	printf("%f", z);
	// z 변수를 출력 
	return 0;

}