#include <stdio.h>
#include <locale.h>
//Type your age here and you will know who you are//
int main(){
    setlocale(LC_ALL, "");
    int age;
    scanf("%d", &age);

    if (age>0 && age<=6){
        printf("����������");
    } else if (age>=7 && age<=18){
        printf("��������");
    } else if (age>=19 && age<=59){
        printf("�������");
    } else if (age>=60) {
        printf("���������");
    }

    return 0;
}