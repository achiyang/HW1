#include <stdio.h>
#include <string.h>
#define MAX_LEN 26

int main() {
	char S[MAX_LEN + 1];
	int i, len, index;
	int alphabet[26] = { 0 };

	scanf("%s", S);

	len = strlen(S);

	for (i = 0; i < len; i++) {
		index = S[i] - 97;
		alphabet[index]++;
		if (alphabet[index] > 1) {
			printf("NO");
			return 0;
		}
	}

	printf("YES");

	return 0;
}	