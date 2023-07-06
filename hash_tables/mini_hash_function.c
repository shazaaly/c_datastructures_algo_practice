#include <stdio.h>
#include <string.h>
#define HASH_TABLE_CAPACITY 5000

int hash_function(char *str)
{
	unsigned int i;
	unsigned int sum = 0;

	for (i = 0; i < strlen(str); i++)
	{
		sum += str[i];
	}
	return (sum % HASH_TABLE_CAPACITY);
}

int main(void)
{
	printf("%d\n",hash_function("Shaza"));
	printf("%d\n",hash_function("Hel")); /*281*/
	printf("%d\n",hash_function("Cau"));  /*281*/

	return (0);
}
/*the strings Hel and Cau will collide since they have the same ASCII value.*/