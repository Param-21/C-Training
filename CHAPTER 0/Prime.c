#include<stdio.h>

int check_prime(int num)
{   
    int i;
    if (num <= 1)
    {
         return 0;
    }
    
    for ( i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
             return 0;
        }
    }
    return 1;    
}
int main()
{
    int num;
    printf("Entered number");
    scanf("%d",&num);
    if (check_prime(num))
    {
        printf("ITS PRIME");
    }
    else
    {
        printf("NOT PRIME");
    }
    
}