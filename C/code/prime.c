#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,c=0;
  printf("Enter to check prime");  
  scanf("%d",&n);

  for(i=2; i<=n-1; i++)
    {
        if(n%i==0)
          {c=c+1;
          }
    }
            if(c!=0)
          {printf("not prime");
          }else
            {printf("prime");
             }   
 getch();
}