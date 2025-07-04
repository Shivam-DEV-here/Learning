#include<stdio.h>
#include<conio.h>
void main()
 {
    int x,y,c,count=0;
    printf("Enter two numbers for addition");
    scanf("%d%d",&x,&y);

    do {
   if(x/1 && y/1)
     {c=x+y;
      printf("Your sum is=%d",c);
     }
     else
     {printf("you have entered wrong data type");
     }

     count++;
    }
     while (count<1);


  getch();
 }