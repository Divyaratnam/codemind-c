#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=(n/1000);
    if(d==6)
    d=9;
    else if(c==6)
    c=9;
    else if(b==6)
    b=9;
    else
    a=9;
    printf("%d%d%d%d",d,c,b,a);
}