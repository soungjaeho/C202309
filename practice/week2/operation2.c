#include<stdio.h>

int main() {
	int x = 4;
	int y = 2;
	// x 와 y를 int형 변수로 선언함과 동시에 4 , 2로 각각 초기화
	int z;
	// z 를 int 형 변수로 선언
	z = (x + y) * (x - y);
	//z를 (x + y) * (x - y)로 초기화
	printf("z= (x + y) * (x - y)=%d\n", z);
	//z 출력
	z = (x * y) + (x / y);
	//z를 (x * y) * (x / y)로 초기화
	printf("z= (x + y) * (x - y)=%d\n", z);
	//z 출력
	z = x + y + 2004;
	//z를 x + y + 2004로 초기화
	printf("z= x + y + 2004=%d\n", z);
	//z 출력
	return 0;
}