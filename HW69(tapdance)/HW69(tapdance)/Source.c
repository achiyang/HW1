#include <stdio.h>

int main() {
	int len = 0;
	char S[101];

	scanf("%s", S);

	while (S[len] != '\0') {
		if ((len & 1 && S[len] == 'R') || (!(len & 1) && S[len] == 'L')) {
			printf("NO");

			return 0;
		}
		len++;
	}
	
	printf("YES");

	return 0;
}