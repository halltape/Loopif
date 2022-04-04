#include <stdio.h>

int main ()
{
    int N, res = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
            if (N%i == 0){
            res = res + 1;
            printf("%d ", i);
        }
    }
    printf("\n%d", res);

    return 0;
}