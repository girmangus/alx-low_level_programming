#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * @void: no argument
 * Return: 0
 */
int main(void)
{
	unsigned long long int  pri = 1, sec = 2, sum = 0;
	int limit = 3;

	printf("1, 2");
	while (limit <= 98)
	{
		sum = pri + sec;
		printf(", %llu", sum);
		pri = sec;
		sec = sum;
		limit++;
	}
	printf("\n");
	return (0);
}
