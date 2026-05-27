#include <stdio.h>
#include <stdbool.h>

void increment(int *p)
    {
        *p = *p+1;
    }

int main(void)
{
    //int i = 10;
    //int i; // i's type is int
    //int *p; // p's type is pointer to int

    //p = &i; // p now holds the address of i

    //i = 10; // i is now 10
    //*p = 20; // *p is the value at the address stored in p, which is i. So i is now 20.

    //printf("i is %d\n", i );
    //printf("i is %d\n, *p)");

    //printf("an int uses %zu bytes\n", sizeof(int));
    ////a pointer is a variable that holds an address.

    //printf("The value of i is %d\n", i);
    //printf("And its address is %p\n", (void*)&i);

    int i = 10;
    int *j = &i;

    printf("i is %d\n", i);
    printf("i is also %d\n", *j);

    increment(j);

    printf("i is %d\n", i);
    
}
