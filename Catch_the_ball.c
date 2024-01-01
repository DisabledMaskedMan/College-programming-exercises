#include<stdio.h>

int main() {
    const char* arr[5] = { "red", "yellow", "blue", "white", "black" };
    int num = 1;
    for (int i = 0; i <= 4; i++) {
        for (int j = 0; j <= 4; j++) {
            for (int k = 0; k <= 4; k++) {
                if (i != j && j != k && i != k) {
                    printf("%d:%s,%s,%s\n", num++, arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    return 0;
}
