#include<stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade) {
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
			printf("%d �л��� %c�� ������ �޾ҽ��ϴ�\n", i + 1, targetGrade);
			// �������
		}
	}
}

int sumScores(int scores[]) {
	int sum = 0;
	// �⺻ ���� 0�̶�� ����
	for (int i = 0; i < STUDENTS; i++) {
	// �л�����ŭ �ݺ�
		sum += scores[i];
	// ������ �� ���Ѵ�
	}
	return sum;
	//������ ����
}

double averageScores(int scores[]) {
	int sum = 0;
	double average;
	//�⺻�հ� ����� ����
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	//�л�����ŭ �ݺ��ؼ� ���ؼ� ������ ����
	}
	average = (double)sum / (double)STUDENTS;
	// ��� = ���� / �л��� -> �������̶� ���� ���������� ������
	return average;
	//����� ����
}

void printRanks(int scores[]) {
	int one;
	int Grade[STUDENTS];
	// ����ִ� ����, �迭 ����
	for(int i= 0; i<STUDENTS; i++){
		one = 0; 
		//������ ū �ݺ��ѹ� �Ҷ����� 0���� �ʱ�ȭ
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[i] < scores[j]) {
				// �迭�� i��° ���� ū �������ϱ�
				one++;
				// ������ ������ ���ϴµ� ī��Ʈ
			}
			Grade[i] = one + 1;
			// ����ū���� -> ������ ����
		}
	}
	for (int i = 0; i < STUDENTS; i++)
		printf("�л�%d�� ������%d�Դϴ�\n", i+1, Grade[i]);
	//�л����� ���� ���
}

int main() {
	int scores[STUDENTS];
	
	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
		//�л��� ���� �Է� -> �л�����ŭ �ݺ�
	}
	char ch = getchar();
	// ���� ����

	char target;
	// ���� ����
	printf("Ư�� ����(A, B, C, D, F)�� �Է��Ͻÿ�");
	scanf_s("%c", &target, 1);
	// Ư�� ���� �Է�
	classifyStudents(scores, target);
	// �Լ� classifyStudents ����
	int sum = sumScores(scores, target);
	double average = averageScores(scores);
	printf("�л��� ������ ������ %d�̰� ��հ��� %lf �Դϴ�.\n", sum, average);
	// ��հ� ���� ���
	printRanks(scores);
	// ���� ���
	return 0;

}
