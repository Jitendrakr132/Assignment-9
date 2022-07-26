#include<stdio.h>
#include<conio.h>
int main()
{
    int choice,a,b,c;
    while(1)
    {
        printf("\n \n ........................");
   printf("\n 1. isosceles triangle ");
  printf("\n 2. right Agle triangle");
  printf("\n 3. Equilateral triangle");
  printf("\n 4. exit");
  printf("\n Enter the your choice ");
  scanf("%d",&choice);

   printf("Enter the three length");
        scanf("%d %d %d",&a,&b,&c);

    switch(choice)
    {
    case 1:
        if(a=b||b==c||c==a)
            printf("isosceles triangle");
        else
            printf("Not isosceles triangle");
            break;
    case 2:
        if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
            printf("right Agle triangle");
        else
            printf("Not right Agle triangle");
            break;
    case 3:
        if((a==b)&&(b==c))
            printf("Equilateral triangle");
        else
            printf("Not Equilateral triangle");
            break;
    case 4:
        exit (0);
    default :
        printf("Invalid ");

    }
    }
    getch();
}
