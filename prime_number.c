#include<stdio.h>
int main()
{
    int n,i,p=1;
    scanf("%d",&n);
    for(i=2;i!=n;i++)
    {
        if(n%i==0)
        p=0;
    }
    if (p==1) printf("prime");
    else printf("not a prime");
}