#include <stdio.h>
#define SIZE 3

int isfirst(const char* str1, const char* str2);

int main() {
	char S[SIZE][4];
	char* sp[SIZE];
	int i, j;

	for (i = 0; i < SIZE; i++) {
		scanf("%s", S[i]);
		sp[i] = S[i];
	}

	for (i = 0; i < SIZE - 1; i++) {
		for (j = i + 1; j < SIZE; j++) {
			if (isfirst(sp[i], sp[j])) {
				char* temp = sp[i];
				sp[i] = sp[j];
				sp[j] = temp;
			}
		}
	}

	for (i = 0; i < SIZE; i++) {
		printf("%s ", sp[i]);
	}

	return 0;
}

int isfirst(const char* str1, const char* str2) {
	int i = 0;;

	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0') {
		i++;
	}
	
	return str1[i] > str2[i];
}