#include <stdio.h>

int main() {
	int num, i;

	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) {
		if (i % 3 == 0) continue;
		printf("%d ", i);
	}
	return 0;
}