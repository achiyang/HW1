#include <stdio.h>

int main() {
	char S[11];
	int i, count_C = 0, len = 0, count = 0;
	
	scanf("%s", S);

	while (S[len] != '\0') {
		len++;
	}

	if (S[0] == 'A') {
		for (i = 2; i < len - 1; i++) {
			if (S[i] == 'C') {
				count_C++;
			}
		}
		if (count_C == 1) {
			for (i = 0; i < len; i++) {
				if ((S[i] >= 97 && S[i] <= 122) || S[i] == 'A' || S[i] == 'C') {
					count++;
				}
			}
		}
	}

	if (count == len) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return 0;
}