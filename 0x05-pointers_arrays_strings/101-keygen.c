#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	printf("%d\n", n);
	return (n);
}
