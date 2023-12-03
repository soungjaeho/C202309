#include <stdio.h>
#include <stdlib.h>

struct Student {
  int Scores;
  char name[20];
};
// �л� ����ü ���� (���� + �̸�)

int sumScores(struct Student* student, int studentCount) {
  int sum = 0;
  for (int i = 0; i < studentCount; i++) {
    sum += student[i].Scores;  // Scores �� �迭�� �ƴ϶� Scores[i] ���ʿ�
  }
  return sum;
}
// ���� �� �� : �л� ����ü �л����� ������ ���ϱ�

double averageScores(struct Student* student, int studentCount) {
  int sum = sumScores(student, studentCount);
  double average = (double)sum / studentCount;
  return average;
}
// ��� : (���� �� ��)/ �л���

void printRanks(struct Student* students, int studentCount) {
  int* ranks = (int*)malloc(studentCount * sizeof(int));
  // ���� �޸� �Ҵ�
  for (int i = 0; i < studentCount; i++) {
    ranks[i] = 1;
    for (int j = 0; j < studentCount; j++) {
      if (students[j].Scores > students[i].Scores) {
        ranks[i]++;
      }
    }
    printf("%s �л� ������ %d�Դϴ�. \n", students[i].name, ranks[i]);
  }

  free(ranks);
  // �޸� ����
}

void classifyStudents(struct Student* students, int studentCount,
                      char targetGrade) {
  printf("�л� ���� �з�:\n");
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
      printf("%s �л��� %c�� ������ �޾ҽ��ϴ�.\n", students[i].name,
             targetGrade);
      // �Է��� targetGrade �� ��ġ�ϴ� ������ ���� �л� ���
    }
  }
}

int main() {
  int studentCount;

  printf("�л� ���� �Է��ϼ���: ");
  scanf_s("%d", &studentCount);
  // �л��� �Է�

  struct Student* students =
      (struct Student*)malloc(studentCount * sizeof(struct Student));
  // ���� �޸� �Ҵ�

  for (int i = 0; i < studentCount; i++) {
    printf("�л� %d�� �̸��� �Է��ϼ���: ", i + 1);
    scanf_s("%s", students[i].name, (unsigned)sizeof(students[i].name));

    printf("�л� %s�� ������ �Է��ϼ���: ", students[i].name);
    scanf_s("%d", &students[i].Scores);
  }
  // �л� �� ��ŭ �л� ���� �Է�

  char target;
  printf("Ư�� ����(A,B,C,D,F)�� �Է��Ͻÿ�: ");
  scanf_s(" %c", &target, 1);

  classifyStudents(students, studentCount, target);

  int sum = sumScores(&students[0], studentCount);
  double average = averageScores(&students[0], studentCount);
  // ������ �Լ� ����

  printf("�л��� ������ �� ���� %d�̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

  printRanks(students, studentCount);

  free(students);
  // �޸� ����
  return 0;
}