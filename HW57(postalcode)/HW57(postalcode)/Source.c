#include <stdio.h>

int main() {
	char S[12];
	int A, B;

	scanf("%d %d %s", &A, &B, S);

	if (S[A] == '-' && S[A + B + 1] == '\0') {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return 0;
}