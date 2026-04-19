#include<stdio.h>

int main()
{
int x;
printf("enter value of x: ");
scanf("%d",&x);
if(x<0)
{
printf("%d is negative",x);
}else if(x>0){
printf("%d is positive",x);
}else
printf("%d is zero",x);
 return 0;
}