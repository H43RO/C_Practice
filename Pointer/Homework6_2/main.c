//주어진 세 실수에 대해 2차방정식의 근을 구하기

#include <stdio.h>
#include <math.h>

double getrootp(double, double, double);
double getrootm(double *, double *, double *);

int main(void) {
	double a = 1, b = 0, c = -25;

	printf("%+.2f %.2f", getrootp(a, b, c), getrootm(&a, &b, &c));
	return 0;
}

double getrootp(double p, double q, double r) {
	return (-q + sqrt(q * q - 4 * p * r)) / (2 * p);
}

double getrootm(double *p, double *q, double *r) { //변수의 주소를 인자로 받는 포인터 매개변수
	return (-*q - sqrt(*q * *q - 4 * *p * *r)) / (2 * *p);
}
