#include <stdio.h>
#define M 3
#define N 2

void multiply_matrix(int[][N], int[][M], int[][M]);

int main(void) {
	int A[M][N] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
	int B[N][M] = { { 1, 0, 0 }, { 0, 0, 1 } };
	int C[M][M] = { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } };
	int i, j;

	multiply_matrix(A, B, C);
	for (i = 0; i < M; i++) {
		for (j = 0; j < M; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void multiply_matrix(int a[][N], int b[][M], int c[][M]) {
	int i, j, k;

	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			for(k=0; k<M; k++){
				c[i][k] += a[i][j] * b[j][k];
			}
		}
	}

}
