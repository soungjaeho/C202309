#include<stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade) {
	printf("학생 성적 분류:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {
		// i를 0부터 학생수만큼 하나씩올리면서 반복
		if (scores[i] >= 90) {
			grade = 'A';
		// 점수가 90 이상일때는 A
		}
		else if (scores[i] >= 80) {
			grade = 'B';
			// 점수가 80 이상일때는 B
		}
		else if (scores[i] >= 70) {
			grade = 'C';
			// 점수가 70 이상일때는 C
		}
		else if (scores[i] >= 60) {
			grade = 'D';
			// 점수가 60 이상일때는 D
		}
		else {
			grade = 'F';
			// 점수가 60 미만일때는 F
		}
		if (targetGrade == grade) {
			printf("%d 학생은 %c의 성적을 받았습니다", i + 1, targetGrade);
			// 성적출력
		}
	}
}

int main() {
	int scores[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) {
		//반복문을 학생수만큼 반복
		printf("학생의 %d 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
		//학생의 성력을 입력받음
	}
	char ch = getchar();
	// 버퍼 임시 저장함수, 엔터 삭제
	char target;

	printf("특정 점수(A, B, C, D, F)를 입력하시오");
	scanf_s("%c", &target, 1);
	// 점수입력받음
	classifyStudents(scores, target);
	// 정의해놓은 함수실행
	return 0;
}
