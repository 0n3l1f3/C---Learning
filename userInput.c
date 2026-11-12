#include <stdio.h>
#include <string.h>

int main()
{
    //set up variable on withoiut initialization
    // if they are used before initialization, they will contain garbage values - undefined behaviour]

    int age;
    float gpa;
    char grade;
    char name[30];

   

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter you gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';

    printf("%s\n",name);
    printf("%d\n",age);
    printf("%f\n",gpa);
    printf("%c\n",grade);
    

    return 0;
}
