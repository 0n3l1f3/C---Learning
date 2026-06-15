#include <stdio.h>
//take existing type and give an alias
int main(void)
{
    typedef struct 
    {
        char *name;
        int leg_count, speed;
    } animal;
}