#include<stdio.h>
#define STUDENTS 5


int sumScores(int* scores) { //�ּ��̴ϱ� ������ ������ �ޱ�
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];\
	}
	return sum;
	// �л��� ��ŭ ���ϱ� �ݺ�
}

double averageScores(int* scores) { //�ּ��̴ϱ� ������ ������ �ޱ�
	int sum = sumScores(scores);
	double average = (double)sum / (double)STUDENTS;
	return average;
	// ��հ� ���ϴ� �Լ�
}

void printRanks(int* scores) { //�ּ��̴ϱ� ������ ������ �ޱ�
	int ranks[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) {
		ranks[i] = 1; //�ʱ� ������ 1�� ����
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[j] > scores[i]) {
				ranks[i]++; // ���� ��Һ��� ū �ٸ� ��Ұ� ������ ���� ����
			}
		}
		printf("%d�� �л� ������ %d�Դϴ�. \n", i , ranks[i]);
	}
	// for ���� ���� ranks �迭 ���� <- ����
	
}

void classifyStudents(int *scores, char targetGrade) { //�ּ��̴ϱ� ������ ������ �ޱ�
	printf("�л� ���� �з�:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {
		// i�� 0���� �л�����ŭ �ϳ����ø��鼭 �ݺ�
		if (scores[i] >= 90) {
			grade = 'A';
			// ������ 90 �̻��϶��� A
		}
		else if (scores[i] >= 80) {
			grade = 'B';
			// ������ 80 �̻��϶��� B
		}
		else if (scores[i] >= 70) {
			grade = 'C';
			// ������ 70 �̻��϶��� C
		}
		else if (scores[i] >= 60) {
			grade = 'D';
			// ������ 60 �̻��϶��� D
		}
		else {
			grade = 'F';
			// ������ 60 �̸��϶��� F
		}
		if (targetGrade == grade) {
			printf("%d �л��� %c�� ������ �޾ҽ��ϴ�", i + 1, targetGrade);
			// �������
		}
	}
}

int main(){
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ",i+1);
		scanf_s("%d", &scores[i]);
	}
	// �л��� ��ŭ ���� �Է¹ޱ�
	char ch = getchar();
	// ���� �ʱ�ȭ
	char target;
	printf("Ư�� ����(A,B,C,D,F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1);
	// Ư�� ���� �Է� �ޱ�
	classifyStudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(scores);
	
	printf("�л��� ������ �� ���� %d�̰�, ��� ���� %lf�Դϴ�.\n", sum, average);
	
	printRanks(scores);
	// ������ �Լ� ���� < - ������ ������ Ȱ��
	
	return 0;
}