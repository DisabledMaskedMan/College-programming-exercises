#include<stdio.h>

void swap(int* x, int* y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int a, b, x, tmp;
    scanf("%d%d", &a, &b);
    tmp = 0;
    if (a < b) swap(&a, &b);
    while (b != 0) 
    {
        tmp += a / b;
        x = a % b; a = b; b = x; 
    }
    printf("%d\n", tmp); 
    return 0;
}
