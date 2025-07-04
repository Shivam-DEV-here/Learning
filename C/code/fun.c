#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 void main()
 {
    int fun(int);
    int a=10;
    fun(a);
}
int fun(int a)
    {
        if(a>0)
        {
            printf("%d",a);
            fun (a-1);

        }
        else{
            return a;
        
        }
    }