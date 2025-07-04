#include<stdio.h>
#include<conio.h>
void main()
{
  int rev=0,n,d;
  printf("Enter number for reverse");  
  scanf("%d",&n);

    while(n>0)
        {
            rev=rev*10;
            d=n%10;
            n=n/10;
            rev=rev+d;
        }
        printf("%d",rev);
 getch();
}