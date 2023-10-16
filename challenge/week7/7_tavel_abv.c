#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();
int getSum(int numArray[]);
double getAverage(int numArray[]);
void printFamousCity(double dayArray[]);

int main() {

	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
		//����ڷκ��� �����̸� �Է¹ޱ�
	}

	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
		//����ڷκ��� ����̸� �Է¹ޱ�
	}

	calculateTravelDays();
	//�Լ� ȣ��

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	//�� ���ÿ��� �� ����� ���� �� �� �Է¹ޱ� 
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ���%s�� ���� �� ���� �Է��ϼ���", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	double averageDays[NUMCITY]
	//�� ���ú� �� �� �� �� ��� �� �� ��� �� ���
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i], NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);

		printf("���� %s���� ���� �� �ϼ�: %d, ��� �� ��: %.2f\n", cities[i], totalDay, averageDay);
		averageDays[i] = averageDay;
	}
	printFamousCity(averageDays,NUMCITY);
}
int getSum(int numArray[], int length) {
	int totalDays = 0;
	// ���� = 0���� ����
	for (int i = 0; i < length; i++) {
		totalDays += numArray[i];
	//��� �ϼ��� �����ش� -> ����
	}
	return totalDays;
	//���� ��ȯ
}
double getAverage(int numArray[], int length){
	int totalDays = 0;
	for (int i = 0; i < length; i++) {
		totalDays += numArray[i];
		// ������ ���Ѵ�
	}
	double averageDays = (double)totalDays / length;
	// ������ �ϼ��� ������.
	return agerageDays;
	//��հ� ��ȯ
}
void printFamousCity(double dayArray[], int length) {
	double maxDay = 0;
	int maxDayIndex = 0;
	//���� ����(�ִٰ�Ȯ���� ����)
	for (int i = 0; i < length; i++) {
		if (dayArray[i] > maxDay) {
			maxDay = dayArray[i];
			// �ִٰ����� ������ maxDay������
			maxDayIndex = i;
		}
	}
	printf("����� �������� ���� �α��־��� ���ô� %s �Դϴ�. (��� �ӹ��� : %.2f)\n", cities[maxDayIndex], maxDay);
//����ϰ� �ִ� ���ù�ȯ
}