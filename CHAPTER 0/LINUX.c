#include<stdio.h>
#include<string.h>

int main()
{
    char dest[10] = "Param";
    char src[20] = "Bhatt";

    printf("dest before: %s",dest);

    strcat(dest,src);

    printf("dest after: %s",dest);

    return 0;
}