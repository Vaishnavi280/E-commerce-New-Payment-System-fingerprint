#include<stdio.h>
int main()
{
    double a,b,c;
    printf("enter values a :\n");
    scanf("%lf",&a);
    printf("enter values b :\n");
    scanf("%lf",&b);
    c=a;
    a=b;
    b=c;
    printf("after swapping we get first number as:%.2lf\n",a);
    printf("after swapping we get second number as:%.2lf\n",b);
    printf("after swapping we get third number as:%.2lf\n",c);
    int i = 1;
    
  while (i <= 5) {
    printf("%d\n", i);
    ++i;
  }

return 0;

}