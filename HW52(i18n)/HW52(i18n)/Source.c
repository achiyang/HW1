#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

int main() {
	char S[100 + 1];
	int len;

	scanf("%s", S);

	len = strlen(S);

	printf("%c%d%c", S[0], len - 2, S[len - 1]);

	return 0;
}