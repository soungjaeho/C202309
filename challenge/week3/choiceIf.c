#include<stdio.h>

int main(void) {
	
	int choice;
	//변수 선언

	printf("1. 파일 저장:\n");
	printf("2. 저장 없이 닫기:\n");
	printf("3. 종료:\n");
	//  안내문구 출력
	scanf_s("%d", &choice);
	// 입력값 입력
	if (choice == 1)
		printf("파일을 저장합니다.");
	// 입력받은 값이 1인지 확인후 1에 해당하는값 출력
	else if (choice == 2)
		printf("저장없이 파일을 닫습니다.");
	// 입력받은 값이 2인지 확인후 2에 해당하는값 출력
	else if (choice == 3)
		printf("종료합니다.");
	// 입력받은 값이 3인지 확인후 3에 해당하는값 출력
	else
		printf("잘못입력하셨습니다.");
	// 입력받은 값이 1~3이 아닐경우 오류메시지 출력

	return 0; 
}