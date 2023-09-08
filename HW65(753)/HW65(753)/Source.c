#include <stdio.h>

int main() {
	char S[11];
	int i, j, temp, sub_S = 999, len = 0;

	scanf("%s", S);

	while (S[len] != '\0') {
		len++;
	}

	for (i = 0; i < len - 2; i++) {
		temp = 0;
		for (j = 0; j < 3; j++) {
			temp *= 10;
			temp += S[i + j] - '0';
		}
		temp -= 753;
		if (temp < 0) {
			temp = 0 - temp;
		}
		if (temp < sub_S) {
			sub_S = temp;
		}
	}
	
	printf("%d", sub_S);

	return 0;
}