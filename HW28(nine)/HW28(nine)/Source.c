#include <stdio.h>

int main() {
	int num;

	scanf("%d", &num);

	printf("%s", (num / 10 == 9 || num % 10 == 9) ? "YES" : "NO");

	return 0;
}