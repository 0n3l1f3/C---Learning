#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*int my_strlen(char *s)
{
    int count = 0;

    while (s[count] != '\0')
    {
        count++;
    }
    return count;
}*/
int main(void)
{ 
    /*char *s = "Hello, world";
    printf("%s\n", s);*/

    char s[] = "Hello, world";
    char t[100];

    

    strcpy(t, s); // Copy s into t.

    t[0] = 'z'; 

    printf("%s\n", t);
    printf("%s\n", s);

    /*for(int i = 0; i<13; i++)
    {
        printf("%c\n", s[i]);
    }*/

   // printf("The string is %zu bytes long.\n", strlen(s));
}