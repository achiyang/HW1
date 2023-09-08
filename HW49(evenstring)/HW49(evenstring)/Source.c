#include <stdio.h>
#include <string.h>
#define MAX_LEN 200

int main() {
	char S[MAX_LEN + 1] = "\0";
	int half_len, i = 0;

	scanf("%s", S);

	half_len = (strlen(S) - 1) / 2;

	while (i < half_len) {
		if (S[i] != S[i + half_len]) {
			i = 0;
			half_len--;
			continue;
		}
		i++;
	}
	
	printf("%d", half_len * 2);

	return 0;
}