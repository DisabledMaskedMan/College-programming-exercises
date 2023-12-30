#include <stdio.h>

int main()
{
    char c;
    int n = 0;
    char arr[500] = { 0 };
    fgets(arr, 499, stdin);
    for (int i = 0; (c = arr[i]) != '\0'; i++)
    {
        if (c >= '0' && c <= '9')
            n++;
    }
    printf("%d", n);
    return 0;
}
