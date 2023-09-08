#include <stdio.h>

int main() {
	char x, y;

	scanf("%c %c", &x, &y);

	printf("%c", x > y ? '>' : x < y ? '<' : '=');

	return 0;
}