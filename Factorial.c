#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, res = 1;
    scanf("%d", &k);

    for (int i = 1; i<=k; i++){
        res = res * i;
    }
    printf("%d", res);
    return 0;
}