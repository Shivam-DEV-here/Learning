#include<stdio.h>
#include<conio.h>
void main()
{
  int a[12],i,n,x,sum=0;
  printf("same salary enter 1 otherwise 2");  
  scanf("%d",&n);

    switch(n)
    {  case 1:
          printf("Enter your salary");
          scanf("%d",&x);
          for(i=0;i<=11;i++)
            {a[i]=x;
            }
        for(i=0;i<=11;i++)
            {sum=sum+a[i];
            }
        printf("Your salary of 12 month is %d",sum);
       break;
        
       case 2:
        printf("Enter your salary month by month");
        for(i=0;i<=11;i++)
        {  scanf("%d",&a[i]);
           sum=sum+a[i];
        }
        printf("Your salary is %d",sum);
       break;
       default:
         printf("Invalid key");
    }
 getch();
}   