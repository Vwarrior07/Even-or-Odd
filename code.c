#include<stdio.h>
int main()
{
    int a;
    printf("please enter the no: ");
    scanf("%i",&a);
    if (a%2==0)
    {
          printf("The entered number is even.");
    }
    else
    {
        printf("The entered number is odd.");
    }
    return 0;
}