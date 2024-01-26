#include<stdio.h>
int main()
{
    int cp,tip,tax ;
    printf("enter meal price, tip percent, tax percent-->");
    scanf("%d%d%d", &cp, &tip, &tax);
    int total;
    total = cp +((tip*cp)/100)+((tax*cp/100));
    printf("The total cost of the meal is %d", total);
    return 0;
}
