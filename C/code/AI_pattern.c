#include<stdio.h>,
#include<conio.h>
void main()
 {
    int i,j,k,c=0;


    printf("[Half pyramid] \n\n");

    for(i=1;i<=5;i++)
        {
            for(j=1;j<=i;j++)
             {
            printf("*");
        }printf("\n");
        }

printf("\n");
printf("\n");


    printf("[Diamond] \n\n");

    for(i=1;i<=4;i++)
        {
            for(k=3;k>=i;k--)
              {printf(" ");}

            for(j=1;j<=2*i-1;j++)
             {printf("*");
              }printf("\n");
        }
    for(i=3;i>=1;i--)
        {
            for(k=3;k>=i;k--)
              {printf(" ");}

            for(j=1;j<=2*i-1;j++)
             {printf("*");
              }printf("\n");
        }

printf("\n");
printf("\n");

    printf("[butterfly] \n\n");

    for(i=1;i<=4;i++)
        {
            for(j=1;j<=i;j++)
             {printf(" *");
              }
            for(k=7;k>=2*i;k--)
              {printf("  ");
              }
            for(j=1;j<=i;j++)
             {printf(" *");
              }printf("\n");
        }
            for(i=4;i>=1;i--)
        {
            for(j=1;j<=i;j++)
             {printf(" *");
              }
            for(k=7;k>=2*i;k--)
              {printf("  ");
              }
            for(j=1;j<=i;j++)
             {printf(" *");
              }printf("\n");
        }

printf("\n");
printf("\n");

          printf("[0 & 1 Pyramid] \n\n");

  for(i=1; i<=5;i++)
     {
      for(j=1;j<=i;j++)
         {
          if((i+j)%2==0)
            {
              printf(" 1");
            }
            else
            {
              printf(" 0");
            }

         }
      printf("\n");
     }

 printf("\n");
 printf("\n");

 printf("[Counting] \n\n");

  for(i=1;i<=5;i++)
     {
      for(j=1;j<=i;j++)
         { c++;
         printf(" %d",c);
         }
      printf("\n");
     }

  printf("\n");
 printf("\n");

 printf("[Barfi] \n\n");

  for(i=1;i<=5;i++)
     {
      for(k=i;k<=4;k++)
         { 
          printf(" ");
         }
      for(j=1;j<=5;j++)
         { c++;
         printf(" *");
         }
      printf("\n");
     }


getch();
 }
