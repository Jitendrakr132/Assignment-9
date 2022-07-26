#include<stdio.h>
#include<conio.h>
int main()
{
    int ver;
    printf("Enter the number");
    scanf("%d",&ver);
    switch(ver==1)
    {
    case 1:
        printf("Good");
        break;
    case 0:
        switch(ver==2)
        {
         case 1:  printf("Better");
         break;
         case 0:
            switch(ver==3)
            {
            case 1:
                printf("Best");
                break;
            case 0:
                printf("Invalid ");
                break;
            }
            break;
        }
        break;
    }

    getch();
}

