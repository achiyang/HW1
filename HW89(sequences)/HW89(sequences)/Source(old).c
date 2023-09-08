#include <stdio.h>
#include <stdlib.h>

void print_sequences(int depth, int start, int* bucket, int N, int M) {
	if (depth == N) {
		for (int i = 0; i < N; i++) {
			printf("%d ", bucket[i]);
		}
		printf("\n");
		return;
	}
	for (int i = start; i <= M - (N - depth - 1); i++) {
		bucket[depth] = i;
		print_sequences(depth + 1, i + 1, bucket, N, M);
	}
}

int main() {
	int* bucket;
	int N, M;

	scanf("%d %d", &N, &M);

	bucket = (int*)malloc(sizeof(int) * M);

	print_sequences(0, 1, bucket, N, M);

	free(bucket);

	return 0;
}