#include<stdio.h>


int find_largest()
{
    int a, b,c;
    int i;

    for(i=0;i<=3;i++)
    {
        printf("Enter first:");
        scanf("%d",&a);
        printf("Enter second:\n");
        scanf("%d\n",&b);
        printf("Enter third:\n");
        scanf("%d",&c);
        break;
    }

    if (a > b && a > c)
    {
        printf("%d is greater",a);
    }
    
    else if (b > a && b > c)
    {
        printf("%d is greater.",b);
    }

    else
    {
        printf("%d is greater.",c);
    }
    
}


void main()
{
    find_largest();
}