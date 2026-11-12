#include <stdio.h>
#include <string.h>

int main(){
    //variable

    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    char item[50] ="";
    float total = 0.0f;

    printf("What would you like to buy? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';


    printf("What's the price of the item? ");
    scanf("%f", &price);


    printf("How much would you like to buy? ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("You bought %d of %s/s\n",quantity, item);
    printf("The total price is: %c%.2f",currency, total);


    

    return 0;
}