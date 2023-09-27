#include<stdio.h>
int main() {
	int floor;
	// floor 변수 지정
	printf("몇 층을 쌓겠습니까? (5~100)");
	scanf_s("%d",&floor);
	//안내문구 출력+ 층수입력

	for (int i = floor; i >0; i--) {
	// 변수 i 가 입력받은 층수로 지정하고 하나씩 줄여가며 반복
		for(int j =0; j< floor- i; j++)
			printf("S");
		// S 를 출력하는데 지정한 층수에서 변화하는 i값을 빼준값만큼 j를 0부터 하나씩 증가 시키며 반복하면서 출력
		for (int k = 2 * i - 1; k > 0; k--)
			printf("*");
		// *을 출력하는데 변화하는 i값에 따라 2*i-1부터 0까지 하나씩 줄여가면서 반복해서 출력
		
		printf("\n");
		//가장 큰 for문 한바퀴 돌고나서 줄바꾸기
	}
	return 0;
}