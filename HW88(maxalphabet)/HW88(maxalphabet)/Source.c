#include <stdio.h>

int main() {
	int alphabet[26] = { 0 };
	char w[257];

	scanf("%s", w);

	for (int i = 0; w[i] != '\0'; i++) {
		if (w[i] >= 'a' && w[i] <= 'z') {
			alphabet[w[i] - 'a']++;
		}
		else if (w[i] >= 'A' && w[i] <= 'Z') {
			alphabet[w[i] - 'A']++;
		}
	}

	int* max = &alphabet[0];

	for (int i = 1; i < 26; i++) {
		if (alphabet[i] != 0) {
			if (*max == alphabet[i]) {
				printf("?");
				return 0;
			}
			else if (*max < alphabet[i]) {
				max = &alphabet[i];
			}
		}
	}

	printf("%c", (max - alphabet) + 'A');

	return 0;
}