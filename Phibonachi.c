#include <stdio.h>
int main()
{
    int N;

    scanf("%d", &N);
    int a = 1, b = 1, c;
    if (N <= 2)
        printf("1 ");
    else
    {
        for (int i = 3; i <= N; i++)
        {
            c = a + b;
            a = b; b = c;
        }
        printf("%d ", b);
    }
    getchar(); getchar();
    return 0;
}