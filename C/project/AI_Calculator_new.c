#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
 {
    int o1,o2,oo2;

    float C,K,F;

    float Z=0,z=1;
    int c=0,n,i,x;          
    float a[1000];

        printf("\n \n  This is ______ AI, will help you for easy calculus\n\n");
        printf("PRESS 1: If your calulation includes --- Area, Parameter, TSA, LSA, Volume, etc.\n");
        printf("PRESS 2: If your calulation includes --- Conversion.\n");
        printf("PRESS 3: If your calulation includes --- Addition, Sub, Mult, Div, Percentage etc.\n");

    scanf("%d",&o1);

    switch(o1)
        {
            case 1:

              printf("\n FOR [1:Square, 2:Rectangle, 3:Triangle, 4:Circle, 5:Semi circle, 6:Cube, 7:Cuboide, 8:Cone, 9:Cylinder, 10:Sphere]");
              printf("\n [11:Hemi sphere, 12:Frustum]");

              scanf("%d",&o2);

              float area,parameter,diagonal,a1,b1,b2,c1,c2,c3,c4,pi=3.14,d1,circumference,diameter,e1,f1,volume,TSA,LSA,g1,g2,g3, slant_height,h1,h2,m1,m2,n1,p1,q1,q2,q3;

    switch(o2)
        {
            case 1: 
                printf("Enter side \n");
                scanf("%f",&a1);
                area=a1*a1;
                parameter=a1*4;
                diagonal=a1*sqrt(2);
                printf("Area=%f Parameter=%f Diagonal=%f",area, parameter, diagonal);
            break;
            
            case 2: 
                printf("Enter Lenght & Breadth, Respectively. \n");
                scanf("%f%f",&b1,&b2);
                area=b1*b2;
                parameter=2*(b1+b2);
                diagonal=sqrt(pow(b1,2)+pow(b2,2));
                printf("Area=%f Parameter=%f Diagonal=%f",area, parameter,diagonal);
            break;

            case 3: 
                printf("Enter side \n");
                scanf("%f%f%f",&c1,&c2,&c3);
                c4=(c1+c2+c3)/2;
                area=sqrt(c4*(c4-c1)*(c4-c2)*(c4-c3));
                parameter=c1+c2+c3;
                printf("Area=%f Parameter=%f",area, parameter);
            break;

            case 4: 
                printf("Enter radius \n");
                scanf("%f",&d1);
                area=pi*pow(d1,2);
                circumference=2*pi*d1;
                diameter=d1*2;
                printf("Area=%f Circumference=%f Diagonal=%f",area, circumference, diameter);
            break;

            case 5: 
                printf("Enter radius \n");
                scanf("%f",&e1);
                area=(pi*pow(e1,2))/2;
                circumference=(pi*e1)+(2*e1);
                diameter=e1*2;
                printf("Area=%f Circumference=%f Diagonal=%f",area, circumference, diameter);
            break;

            case 6: 
                printf("Enter side \n");
                scanf("%f",&f1);
                volume=pow(f1,3);
                TSA=6*pow(f1,2);
                LSA=4*pow(f1,2);
                diagonal=sqrt(3*f1);
                printf("Volume=%f TSA=%f LSA=%f Diagonal=%f",volume, TSA, LSA, diagonal);
            break;

            case 7: 
                printf("Enter Lenght, Breadth & Height \n");
                scanf("%f%f%f",&g1,&g2,&g3);
                volume=g1*g2*g3;
                TSA=2*((g1*g2)+(g2*g3)+(g3*g1));
                LSA=2*(g1+g2)*g3;
                diagonal=sqrt(pow(g1,2)+pow(g2,2)+pow(g3,2));
                printf("Volume=%f TSA=%f LSA=%f Diagonal=%f",volume, TSA, LSA, diagonal);
            break;

            case 8: 
                printf("Enter Radius & Height. Respectively \n");
                scanf("%f%f",&h1,&h2);
                volume=(pi*pow(h1,2)*h2)/3;
                slant_height=sqrt(pow(h1,2)+pow(h2,2));
                TSA=pi*h1*(h1+slant_height);
                LSA=pi*h1*slant_height;
                printf("Volume=%f TSA=%f LSA=%f Slant Height=%f",volume, TSA, LSA, slant_height);
            break;

            case 9: 
                printf("Enter Radius & Height. Respectively \n");
                scanf("%f%f",&m1,&m2);
                volume=(pi*pow(m1,2)*m2);
                TSA=2*pi*m1*(m1+m2);
                LSA=2*pi*m1*m2;
                printf("Volume=%f TSA=%f LSA=%f",volume, TSA, LSA);
            break;

            case 10: 
                printf("Enter Radius \n");
                scanf("%f",&n1);
                volume=(4*pi*pow(n1,3))/3;
                TSA=4*pi*pow(n1,2);
                diameter=2*n1;
                printf("Volume=%f TSA=%f Diameter=%f",volume, TSA, diameter);
            break;

            case 11: 
                printf("Enter Radius \n");
                scanf("%f",&p1);
                volume=(2*pi*pow(p1,3))/3;
                TSA=3*pi*pow(p1,2);
                LSA=2*pi*pow(p1,2);
                diameter=2*p1;
                printf("Volume=%f TSA=%f LSA=%f Diameter=%f",volume, TSA, LSA, diameter);
            break;

            case 12: 
                printf("Enter (Radius of small, Radius of large) Circle & Height. Respectively \n");
                scanf("%f%f%f",&q1,&q2,&q3);
                volume=(pi*q3*(pow(q1,2)+pow(q2,2)+(q1*q2)))/3;
                slant_height=sqrt(pow(q3,2)+pow((q1-q2),2));
                TSA=pi*(pow(q1,2)+pow(q2,2)+slant_height*(q1+q2));
                LSA=pi*slant_height*(q1+q2);
                printf("Volume=%f Slant Heaight=%f TSA=%f LSA=%f",volume, slant_height, TSA, LSA);
            break;

            default:
                {printf("Error");
                }
            break;
        }



























        break;
        case 3:
                                        
    printf("Enter total quantity of number");
    scanf("%d",&n);

    printf("Enter your numbers for calculation");

        printf(" \n Please NOTE - during Sub & Div: all num will be subtracted & Div from first num");
        printf("For Percentage, ____ per of ____");

    for(i=0;i<=n-1;i++)
        {
            scanf("%f",&a[i]);
        }

        printf("1:Addition 2:Subtraction 3:Multiplication 4:Division 5:Percentage.");

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

            case 5: for(i=0;i<=n-1;i++)
                        {
                            z=(z/a[i])*100;

                        }
                        printf("%f",z);
            break;

            default:
                {printf("Error");
                }

        }

        break;

          default:
            {
                printf("2ERROR");
            }

        }

        
    getch();
 }
