#include <stdio.h>

int main(void)
{
    FILE *fp;
    unsigned char c; 

    fp = fopen("output.bin", "rb"); // rb mode for "read binary"!

    while(fread(&c, sizeof(char), 1, fp) > 0)
    {
        printf("%d\n", c);
    }

    /*

    unsigned char bytes[6] = {5, 37, 0, 88, 255, 12};

    fp = fopen("output.bin", "wb"); // wb mode for "write binary"!

     // In the call to fwrite, the arguments are:
    //
    // * Pointer to data to write
    // * Size of each "piece" of data
    // * Count of each "piece" of data
    // * FILE*

    fwrite(bytes, sizeof(char), 6, fp);
    fclose(fp);



    /*
    int x = 32;

    //fp = fopen("output.txt", "w");
    fp = stdout;
    fputc('B' , fp);
    fputc('\n',fp);
    fprintf(fp, "x = %d\n", x);
    fputs("Hello, world!\n", fp);
    fclose(fp);
    /*
     char name[1024];
     float length;
     int mass;

     fp = fopen("whales.txt", "r");

     while(fscanf(fp, "%s %f %d", name, &length, &mass) != EOF)
         printf("%s whale, %d tonnes, %.1f meters\n", name, mass, length);

    fclose(fp);
     
     

    /*
    char  s[1024];
    int linecount = 0;

    fp = fopen("quote.txt", "r");

    while(fgets(s, sizeof s, fp) != NULL)
    {
        printf("%d: %s", ++linecount, s);
    }
    /*
    int c;

    fp = fopen("hello.txt", "r");
    
    while((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }


    //int c = fgetc(fp);
    //printf("%c\n", c);

    fclose(fp);
    */

}
