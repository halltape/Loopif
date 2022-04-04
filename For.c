#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int K, M, res = 0;
    scanf("%d%d", &K, &M);
    if (K<=0){
        K = 1;
    }
    for (int i = K; i <= M; i++){
    printf("%d ", i);
    res = res + 1;
    }
    printf("\n%d",res);
    return 0;
}