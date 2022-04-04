#include <stdio.h>
//This program can open and close your LOCK with a password 1024//
    int main (){
    int b1, b2, b3, b4, res;
    scanf("%d%d%d%d", &b1, &b2, &b3, &b4);

    if (res == (b1 - 1) - (b2 - 0) - (b3 - 2) - (b4 - 4)){
        printf("open");
    } else printf("close");

    return 0;
}