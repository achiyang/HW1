#include <stdio.h>

int main() {
	int n = 0;
	int b[101] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &b[i]);

		for (int j = 0; j < (i + 1) / 2; j++) {
			int temp;
			temp = b[j];
			b[j] = b[i - j];
			b[i - j] = temp;
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", b[i]);
	}

	return 0;
}