#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - see code
 *
 *@argc: arg
 *@argv: arg
 *Return: 0 for success
 *
 */
int main(int argc, char *argv[])
{
	unsigned long int num;
	unsigned long int i;
	(void)(argc);

	num = atoi(argv[1]);

	for (i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
		printf("%lu=%lu*%lu\n",num, num / i, i);
		exit(0);
		}
	}

	return (0);
}
