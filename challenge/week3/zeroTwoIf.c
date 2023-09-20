#include<stdio.h>

int main(void) {

	int num = 0;
	//변수 선언
	printf("숫자를 입력하시오: \n");
	scanf_s("%d", &num);
	//안내문구 출력후 입력값 입력
	if (num == 0)
		printf("zero");
	//입력값이 0일경우 해당하는 값 출력
	else if (num == 1)
		printf("one");
	//입력값이 1일경우 해당하는 값 출력
	else if (num == 2)
		printf("two");
	//입력값이 2일경우 해당하는 값 출력
	else
		printf("not 0~2");
	//입력값이 0~2가 아닐경우 에러메시지 출력

	return 0;
}