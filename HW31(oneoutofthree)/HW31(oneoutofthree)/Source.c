#include <stdio.h>

int main() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("%d", a == b ? c : b == c ? a : b);

	return 0;
}