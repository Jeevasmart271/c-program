#include<stdio.h>
int main()
{
    int n,k,a[1000],i,j,c,s=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=i+1;i<=n-2,j<=n-1;i++,j++)
    {
        c=a[i]+a[j];
        if(c==k)
        s=1;
    }
    if(s==1)
    printf("yes");
    else
    printf("no");
}
