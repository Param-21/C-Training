
#include"stdio.h"
#include "string.h"
#include "unistd.h"
#include "stdint.h"
#include "stdlib.h"
int str_len()
{
    char str[] = "Param Bhatt";

    printf("String: %s\n",str);
    int value = strlen(str);
    printf("The length of the str %d",value);
}

int getput()
{
    char str[20];
    printf("ENter any string:\n");
    fgets(str,20,stdin);
    printf("Entered string :");
    puts(str);
    
}   
int str_cpy()
{
    char src[] = "Param";
    char dest[] = "Bhatt";

    printf("SRC: %s\n",src);

    printf("Dest before: %s\n",dest);

    strcpy(dest,src);

    printf("Dest after: %s\n",dest);
}


int str_cat()
{
    char s1[] = "Param";
    char s2[] = "Bhatt";
    printf("Before cat: %s %s\n",s1,s2);

   printf("After cat: %s", strcat(s1,s2));
}


int token()
{
    char a1[] = "Param Bhatt";
    char *test;

    printf("Entered token function...\n");
    test = strtok(a1,",");

    while (test != NULL)
    {
        printf("%s\n",test);
        test = strtok(NULL,",");
    }
    
    return 0;
}
void main()
{
    str_len();
    str_cpy();  
    str_cat();
    token();
}   