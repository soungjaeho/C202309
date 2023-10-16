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

	printf("%d개의 도시명을 차례대로 입력해주세요. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
		//사용자로부터 도시이름 입력받기
	}

	printf("%d개의 여행자 이름을 차례대로 입력해주세요. \n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
		//사용자로부터 사람이름 입력받기
	}

	calculateTravelDays();
	//함수 호출

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	//각 도시에서 각 사람이 보낸 일 수 입력받기 
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시 %s에서 사람%s가 보낸 일 수를 입력하세요", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	double averageDays[NUMCITY]
	//각 도시별 총 일 수 및 평균 일 수 계산 및 출력
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i], NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);

		printf("도시 %s에서 보낸 총 일수: %d, 평균 일 수: %.2f\n", cities[i], totalDay, averageDay);
		averageDays[i] = averageDay;
	}
	printFamousCity(averageDays,NUMCITY);
}
int getSum(int numArray[], int length) {
	int totalDays = 0;
	// 총합 = 0으로 지정
	for (int i = 0; i < length; i++) {
		totalDays += numArray[i];
	//모든 일수를 더해준다 -> 총합
	}
	return totalDays;
	//총합 반환
}
double getAverage(int numArray[], int length){
	int totalDays = 0;
	for (int i = 0; i < length; i++) {
		totalDays += numArray[i];
		// 총합을 구한다
	}
	double averageDays = (double)totalDays / length;
	// 총합을 일수로 나눈다.
	return agerageDays;
	//평균값 반환
}
void printFamousCity(double dayArray[], int length) {
	double maxDay = 0;
	int maxDayIndex = 0;
	//변수 지정(최다값확인을 위해)
	for (int i = 0; i < length; i++) {
		if (dayArray[i] > maxDay) {
			maxDay = dayArray[i];
			// 최다값보다 많으면 maxDay로지정
			maxDayIndex = i;
		}
	}
	printf("평균일 기준으로 가장 인기있었던 도시는 %s 입니다. (평균 머문일 : %.2f)\n", cities[maxDayIndex], maxDay);
//평균일과 최다 도시반환
}