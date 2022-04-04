#include <stdio.h>

int main() {
    int max, min, n;
    max = -5000;
    min = 5000;
    n = 1;
    while (n != 0) {
        scanf("%d", &n);
        if (max < n && n !=0)
            max = n;
        if (min > n && n !=0)
            min = n;
    }
    printf("%d %d", max, min);
    return 0;
}