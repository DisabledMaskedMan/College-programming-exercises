#include <stdio.h>

enum NUM {
	ZERO = '0',
	ONE = '1',
	TWO = '2',
	THREE = '3',
	FOUR = '4',
	FIVE = '5',
	SIX = '6',
	SEVEN = '7',
	EIGHT = '8',
	NINE = '9',
	ADD = '+',
	SUB = '-',
	EQU = '=',
};

int main()
{
	int num[13] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6, 2, 1, 2 };
	char arr[115] = { 0 };
	fgets(arr, 115, stdin);
	int sum = 0;
	for (int i = 0; i < 115; i++)
	{
		if (arr[i] == '\0')
			break;
		switch (arr[i])
		{
		case ZERO:
			sum += num[0];
			break;
		case ONE:
			sum += num[1];
			break;
		case TWO:
			sum += num[2];
			break;
		case THREE:
			sum += num[3];
			break;
		case FOUR:
			sum += num[4];
			break;
		case FIVE:
			sum += num[5];
			break;
		case SIX:
			sum += num[6];
			break;
		case SEVEN:
			sum += num[7];
			break;
		case EIGHT:
			sum += num[8];
			break;
		case NINE:
			sum += num[9];
			break;
		case ADD:
			sum += num[10];
			break;
		case SUB:
			sum += num[11];
			break;
		case EQU:
			sum += num[12];
			break;
		}
	}
	printf("%d", sum);
	return 0;
}
