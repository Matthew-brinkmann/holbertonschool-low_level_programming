#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	int n;
	srand(time(0));
	n = rand();
	printf("%d", n);
}
