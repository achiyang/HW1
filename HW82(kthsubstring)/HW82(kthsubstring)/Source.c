#include <stdio.h>
#include <string.h>

int main() {
	int K, len;
	char S[5001];
	char sub_S[5][5001];

	for (int i = 0; i < 5; i++) {
		sub_S[i][0] = '\0';
	}

	scanf("%d %s", &K, S);

	len = strlen(S);

	for (int i = 0; i < len; i++) {
		for (int j = i; j < len; j++) {
			int index = 0;
			char temp[5001];
			for (int k = i; k <= j; k++) {
				temp[index++] = S[k];
			}
			temp[index] = '\0';
			for (int k = 0; k < 5; k++) {
				if (sub_S[k][0] == '\0') {
					strcpy(sub_S[k], temp);
					break;
				}
				else if (strcmp(temp, sub_S[k]) == 0) {
					break;
				}
				else if (strcmp(temp, sub_S[k]) < 0) {
					for (int l = 4; l > k; l--) {
						strcpy(sub_S[l], sub_S[l - 1]);
					}
					strcpy(sub_S[k], temp);
					break;
				}
			}
		}
	}

	printf("%s", &sub_S[K - 1]);

	return 0;
}