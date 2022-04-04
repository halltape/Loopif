#include <stdio.h>

    int main ()
{
    int a,b,c, res = 0;
    scanf("%d%d%d", &a, &b, &c);
    if (a>0){
        res = res + 1;
    }
    if (b>0){
        res = res + 1;
    }
    if (c>0){
        res = res + 1;
    }
    printf("%d", res);
    return 0;
}