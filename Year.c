#include <stdio.h>
//This program will correct you if you type the wrong date//
    int main (){
    int m, y;
    scanf("%d%d", &m, &y);

    if (m>=1 && m<=31 && (y==1||y==3||y==5||y==7||y==8||y==10||y==12)){
            printf ("correct\n");
        } else if (m>=1 && m<=30 && (y==4||y==6||y==9||y==11)){
            printf ("correct\n");
    } else if (m>=1 && m<=29 && y==2){
            printf("correct\n");
    } else {
        printf("error\n");
    }


    return 0;

}