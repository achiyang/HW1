#include <stdio.h>

int main()
{
	int a, b, c;
	int i = 3;	//ó������ ��� ���� ���� �ٸ��ٰ� �����մϴ�.

	scanf_s("%d %d %d", &a, &b, &c);

	if (a == b)
	{
		i--;
		if (b == c) {
			i--;
		}
	}
	else if (b == c || a == c)
	{
		i--;
	}

	printf("%d", i);
	return 0;
}