#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   int a,b,c;
   int d;
   float  r1,r2;
   printf("Enter the a b and c");
   scanf("%d %d %d",&a,&b,&c);
   d=b*b-4*a*c;
   switch(d>0)
   {
   case 1:
       r1=-b+sqrt(d)/2*a;
       r2=-b-sqrt(d)/2*a;
       printf(" %f %f ",r1,r2);
       break;
   case 0:
       switch(d<0)
       {
       case 1:
        r1=(-b/2*a)+(sqrt(d/2*a));
        r2=(-b/2*a)+(sqrt(d/2*a));
        printf("%f %f ",r1,r2);
        break;
       case 0:
        switch(d==0)
        {
        case 1:
            r1=-b/2*a;
            r2=-b/2*a;
            printf("%f %f ",r1,r2);
            break;
        case 0:
            printf("Invalid");
            break;
        }
        break;
       }
       break;

   }
   getch();
}
