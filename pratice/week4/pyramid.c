#include<stdio.h>
int main() {
	int floor;
	printf("몇 층으로 쌓을 까요?(1~100)\n");
	//요구 출력
	scanf_s("%d", &floor);
	//입력값 받아드리기

	for (int i = 0; i < floor; i++)
		//1차 for 문 ( i 를 0부터 입력한 변수 floor 까지 1씩 증가시키면서 반복)
	{
		for (int j = floor-2; j -i >= 0 ; j--)
			// 2차 for 문 (j를 floor-2 -> <1차 for 문의 i가 개입해서 floor에서 1을 더빼주었습니다> 부터 0이하까지 1씩 빼면서 반복)
			printf("S");
		// 반복하는데 s를 출력하는것을 반복
		for (int k = 0; k < 2 * i + 1; k++)
			// 2번째 2차 for 문(k를 0부터 2*i -1 까지 1씩 증가시키면서 반복)
			printf("*");
		// 반복하는데 *을 출력하는것을 반복
		printf("\n");
		// 2차 반복문 다 끝나고 줄 바꾸기

	}

		return 0;

}