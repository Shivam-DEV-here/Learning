#include<stdio.h>
#include<conio.h>
void main()
 {
    float Z=0,z=1;
    int c=0,n,i,x;
    printf("Enter total quantity of number");
    scanf("%d",&n);

    float a[n];
    printf("Enter your numbers for calculation");

    for(i=0;i<=n-1;i++)
        {
            scanf("%f",&a[i]);
            c++;
        }
    printf("%d",c);

 printf("Operations are as respectively, starting with 1. i.e. Switch & case is used.");

  printf(" \n Please NOTE - during sub: all num will be subtracted from first num");

 scanf("%d",&x);

    switch(x)
        {
            case 1: for(i=0;i<=n-1;i++)
                        {
                            Z=Z+a[i];

                        }
                        printf("%f",Z);
            break;
            
            case 2: for(i=0;i<=n-1;i++)
                        {
                            if(i==0)
                              {
                                Z=a[i];
                              }
                            Z=Z-a[i];

                        }
                        printf("%f",Z);
            break;

            case 3: for(i=0;i<=n-1;i++)
                        {
                            z=z*a[i];

                        }
                        printf("%f",z);
            break;

            case 4: for(i=0;i<=n-1;i++)
                        {
                            z=z/a[i];

                        }
                        printf("%f",z);
            break;

            default:
                {printf("Error");
                }

        }
    getch();
 }