#include<stdio.h>

int main() {
	int x = +4;
	int y = -2;
	//변수 x,y선언 각각4와-2로 초기화
	printf("x+(-y)=%d\n", x + (-y));
	//x+(-y)를 출력
	printf("-x+(+y)=%d\n", -x + (+y));
	//-x+(+y)를 출력
	return 0;


}
