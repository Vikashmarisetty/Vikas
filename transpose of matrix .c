#include<stdio.h>
int main()
{
int row,col,i,j;
printf("\n enter values of row and col: ");
scanf("%d%d",&row,&col);
int a[row][col],b[row][col],c[row][col];
printf("\n enter matrix a values : ");
for(i=0;i<row;i++){
for(j=0;j<col;j++){
scanf("%d",&a[i][j]);
 }
}
printf("\n enter values of b matrix: ");
for(i=0;i<row;i++){
for(j=0;j<col;j++){
scanf("%d",&b[i][j]);
 }
}
printf(" transpose of matrix c is \n");
for(i=0;i<row;i++){
for(j=0;j<col;j++){
c[i][j]=a[i][j]*b[i][j];
 }
}
for(i=0;i<row;i++){
for(j=0;j<col;j++){
printf("%d \t",c[j][i]);
}
printf("\n");
 }
 

return 0;

}