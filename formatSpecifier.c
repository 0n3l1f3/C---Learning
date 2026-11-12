#include <stdio.h>

int main(){
    //format specifiers are used to specify the type of data to be printed

    int age = 25;
    float price = 19.99;
    char icon = '$';
    char name[] = "Eghosa";

    printf("%d\n",age);
    printf("%f\n",price);
    printf("%c\n",icon);
    printf("%s\n",name);

    float unit = 1.00;
    float decimal = 10.00;
    float cent = 100.00;

    printf("%+7.2f\n", unit);
    printf("%+8.2f\n", decimal);
    printf("%+9.2f\n", cent);

    return 0;
}