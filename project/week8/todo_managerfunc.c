#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 할 일 목록을 저장하기 위한 2차원 배열
int taskCount = 0; // 할 일의 수를 세어주는 변수(10달성시 종료)


void addTask(char tasks[]) {
	printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
	scanf_s("%s", tasks, (int)sizeof(tasks));
	// 할일을 입력받기
	printf("할 일 ""%s""가 저장되었습니다\n\n", tasks);
}

void delTask(int delIndex, int taskCount) {
	printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);
	// 입력받은 배열에 대한 값을 출력(삭제하려는 값)
	strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");
	// 문자열 복사 함수로 삭제(입력받은 위치에 ""을 복사 )
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
		//할 일 삭제후 뒤쪽에서 부터 한칸씩 땡겨오기
	}
}

void printfTask(int taskCount) {
	for (int i = 0; i < taskCount; i++) {
		printf("%d. %s \n", i + 1, tasks[i]);
	// 할 일을 차례대로 출력(주어진 할 일의 개수 만큼 반복)
	}
	printf("\n");
}

int main() {

	printf("TODO 리스트 시작! \n");

	while (1) {
		int choice = -1; // 사용자 입력 메뉴를 저장하기 위한 변수 -> 선택지에 -1이 없기 때문에 나중에 오류 확인가능

		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");;
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5.할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		//시작 화면 출력
		scanf_s("%d", &choice);
		//시작 화면에서 선택지 입력 받기
		int terminate = 0; // 종료를 위한 flag -> 해당 변수를 활용하여 종료하기 위함
		int delIndex = -1;  // 할 일 삭제를 위한 index 저장 변수 -> 0부터 인데 -1로 초기화시켜놓은 이유: 정상 작동확인 하기 위함
		int changeIndex = -1; // 할 일 수정을 위한 index 저장 변수 -> 위와 동일한 이유
		char ch; // 할 일 수정시 버퍼를 받기 위한 문자 변수
		// 입력에 따른 기능 수행
		switch (choice) {
		case 1:
			addTask(tasks[taskCount]);
			// 함수 실행
			taskCount++;
			//할 일 추가이므로 할 일 개수 1 증가
			break;
		case 2:
			// 할 일 삭제하는 코드 블록 
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &delIndex);
			// 삭제하려는 할 일(인덱스)의 번호를 입력받음
			if (delIndex > taskCount || delIndex <= 0) {
				printf("삭제 범위가 벗어났습니다.\n");
				//입력 오류 차단 -> 없는 값 입력 차단
			}
			else {
				delTask(delIndex, taskCount);
				// 함수 실행
				taskCount -= 1;
				// 할 일을 삭제 하였으니까 할 일 개수 삭제
			}
			break;
		case 3:
			printf("할 일 목록\n");
			printfTask(taskCount);
			// 함수 실행
			break;
		case 4:
			terminate = 1;
			break;
			// 종료 실행

		case 5:
			printf(" 수정하려는 할 일의 번호를 입력해주세요. (1부터 시작) : ");
			ch = getchar();
			// 버퍼 삭제
			scanf_s("%d", &changeIndex);
			// 삭제하려는 값 입력받음
			if (changeIndex > taskCount || changeIndex <= 0) {
				printf("처음부터 다시 시작해주세요");
				// 없는 값 입력 차단
			}
			else {
				printf("%d: 할 일을 수정합니다.\n ", changeIndex);
				strcpy_s(tasks[changeIndex - 1], sizeof(tasks[changeIndex - 1]), " ");
				// 복사 함수로 삭제
				printf("수정 내용을 입력해주세요.\n");
				ch = getchar();
				scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1]));
				// 비어있는 값에 입력받은 값 저장
			}
			// 할 일 수정입력 인덱스 입력받기(1~10입력후 변경 -> 실제 인덱스 = 입력 받은 인덱스 -1 )
		default:
			printf("잘못된 선택입니다. 다시 선택하세요.\n");
		}

		if (terminate == 1) {
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			//종료 선택시 프로그램 종료
			break;
		}
		if (taskCount == 10) {
			printf("할일이 다 찼습니다. 프로그램을 종료합니다.\n");
			//할 일의 개수 10달성시 프로그램 종료
			break;
		}

	}
}
