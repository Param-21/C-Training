#include<stdio.h>

int add()
{
    int a, b, c;

    a = 5, b = 10;

    c = a+b;
    printf("Add result: %d\n",c);
}

int sub()
{
    int a,b,c;
    a = 20, b = 10;
    c = b-a;
    printf("Sub result: %d\n",c);
}

int Div()
{
    int a,b,c;
    a = 20, b = 10;
    c = b/a;
    printf("Div result: %d\n",c);
}

int Mul()
{
    int a,b,c;
    a = 20, b = 10;
    c = b*a;
    printf("Mul result: %d\n",c);
}

int Mod()
{
    int a,b,c;
    a = 20, b = 10;
    c = b%a;
    printf("Mod result: %d\n",c);
}

int main()
{
    printf("\n Enter the number between 1 to 5 \n");
    int choice;
    scanf("%d",&choice);
    /*we can also use if else logic insted of this*/
    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        Mul();
    break;
    case 4:
        Div();
    break;
    case 5:
        Mod();
    break;
    default:
        printf("Enter a valid choice\n");
        break;
    }
}