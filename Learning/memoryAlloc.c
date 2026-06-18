#include <stdio.h>
#include <stdlib.h>

char *readline(FILE *fp)
{
    int offset = 0;   // Index next char goes in the buffer
    int bufsize = 4;  // Preferably power of 2 initial size
    char *buf;        // The buffer
    int c;            // The character we've read in

    buf = malloc(bufsize);  // Allocate initial buffer

    if (buf == NULL)   // Error check
        return NULL;

    // Main loop--read until newline or EOF
    while (c = fgetc(fp), c != '\n' && c != EOF) {

        // Check if we're out of room in the buffer accounting
        // for the extra byte for the NUL terminator
        if (offset == bufsize - 1) {  // -1 for the NUL terminator
            bufsize *= 2;  // 2x the space

            char *new_buf = realloc(buf, bufsize);

            if (new_buf == NULL) {
                free(buf);   // On error, free and bail
                return NULL;
            }

            buf = new_buf;  // Successful realloc
        }

        buf[offset++] = c;  // Add the byte onto the buffer
    }

    // We hit newline or EOF...

    // If at EOF and we read no bytes, free the buffer and
    // return NULL to indicate we're at EOF:
    if (c == EOF && offset == 0) {
        free(buf);
        return NULL;
    }

    // Shrink to fit
    if (offset < bufsize - 1) {  // If we're short of the end
        char *new_buf = realloc(buf, offset + 1); // +1 for NUL terminator

        // If successful, point buf to new_buf;
        // otherwise we'll just leave buf where it is
        if (new_buf != NULL)
            buf = new_buf;
    }

    // Add the NUL terminator
    buf[offset] = '\0';

    return buf;
}

int main(void){
    //Allocate space for a single int:
    /*int *p = malloc(sizeof(int));

    *p = 12; //Store something there

    printf("/%d\n", *p); //Print it: 12

    free(p); //Free the space
    */
   /*int * x;

   if((x = malloc(sizeof(int) *10)) == NULL){
    printf("Memory allocation failed\n");
   }*/

   //ALLOCATE MEMORY FOR ARRAY
    /*
    //Allocate space for 10 ints;
    int *p = malloc(sizeof(int) * 10);

    //Assign them values 0 -45:
    for( int i = 0; i< 10; i ++)
    {
        p[i] = i * 5;
    }

    //Print all values 
    for( int i = 0; i < 10; i++)
    {
        printf("%d\n", p[i]);
    }

    //Free teh psace
    free(p);
    //can use calloc to allocate memory for an array of 10 ints and initialize them to 0
    */

    //allocate space for 20 floats
    /*float *p = malloc(sizeof *p * 20);//sizeof *p is the same as sizeof(float)

    //assign them fractional values 0.0 -1.0
    for(int i = 0; i <20; i++)
    {
        p[i] = i/20.0;
    }

    //Make the array biiger by reallocating memeory
    float * new_p = realloc(p, sizeof *p * 40);

    //Check if reallocation was successful
    if(new_p == NULL){
        printf ("Memory reallocation failed\n");
        return 1;
    }

    //If successful reassign the pointer to the new memory block
    p = new_p;

    //assign new values
    for(int i =20; i <40; i++)
    {
        p[i] = 1.0 + (i-20)/20.0;

    }

    //Print all values 0.0 -2.0 om the 40 element array
    for(int i = 0; i < 40; i ++)
    {
        printf( "%f\n", p[i]);
    }

    //free the space 
    free(p);
    */

FILE *fp = fopen("foo.txt", "r");

    char *line;

    while ((line = readline(fp)) != NULL) {
        printf("%s\n", line);
        free(line);
    }

    fclose(fp);
}