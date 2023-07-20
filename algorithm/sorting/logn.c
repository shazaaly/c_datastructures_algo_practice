#include <stdio.h>

void logn(int n)
{
	int i;

	for (i = 0; i < n; i *= 2)
	{
		printf("%d\n", i);
		i++;

	}
}

int main(void)
{
	logn(16);

	return(0);
}