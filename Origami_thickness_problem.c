#include<stdio.h>

int main()
{
	double start = 0.0001;
	int end = 40076000;
	int count = 0;
	while (start < end)
	{
		start *= 2;
		count++;
	}
	printf("%d", count);
	return 0;
}
