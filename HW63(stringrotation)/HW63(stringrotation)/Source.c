#include <stdio.h>

int main() {
	char S[101], T[101];
	int i, j, index, count, len = 0;

	scanf("%s %s", S, T);

	while (S[len] != '\0') {
		len++;
	}

	for (i = 0; i < len; i++) {
		count = 0;
		for (j = 0; j < len; j++) {
			index = j + i;
			if (index >= len) {
				index -= len;
			}
			if (S[j] == T[index]) {
				count++;
			}
		}
		if (count >= len) {
			break;
		}
	}

	if (count >= len) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return 0;
}