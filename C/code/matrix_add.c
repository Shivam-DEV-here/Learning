#include<stdio.h>
#include<conio.h>
void main()
{
     int a[3][3],b[3][3],i,j,n=3,c[3][3];
      printf("Enter first & second matrix, element shoul be placed rescpectily");  
      for(i=0;i<=n-1;i++)
         {
            for(j=0;j<=n-1;j++)
              {
               scanf("%d",&a[i][j]);
               scanf("%d",&b[i][j]);
               c[i][j]=0;
               c[i][j]=a[i][j] + b[i][j];
              }
         }
         printf("Summetion is");
         printf("\n");
          for(i=0;i<=n-1;i++)
         {
            for(j=0;j<=n-1;j++)
              {
                printf("%d",c[i][j]);
              }printf("\n");
         }

 getch();
}   