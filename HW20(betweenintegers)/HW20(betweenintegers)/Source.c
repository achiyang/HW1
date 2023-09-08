#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	if (num3 >= num1 && num3 <= num2) {
		printf("YES");
	}
	else if (num3 <= num1 && num3 >= num2) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
}