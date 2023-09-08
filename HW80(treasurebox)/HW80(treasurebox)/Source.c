#include <stdio.h>

int main() {
	char S[51], T[51];
	int i, j, last = 0;

	scanf("%s %s", S, T);

	for (i = 0; S[i] != '\0'; i++) {
		if (S[i] == T[0] || S[i] == '?') {
			for (j = 1; T[j] != '\0'; j++) {
				if (T[j] != S[i + j] && S[i + j] != '?') {
					break;
				}
			}

			if (T[j] == '\0') {
				last = i;
			}
		}
	}

	for (j = 0; T[j] != '\0'; j++) {
		S[last + j] = T[j];
	}

	for (j = 0; S[j] != '\0'; j++) {
		if (S[j] == '?') {
			S[j] = 'a';
		}
	}

	if (!last) {
		printf("UNRESTORABLE\n");
	}
	else {
		printf("%s", S);
	}
	
	return 0;
}