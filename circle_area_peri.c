#include<stdio.h>

int main()
{
float radius;
float area,peri;
printf("enter radius value: ");
scanf("%f", radius);
area=3.14*radius*radius;
peri=6.28*radius;
printf("\n area of circle is %f",area);
printf("\n perimeter of circle is %f",peri);
 return 0;
}