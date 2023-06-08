#include<stdio.h>
int prime(int r)
{
    int i;
    if(r!=1)
    {
    for (i=2;i<r;i++)
    {
        if(r%i==0)
        return 0;
    }
    return 1;
    }
    else
    return 0;
}
int main()
{
    int n,s=0,r,c=0;
    scanf("%d",&n);
    if (prime(n))
    {
       while(n>0)
       {
           s++;
           r=n%10;
          if (prime(r))
          {
          c++;
          n/=10;
          }
          else
          break;
       }
       if(s==c)
       printf("Mega Prime");
       else
       printf("Not Mega Prime");
    }
    else
    printf("Not Mega Prime");
}