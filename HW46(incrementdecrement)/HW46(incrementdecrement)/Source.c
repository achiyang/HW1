#include <stdio.h>

int main() {
	int x = 0, max_x = 0, len = 0, i;
	char S[11];

	scanf("%s", S);

	while (S[len] != '\0') {
		len++;
	}

	for (i = 0; i < len; i++) {
		if (S[i] == 'I') {
			x++;
			if (max_x < x) {
				max_x = x;
			}
		}
		else if (S[i] == 'D') {
			x--;
		}
	}

	printf("%d", max_x);

	return 0;
}