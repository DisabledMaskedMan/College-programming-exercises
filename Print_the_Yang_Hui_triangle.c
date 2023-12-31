#include<stdio.h>
#include<assert.h>

int main()
{
	int n = 0;
	int arr[30] = { 0 };
	scanf("%d", &n);
	assert(n > 0);

	for (int i = 1; i <= n; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (j == i - 1)
			{
				arr[j] = 1;
				printf("1 ");
			}
			else if (j == 0)
				printf("1");
			else
				printf("%d ", arr[j] = arr[j - 1] + arr[j]);
		}
		printf("\n");
	}
	return 0;
}
