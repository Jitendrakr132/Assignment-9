#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    int choice;
    printf("\n 1. Addition");
    printf("\n 2. Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n 5.Exit");
    printf("\n Enter the your choice ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter the two number");
        scanf("%d %d",&a,&b);
        printf("Addition = %d",a+b);
        break;
    case 2:
        printf("Enter the two number");
        scanf("%d %d",&a,&b);
        printf("Subtracation = %d",a-b);
        break;
    case 3:
        printf("Enter the two number");
        scanf("%d %d",&a,&b);
        printf("Multiplication = %d",a*b);
        break;
    case 4:
        printf("Enter the two number");
        scanf("%d %d",&a,&b);
        printf("Division = %d",a/b);
        break;
    case 5:
        exit(0);
    default :
        printf("Invalid ");

    }
    getch();
}
