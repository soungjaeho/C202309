#include<stdio.h>
#define STUDENTS 5


int sumScores(int* scores) { //주소이니까 포인터 변수로 받기
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];\
	}
	return sum;
	// 학생수 만큼 더하기 반복
}

double averageScores(int* scores) { //주소이니까 포인터 변수로 받기
	int sum = sumScores(scores);
	double average = (double)sum / (double)STUDENTS;
	return average;
	// 평균갑 구하는 함수
}

void printRanks(int* scores) { //주소이니까 포인터 변수로 받기
	int ranks[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) {
		ranks[i] = 1; //초기 순위를 1로 설정
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[j] > scores[i]) {
				ranks[i]++; // 현재 요소보다 큰 다른 요소가 있으면 순위 증가
			}
		}
		printf("%d의 학생 순위는 %d입니다. \n", i , ranks[i]);
	}
	// for 문을 통해 ranks 배열 생성 <- 순위
	
}

void classifyStudents(int *scores, char targetGrade) { //주소이니까 포인터 변수로 받기
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

int main(){
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ",i+1);
		scanf_s("%d", &scores[i]);
	}
	// 학생수 만큼 성적 입력받기
	char ch = getchar();
	// 버퍼 초기화
	char target;
	printf("특정 점수(A,B,C,D,F)를 입력하시오: ");
	scanf_s("%c", &target, 1);
	// 특벙 점수 입력 받기
	classifyStudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(scores);
	
	printf("학생들 점수의 총 합은 %d이고, 평균 값은 %lf입니다.\n", sum, average);
	
	printRanks(scores);
	// 각각의 함수 실행 < - 포인터 변수를 활용
	
	return 0;
}