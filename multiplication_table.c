#include<stdio.h>

int main()
{
int i,j,n;
printf("enter value of n: ");
scanf("%d",&n);
printf("%d table:",n);
for(i=1;i<=20;i++)
{
printf("\n %dX%d=%d",n,i,(n*i));
}
 return 0;
}