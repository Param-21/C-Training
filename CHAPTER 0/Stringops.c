#include<stdio.h>
#include<stdint.h>
#include<string.h>


int str_cat()
{
    char dest[20] = "Param";
    char src[10] = "Bhatt";

    printf("Dest before: %s\n",dest);

    strcat(dest,src);
    printf("Dest after: %s\n",dest);
    return 0;
}

int str_len()
{
    char str[] = "Param Bhatt";

    printf("String: %s\n",str);

    int  length = (*str);

    printf("The length of the string: %d\n",length);

    return length;
}

int str_cmp()
{
    char str[10] = "Param";

    char str2[10] = "Bhatt";

    int res = strcmp(str,str2);

    printf("Comparision of the string 1 & 2: %d\n",res);

    return res;
}   

int str_cpy()
{
    char source[] = "Param Bhatt";
    char dest[20];

    printf("SRC: %s\n",source);


    if (dest[20] ==  NULL)
    {
        printf("Dest NULL ",dest);
    }
     
    
    strcpy(dest,source);

    printf("Dest: %s\n",dest);

    return 0;
}
void main()
{
    str_cat();
    str_len();
    str_cmp();  
    str_cpy();
}



