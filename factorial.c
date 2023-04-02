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
	int num;
	int i;
	(void)(argc);

	num = atoi(argv[1]);

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
		printf("%d=%d*%d\n",num, num / i, i);
		}
	}

	return (0);
}
