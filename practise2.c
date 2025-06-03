#include<stdio.h>
int main()
{
    int a,b,c;
    double d,e,product;
    printf("enter an integer a: ");
    scanf("%d",&a);
     printf("enter an integer b: ");
    scanf("%d",&b);
    c=a+b;
    printf("addition is: %d",c);
    printf("\n enter an floating number d: ");
    scanf("%lf",&d);
    printf("enter an floating number e: ");
    scanf("%lf",&e);
    product=d*e;
     printf("multiplication is: %.2lf",product);

    return 0;
}