#include<stdio.h>
#include<string.h>

int check_palin()
{
    char str[50] = "Test string to check palidrome";

    printf("BEFORE REVERSE: --> %s",str);

    strrev(str);

    printf("AFTER REVERSE: --> %s\n",str);
}




int main()
{
    check_palin();
}