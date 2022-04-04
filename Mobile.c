#include <stdio.h>

    int main (){
    int t;
    scanf("%d", &t);

    if (t<=500){
        printf("350\n");
    } else printf("%d\n", 350 + (t-500)*2 );

    return 0;
}