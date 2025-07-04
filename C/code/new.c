#include<stdio.h>
#include<conio.h>
void main()
   {
      int a[20],n,i,num,x=-1;

      printf("Enter number of term");
      scanf("%d",&n);

      printf("Enter your elements");
      for(i=0;i<=n-1;i++)
         {
            scanf("%d",&a[i]);
         }

      printf("Enter your number to sort out");
      scanf("%d",&num);

      for(i=0;i<=n-1;i++)
         {
            if(a[i]==num)
               {
                  x=i;
                  break;
               }
         }
      if(x>-1)
         {
            x++;
            printf("Number=%d term=%d",num,x);
         }
         else
         {
            printf("invalid");
         }
      getch();
   }