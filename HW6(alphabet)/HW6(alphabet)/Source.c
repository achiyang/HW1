#include <stdio.h>

int main() {
	char x;
	int i = 97;

	scanf_s("%c", &x);

	if (x >= 97 && x <= 122) {
		for (; x >= 'a'; x--) {
			printf("%c ", i++);
		}
		printf("\n");
	}
	else {
		printf("Error");
	}
	return 0;
}