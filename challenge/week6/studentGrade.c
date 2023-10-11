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
			printf("%d 학생은 %c의 성적을 받았습니다\n", i + 1, targetGrade);
			// 성적출력
		}
	}
}

int sumScores(int scores[]) {
	int sum = 0;
	// 기본 합을 0이라고 정의
	for (int i = 0; i < STUDENTS; i++) {
	// 학생수만큼 반복
		sum += scores[i];
	// 점수를 다 더한다
	}
	return sum;
	//총합을 저장
}

double averageScores(int scores[]) {
	int sum = 0;
	double average;
	//기본합과 평균을 정의
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	//학생수만큼 반복해서 더해서 총합을 구함
	}
	average = (double)sum / (double)STUDENTS;
	// 평균 = 총합 / 학생수 -> 더블형이라서 각각 더블형으로 나눠줌
	return average;
	//평균을 저장
}

void printRanks(int scores[]) {
	int one;
	int Grade[STUDENTS];
	// 비어있는 변수, 배열 선언
	for(int i= 0; i<STUDENTS; i++){
		one = 0; 
		//변수를 큰 반복한번 할때마다 0으로 초기화
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[i] < scores[j]) {
				// 배열의 i번째 보다 큰 개수구하기
				one++;
				// 점수의 개수를 구하는데 카운트
			}
			Grade[i] = one + 1;
			// 보다큰개수 -> 순위로 저장
		}
	}
	for (int i = 0; i < STUDENTS; i++)
		printf("학생%d의 순위는%d입니다\n", i+1, Grade[i]);
	//학생들의 순위 출력
}

int main() {
	int scores[STUDENTS];
	
	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
		//학생의 성력 입력 -> 학생수만큼 반복
	}
	char ch = getchar();
	// 버퍼 삭제

	char target;
	// 변수 선언
	printf("특정 점수(A, B, C, D, F)를 입력하시오");
	scanf_s("%c", &target, 1);
	// 특정 점수 입력
	classifyStudents(scores, target);
	// 함수 classifyStudents 실행
	int sum = sumScores(scores, target);
	double average = averageScores(scores);
	printf("학생들 점수의 총합은 %d이고 평균값은 %lf 입니다.\n", sum, average);
	// 평균과 총합 출력
	printRanks(scores);
	// 순위 출력
	return 0;

}
