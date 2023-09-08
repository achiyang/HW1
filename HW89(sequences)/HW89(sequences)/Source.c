#include <stdio.h>
#include <stdlib.h>

int N, M;

void print_sequences(int* sequence, int num, int depth) {
	if (depth == N) {
		for (int i = 0; i < N; i++) {
			printf("%d ", sequence[i]);
		}
		printf("\n");
		return;
	}
	for (int i = num; i <= M - N + 1 + depth; i++) {
		sequence[depth] = i;
		print_sequences(sequence, i + 1, depth + 1);
	}
	return;
}

int main() {
	int* sequence;

	scanf("%d %d", &N, &M);

	sequence = (int*)malloc(sizeof(int) * N);

	print_sequences(sequence, 1, 0);

	free(sequence);

	return 0;
}