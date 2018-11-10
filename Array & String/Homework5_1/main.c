//실수 요소 10개를 가진 배열의 평균과 표준편차 출력

#include <stdio.h>
#include <math.h>
#define N 10

int main(void) {
	int i;
	double avg, std;
	double point[N] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };

	avg = std = 0;

	for (i = 0; i < N; i++) {
		avg += (point[i] / N);
	}

	for (i = 0; i < N; i++) {
		std += (point[i] - avg) * (point[i] - avg);
	}

	std = sqrt(std / N);

	printf("Avg is %.2f\n", avg);
	printf("Std is %.2f.", std);

	return 0;
}
