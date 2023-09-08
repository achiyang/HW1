#include <stdio.h>

int main() {
	int N, i;
	char C;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf(" %c", &C);

		if (C == 'Y') {
			printf("Four");
			return 0;
		}
	}

	printf("Three");

	return 0;
}