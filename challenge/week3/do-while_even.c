#include<stdio.h>

int main() {
	int i = 0;
<<<<<<< HEAD
	//변수 선언

	do {
		i++;
		// i를 1씩증가
		if (i % 2 == 0) {
			continue;
			// i 까 짝수면 처음으로
		}
		printf("%d Hello World!\n", i);
		// 짝수가 아니면 출력

=======
//蹂��닔 i �꽑�뼵
	do {
		i++;
		// i 瑜� 1�뵫 利앷��
		if (i % 2 == 0) {
			continue;
			// i媛� 吏앹닔硫� 泥섏쓬�쑝濡�
		}
		printf("%d Hello World!\n", i);
// i 媛� ����닔硫� 異쒕젰
>>>>>>> dfe5f5a17254caf398246db159357a05d30bbbdd
	} while (i < 10); 
	// i 媛� 10誘몃쭔源뚯�� 諛섎났


	return 0;
}
