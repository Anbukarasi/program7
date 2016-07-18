#include<stdio.h>
int main()
{
int a;
printf("enter a value");
scanf("%d",&a);
if(a>0)
{
printf("the given number is positive integer");
}
else if(a==0)
{
printf("the given value is zero");
}
else
printf("the given value is negative");
}
return 0;
}
