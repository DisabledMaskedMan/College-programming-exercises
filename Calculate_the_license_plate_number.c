#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 0; i < 10; i++)

    {
        for (int j = 0; j < 10; j++)
        {
            if (j == i)
                continue;
            int num = i * 1000 + i * 100 + j * 10 + j;
            double res = sqrt(num);
            if(res - (int)res)
                continue;
            printf("%d", num);
        }
    }

    return 0;
}
