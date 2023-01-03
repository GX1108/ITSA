#include <stdio.h>

int main()
{
    int d,h;
    double ans;
    while(scanf("%d %d",&d,&h)!=EOF)
    {
        ans=(d*h);
        ans=ans/2;
        printf("%.1f\n",ans);
    }
}
