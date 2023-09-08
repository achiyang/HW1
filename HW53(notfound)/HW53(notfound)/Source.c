#include <stdio.h>
#include <string.h>

int main() {
	char S[101];
	int alphabet[26] = { 0 };
	int i, len, index;
	
	scanf("%s", S);

	len = strlen(S);

	for (i = 0; i < len; i++) {
		index = S[i] - 97;
		alphabet[index]++;
	}

	for (i = 0; i < 26; i++) {
		if (alphabet[i] == 0) {
			break;
		}
	}
	
	if (i < 26) {
		printf("%c", i + 97);
	}
	else {
		printf("none");
	}

	return 0;
}