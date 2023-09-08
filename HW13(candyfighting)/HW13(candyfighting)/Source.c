#include <stdio.h>

int main() {
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);

	if (a == b + c || b == a + c || c == a + b) {
		printf("예\n");
	}
	else {
		printf("아니오\n");
	}
	return 0;
}