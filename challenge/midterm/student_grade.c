#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

void printStudentResults(double studentScores[][SUBJECTS],char studentNames[][CHARNUM]) {
	for (int i = 0; i < STUDENTS; i++) {
		double average;
		double sum = 0.0;
		for (int j = 0; j < SUBJECTS; j++) {
			sum += studentScores[i][j];
			average = sum / SUBJECTS;
		}
		printf("\t%s�� ��� ���� : %.2lf\n", studentNames[i], average);
	}
	printf("--------------------\n");
	printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");

}

void printSubjectResults(double studentScores[][SUBJECTS], char subjectNames[][CHARNUM]) {
	for (int i = 0; i < SUBJECTS; i++) {
		double averageScores;
		double sum = 0.0;
		for (int j = 0; j < STUDENTS; j++) {
			sum += studentScores[j][i];
			averageScores = sum / STUDENTS;
		}
		printf("\t%s�� ��� ������ %.2lf �Դϴ�.  : \n", subjectNames[i], averageScores);


	}
}

int main() {
	char subjectNames[SUBJECTS][CHARNUM] = { "����", "�߰����", "�⸻���" };
	char studentNames[STUDENTS][CHARNUM] = { "" }; // �л� �̸��� ����� �迭
	double studentScores[STUDENTS][SUBJECTS] = { 0.0 }; // �л��� ���� �� ������ ������ ����� �迭
	printf("�л� %d���� �̸��� �Է��� �����մϴ�. \n", STUDENTS);
	// TODO 1.1: �л� �̸��� �Է¹޴� �ڵ� ��� �ۼ�
	for (int i = 0; i < STUDENTS; i++) {
		printf("\t%d��° �л��� �̸��� �Է��ϼ���.: ", i+1);
		scanf_s("%s", studentNames[i], (int)sizeof(studentNames[i]));

	}
	// �Էµ� �л� �̸��� �� ����Ǿ����� Ȯ���ϴ� �ڵ� ���
	printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
	printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
	for (int i = 0; i < STUDENTS; i++) {
		printf("%s", studentNames[i]);
		if (i != STUDENTS - 1) {
			printf(", ");
		}
	}
	printf("\n");
	printf("--------------------\n");
	printf("�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);


	// TODO 1.2: �л����� ���� �� ������ �Է¹޴� �ڵ� ��� �ۼ�
	for (int i = 0; i < STUDENTS; i++) {
		printf("\t%s�� ���� : ",studentNames[i], (int)sizeof(studentNames[i]));
		scanf_s("%lf %lf %lf", &studentScores[i][0],&studentScores[i][1],&studentScores[i][2]);
			//������ ���� -> %lf %lf %lf

	}

	printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
	printf("--------------------\n");
	printf("�л� �� ������ ������ �����ϴ� \n");

	printStudentResults(studentScores, studentNames);

	printSubjectResults(studentScores, subjectNames);


	printf("���α׷��� �����մϴ�. ");
	return 0;
}