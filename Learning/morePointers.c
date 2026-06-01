#include <stdio.h>
#include <stdbool.h>

int findMax(int *a, int *b)
{
    if( *a > *b)
    {
        return *a;
    }
    else
    {
        return *b;
    }
}

int main(void)
{   /*
    int m = 10 ;
    
    int n;

    int o; 

    int *z = &m;

    printf("Pointer: Show the basic declaration of pointer :\n");
    printf("-------------------------------------------------\n");
    printf("Here is m=%d, n and o are two integer variable and *z is an intenger\n", m);
    printf("z stores the adddress of m = %p\n", (void*)z);
    printf("*z stores the value of m = %i\n", *z);
    printf("&m is the address of m = %p\n", (void*)&m);
    printf("&n stores the address of n = %p\n", (void*)&n);
    printf("&o stores the address of o = %p\n", (void*)&o);
    printf("z stores the address of z = %p\n", (void*)&z);    
    

    int m = 29;
    int *ab = &m;

    printf("Address of m : %p\n", (void*)ab);
    printf("value of m: %d\n", m);

    printf("Now ab is assigned with the address of m.");
    printf("Address of pointer ab : %p\n", (void*)ab);
    printf("Value of pointer ab : %d\n", *ab);

    *ab = 34;
    printf("Now the value of m is changed to 34 by dereferencing pointer ab.\n");
    printf("Address of m : %p\n", (void*)ab);  
    printf("Value of m : %d\n", m);

    *ab  = 7;
    printf("Now the value of m is changed to 7 by dereferencing pointer ab.\n");
    printf("Address of m : %p\n", (void*)ab);
*/
    int first = 5;
    int second = 6;

    int *a = &first;
    int *b = &second;

    printf("The maximum of first and second is %d\n", findMax(a, b));

}
