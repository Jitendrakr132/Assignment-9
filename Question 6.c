#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter the number");
    scanf("%d",&year);
    switch(year%100==0)
    {
    case 1:
        switch(year%400==0)
        {
     case 0:
        printf("Leap year");
        break;
        case 1:
        printf(" not Leap year");
        break;
        }
        break;
        case 0:
            switch(year%4==0)
            {
             case 1:
        printf("Leap year");
        break;
        case 0:
        printf(" not Leap year");
        break;
        }
        break;
      }

    getch();
}


