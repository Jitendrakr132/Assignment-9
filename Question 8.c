#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    switch(n>0)
    {
    case 1:
        printf("Negative");
        break;
    case 0:
        printf("positive");
        break;
    }
}
