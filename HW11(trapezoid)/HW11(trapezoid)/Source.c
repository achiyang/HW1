#include <stdio.h>

int main() {
	int a, b, h, area;

	scanf_s("%d %d %d", &a, &b, &h);

	area = (a + b) * h / 2;

	printf("%d", area);
	return 0;
}