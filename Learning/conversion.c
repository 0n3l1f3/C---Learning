#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*
    //NUMERIC VALUE TO STRING
    char s[10];
    float f = 3.14159;
    //Convert "f" to string, storing in "s", writing at most 10 characters
    //including the NUL terminator

    snprintf(s,10, "%f", f);

    printf("String value: %s\n", s);
    */
    //STRING TO NUMERIC VALUE
    //ISSUE WITH THIS METHOD IS BAD ERROR HANDLING, A LOT OF UNDEFIGNED BEHAVIOUR
    /*
    char *pi = "3.14159";
    float f;

    f = atof(pi);
    printf("%f\n",f);
    */
   /*
   char *s = "3490";

   //Convert string s, a umber in base 10, to an unsigned long int
   //NULL means ww don't care to learn about error information
   //We cna also convert it to different bases

   unsigned long int x = strtoul(s,NULL,10);

   printf("%lu\n",x);
   */
   char *s = "34x90";  // "x" is not a valid digit in base 10!
    char *badchar;

    // Convert string s, a number in base 10, to an unsigned long int.

    unsigned long int x = strtoul(s, &badchar, 10);

    // It tries to convert as much as possible, so gets this far:

    printf("%lu\n", x);  // 34

    // But we can see the offending bad character because badchar
    // points to it!

    printf("Invalid character: %c\n", *badchar);  // "x"

}