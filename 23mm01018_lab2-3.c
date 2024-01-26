#include<stdio.h>
int main()
{
    int a,yrs,months,weeks,days ;
    printf("Enter total number of days",a);
    scanf("%d",&a);
    yrs = a/365;
    a=a%365;
    months=a/30;
    a=a%30;
    weeks=a/7;
    a=a%7;
    days=a;
    printf("Given number of days will equal");
    printf("\nYears=%d\n months=%d\nweeks =%d\n days =%d",yrs,months,weeks,days);
    return 0;
}