#include<stdio.h>
int main()
{
    int n,s,r,su=0;
    scanf("%d",&n);
    s=n*n;
    while(s>0)
    {
        r=s%10;
        su+=r;
        s/=10;
    }
    if(su==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}