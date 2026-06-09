#include<stdio.h>
#include<string.h>
void main(){


    char noun[50] = "";
    char verb[50] = "";
    char adj1[50] = "";
    char adj2[50] = "";
    char adj3[50] = "";

    printf("enter an adjective (description) ");
    fgets(adj1, sizeof(adj1),stdin);
    adj1[strlen(adj1)-1] = '\0';

    printf("enter an noun (name place thing) ");
    fgets(noun, sizeof(noun),stdin);
    noun[strlen(noun)-1] = '\0';

    printf("enter an adjective (description) "); 
    fgets(adj2, sizeof(adj2),stdin);
    adj2[strlen(adj2)-1] = '\0';

    printf("enter an verb (ending with -ing) ");
    fgets(verb, sizeof(verb),stdin);
    verb[strlen(verb)-1] = '\0';

    printf("enter an adjective (description) "); 
    fgets(adj3, sizeof(adj3),stdin);
    adj3[strlen(adj3)-1] = '\0';



    printf("today i went to a %s zoo\n", adj1);
    printf("in an exibit i saw %s\n", noun);
    printf("%s was %s and %s!\n", noun,adj2,verb);
    printf("i was %s\n", adj3);

}
