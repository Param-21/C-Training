#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Param Bhatt";

    size_t len = strlen(str);

    printf("The string: %s",str);

    printf("Length of the string: %zu",len);
}