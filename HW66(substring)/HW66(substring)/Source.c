#include <stdio.h>

int main() {
	char S[11];
	int len = 0, temp = 0, sub_len = 0, i;

	scanf("%s", S);

	while (S[len] != '\0') {
		len++;
	}

	for (i = 0; i < len; i++) {
		if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'W') {
			temp++;
			if (temp > sub_len) {
				sub_len = temp;
			}
		}
		else {
			temp = 0;
		}
	}

	printf("%d", sub_len);

	return 0;
}