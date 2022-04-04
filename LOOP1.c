#include <stdio.h>

int main ()
{
    int A, B, res = 1;
    scanf("%d%d", &A, &B);

    for (int i = A; i <= B; i++){


        for (int j =1; j <= res; j++) {
            printf("%-5d", i);
        }
            res++;

    }


    return 0;
}