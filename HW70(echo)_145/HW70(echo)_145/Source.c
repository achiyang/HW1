#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int S_len, half_len, cnt = 0;
	char* S;

	scanf("%d", &S_len);

	half_len = S_len / 2;

	S = malloc(S_len + 1);

	scanf("%s", S);

	if (!(S_len & 1) && strncmp(S, &S[half_len], half_len) == 0) {
		printf("%.*s", half_len, S);
		return 0;
	}

	free(S);

	printf("NO");

	return 0;
}