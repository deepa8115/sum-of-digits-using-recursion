#include<stdio.h>
int sum_of_digits(int n)
{
    if(n==0)
    return 0;
    return(n%10 + sum_of_digits(n/10));
}
int main()
{
    int num;
    printf("input value: ");
    scanf("%d",&num);
    int result=sum_of_digits(num);
    printf("sum of digits is %d\n", result);
    return 0;
}
