#include<stdio.h>
int main()
{
   int a,b,c;
   int  larg ;
   printf("Enter the first number-a");
   scanf("%d", &a);
   printf("\n Enter the second number-b");
scanf("%d", &b);
   printf("\n Enter the third number-c");
   scanf("%d", &c);
   larg= ((a>b)&&(a>c))?a:((b>a)&&(b>c))?b:c;
   printf("Largest number is=%d",larg);
    return 0;
}
