#include <stdio.h>
/**
 * main - Each new term in the Fibonacci sequence is generated by
 * adding the previous two terms. By starting with 1 and 2
 * Fibonacci sequence values not exceed 4,000,000
 *
 * Return:0
 */
int main(void)
{
	unsigned long pri = 1, sec = 2, sum = 0, total_sum = 0;

	sum = pri + sec;
	while (sum < 4000000)
	{
		sum = pri + sec;
		if ((sum % 2) == 0)
		{
			total_sum += sum;
		}
		pri = sec;
		sec = sum;
	}
	printf("%lu\n", total_sum);
	return (0);
}
