#include <stdio.h>

int main() {
	int A, B, sum = 0;
	char op;

	scanf_s("%d %c %d", &A, &op, sizeof(op), &B);

	switch (op) {
	case '+':
		sum = A + B;
		break;
	case '-':
		sum = A - B;
		break;
	}

	printf("%d\n", sum);
	return 0;
}