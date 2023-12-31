#include <stdio.h>

int countBits(int n) {
    int count = 0;
    while (n) {
        count++;
        n >>= 1;
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", countBits(n));
    return 0;
}
