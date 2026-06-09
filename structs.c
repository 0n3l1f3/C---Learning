#include <stdio.h>
#include <stdbool.h>

struct car {
    char * name;
    float price;
    int speed;
};

void set_price(struct car *c, float price)
{
    //(*c).price = price;
    c->price = price;

}

int main (void){
    struct car saturn = {.speed = 175, .name = "Saturn SL/2"};
    /*
    saturn.name = "Saturn SL/2";
    saturn.price = 15999.99;
    saturn.speed = 175;
    */

    set_price(&saturn, 799.99);

    printf("Name:    %s\n", saturn.name);
    printf("Price (USD):   %f\n", saturn.price);
    printf("Top Speed (km): %d\n", saturn.speed);


}
