#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int K, len;
	char S[5001];
	char* temp;
	char** sub_S;

	scanf("%d %s", &K, S);

	len = strlen(S);

	sub_S = (char**)malloc(sizeof(char*) * K);

	for (int i = 0; i < K; i++) {
		sub_S[i] = (char*)malloc(sizeof(char) * len + 1);
		sub_S[i][0] = '\0';
	}

	temp = (char*)malloc(sizeof(char) * len + 1);

	for (int i = 0; i < len; i++) {
		for (int j = 1; j <= len - i; j++) {
			strcpy(temp, S + i, j);
			temp[j] = '\0';

			for (int k = 0; k < K; k++) {
				if (sub_S[k][0] == '\0') {
					strcpy(sub_S[k], temp);
					break;
				}
				else if (!strcmp(sub_S[k], temp)) {
					break;
				}
				else if (strcmp(sub_S[k], temp) > 0) {
					for (int l = K - 2; l >= k; l--) {
						strcpy(sub_S[l + 1], sub_S[l]);
					}
					strcpy(sub_S[k], temp);
					break;
				}
			}
		}
	}
	free(temp);

	printf("%s", sub_S[K - 1]);


	for (int i = 0; i < K; i++) {
		free(sub_S[i]);
	}
	free(sub_S);

	return 0;
}