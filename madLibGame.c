#include <stdio.h>
#include <string.h>

int main(){
    char adj[50] = "";
    char name[50] ="";
    char adj2[50] = "";
    char verb[50] = "";
    char adj3[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adj,sizeof(adj),stdin);
    adj[strlen(adj)-1] = '\0';

    printf("Enter an noun (animal or person): ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adj2,sizeof(adj2),stdin);
    adj2[strlen(adj2)-1] = '\0';
    
    printf("Enter an verb (description): ");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adj3,sizeof(adj3),stdin);
    adj3[strlen(adj3)-1] = '\0';

    printf("\n");
    printf("Today I went to a %s zoo.\n",adj);
    printf("In a exhibit, I saw a %s.\n",name);
    printf("%s was %s and %s!\n",name,adj2,verb);
    printf("I was %s",adj3);

    return 0;

}