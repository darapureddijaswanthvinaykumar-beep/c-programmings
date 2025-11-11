
#include <stdio.h>
int main()
 {
 int a[10][10],r,C,i,j;
 printf("Enter row and colum size:");
 scanf("%d%d",&r,&c);
 printf("Enter 2D array value: ");
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {
         scanf("%d",&a[i][j]);
     }
 }
 printf("\n Disply 2D array values:\n");
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {
         printf("  %d",a[i][j]);
     }
     printf("\n");
 }
 return 0;
}
