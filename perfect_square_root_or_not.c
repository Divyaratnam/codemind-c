#include<stdio.h>
int main()
{
    int n,i,t=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if (i*i==n)
        t=1;
    }
    if(t) printf("True");
    else printf("False");
}