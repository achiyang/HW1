#include <stdio.h>

int main() {
	int a, b;
	float p;

	scanf("%d %d", &a, &b);

	p = (a + b) / 2.0;

	if (p - (int)p == 0) {
		printf("%d", (int)p);
	}
	else {
		printf("%d", (int)p + 1);
	}

	return 0;
}