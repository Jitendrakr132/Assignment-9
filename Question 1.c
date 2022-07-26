#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
    int n;
    printf("Enter the number 1-12 :");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Day of = 31");
        break;
    case 2:
        printf("Day of =28/29");
        break;
    case 3:
        printf("Day of =31");
        break;
    case 4:
        printf("Day of =30");
        break;
    case 5:
        printf("Day of =31");
        break;
    case 6:
        printf("Day of =30");
        break;
    case 7:
        printf("Day of =31");
        break;
    case 8:
        printf("Day of =31");
    case 9:
        printf("Day of =30");
        break;
    case 10:
        printf("Day of =31");
        break;
    case 11:
        printf("Day of =30");
        break;
    case 12:
        printf("Day of =31");
    default :
        printf("Invalid month");
    }
    getch();

}

