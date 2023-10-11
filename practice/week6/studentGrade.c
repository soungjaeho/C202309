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
			printf("%d �л��� %c�� ������ �޾ҽ��ϴ�", i + 1, targetGrade);
			// �������
		}
	}
}

int main() {
	int scores[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) {
		//�ݺ����� �л�����ŭ �ݺ�
		printf("�л��� %d ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
		//�л��� ������ �Է¹���
	}
	char ch = getchar();
	// ���� �ӽ� �����Լ�, ���� ����
	char target;

	printf("Ư�� ����(A, B, C, D, F)�� �Է��Ͻÿ�");
	scanf_s("%c", &target, 1);
	// �����Է¹���
	classifyStudents(scores, target);
	// �����س��� �Լ�����
	return 0;
}
