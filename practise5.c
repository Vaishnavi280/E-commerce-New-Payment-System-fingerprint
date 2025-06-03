#include<stdio.h>
int main()
{
    printf("to check whether number is even or odd");
    int a;
    printf("\nenter number to check whether it is even or odd");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("\ngiven number is even %d",a);
    }
    else{
        printf("\ngiven number is odd %d",a);
    
    }
    return 0;
}