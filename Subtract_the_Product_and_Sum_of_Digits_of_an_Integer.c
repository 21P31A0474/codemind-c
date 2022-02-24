#include<stdio.h>
int main()
{
    int n,temp,sum=0,prod=1;
    scanf("%d",&n);
    while(n>0)
    {
        temp=n%10;
        sum=sum+temp;
        prod=prod*temp;
        n=n/10;
    }
    printf("%d",(prod-sum));
}