#include <stdio.h>
#include <stdlib.h>

struct Student {
  int Scores;
  char name[20];
};
// 학생 구조체 선언 (점수 + 이름)

int sumScores(struct Student* student, int studentCount) {
  int sum = 0;
  for (int i = 0; i < studentCount; i++) {
    sum += student[i].Scores;  // Scores 는 배열이 아니라서 Scores[i] 불필요
  }
  return sum;
}
// 점수 총 합 : 학생 구조체 학생들의 점수만 더하기

double averageScores(struct Student* student, int studentCount) {
  int sum = sumScores(student, studentCount);
  double average = (double)sum / studentCount;
  return average;
}
// 평균 : (점수 총 합)/ 학생수

void printRanks(struct Student* students, int studentCount) {
  int* ranks = (int*)malloc(studentCount * sizeof(int));
  // 동적 메모리 할당
  for (int i = 0; i < studentCount; i++) {
    ranks[i] = 1;
    for (int j = 0; j < studentCount; j++) {
      if (students[j].Scores > students[i].Scores) {
        ranks[i]++;
      }
    }
    printf("%s 학생 순위는 %d입니다. \n", students[i].name, ranks[i]);
  }

  free(ranks);
  // 메모리 해제
}

void classifyStudents(struct Student* students, int studentCount,
                      char targetGrade) {
  printf("학생 성적 분류:\n");
  char grade = ' ';

  for (int i = 0; i < studentCount; i++) {
    if (students[i].Scores >= 90) {
      grade = 'A';
    } else if (students[i].Scores >= 80) {
      grade = 'B';
    } else if (students[i].Scores >= 70) {
      grade = 'C';
    } else if (students[i].Scores >= 60) {
      grade = 'D';
    } else {
      grade = 'F';
    }
    if (targetGrade == grade) {
      printf("%s 학생은 %c의 성적을 받았습니다.\n", students[i].name,
             targetGrade);
      // 입력한 targetGrade 와 일치하는 성적을 받은 학생 출력
    }
  }
}

int main() {
  int studentCount;

  printf("학생 수를 입력하세요: ");
  scanf_s("%d", &studentCount);
  // 학생수 입력

  struct Student* students =
      (struct Student*)malloc(studentCount * sizeof(struct Student));
  // 동적 메모리 할당

  for (int i = 0; i < studentCount; i++) {
    printf("학생 %d의 이름을 입력하세요: ", i + 1);
    scanf_s("%s", students[i].name, (unsigned)sizeof(students[i].name));

    printf("학생 %s의 성적을 입력하세요: ", students[i].name);
    scanf_s("%d", &students[i].Scores);
  }
  // 학생 수 만큼 학생 정보 입력

  char target;
  printf("특정 점수(A,B,C,D,F)를 입력하시오: ");
  scanf_s(" %c", &target, 1);

  classifyStudents(students, studentCount, target);

  int sum = sumScores(&students[0], studentCount);
  double average = averageScores(&students[0], studentCount);
  // 각각의 함수 실행

  printf("학생들 점수의 총 합은 %d이고, 평균 값은 %lf입니다.\n", sum, average);

  printRanks(students, studentCount);

  free(students);
  // 메모리 해제
  return 0;
}