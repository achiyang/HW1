#include <stdio.h>
#include <stdlib.h>

int main() {
	int N;
	char** A;

	scanf("%d", &N);

	getchar();

	A = (char**)malloc(sizeof(char*) * N);

	for (int i = 0; i < N; i++) {
		A[i] = (char*)malloc(sizeof(char) * N);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			A[i][j] = getchar();
		}
		getchar();
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) {
				continue;
			}
			if (A[i][j] == A[j][i]) {
				if (A[i][j] != 'D') {
					printf("incorrect");
					return 0;
				}
			}
			else {
				if (A[i][j] == 'D') {
					printf("incorrect");
					return 0;
				}
			}
		}
	}

	for (int i = 0; i < N; i++) {
		free(A[i]);
	}

	free(A);

	printf("correct");

	return 0;
}