#include<stdio.h>
#include<conio.h>
void main()
{
  int n,k=1,i;
  printf("Enter ending for factorial");  
  scanf("%d",&n);

  for(i=n; i>0; i--)
    {

    k=k*i;
    }
    printf("%d",k);
 getch();
}