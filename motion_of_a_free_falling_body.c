#include <stdio.h>

double allMeter(double startMeter, int n)
{
	if (n == 0)
		return 0；
	return startMeter * 2 + allMeter(startMeter / 2, n - 1);
}

int main()
{
	int n = 0;
	double startMeter = 50.0;
	scanf("%d", &n);
	double all = allMeter(startMeter, n - 1);
	printf("%.4lf", all + 100.0);
	return 0;
}
