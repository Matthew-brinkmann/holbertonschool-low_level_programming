#include <stdio.h>
long highest = 0;
long lastTested = 2;

void find_prime(long n)
{
        long i,m=0,flag=0;

	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			printf("%li is not prime\n", n);
			flag=1;
			lastTested = n;
			break;
		}
	}
	if(flag==0)
	{
		printf("%li is prime\n", n);
		if (n > highest)
			lastTested = n;
			highest = n;
	}
}

void find_factor(long n)
{
	long test = 1;

	putchar('\n');
	while (test < lastTested)
	{
		if (n % test == 0)
		{
			find_prime(test);
			find_prime(n / test);
			test = test + 1;
		}
		else
			test = test + 1;
	}
}

long main(void)
{
	long x = 612852475143;
	printf("starting code\n");
	find_factor(x);
	printf("%li is the highest prime number of %li\n", highest, x);
	return (0);
}
