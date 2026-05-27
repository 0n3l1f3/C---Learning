#include <stdio.h>
#include <stdbool.h>

int main(void)
{
 int a = 999;

 printf("%zu\n", sizeof a);
 printf("%zu\n", sizeof(2+7));
 printf("%zu\n", sizeof 3.14);
 printf("%zu\n", sizeof(int));
 printf("% zu\n", sizeof(char));

}