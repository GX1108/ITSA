#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int ans=0;
        for(int i=1;i<=n-1;i++)
        {
            printf("%d + ",i);
            ans=ans+i;
        }
        ans=ans+n;
        printf("%d",n);
        printf(" = %d\n",ans);
    }
}
