#include <stdio.h>

int main()
{
    int u,d,h;
    double ans;
    while(scanf("%d %d %d",&u,&d,&h)!=EOF)
    {
        ans=((u+d)*h);
        ans=ans/2;
        printf("Trapezoid area:%.1f\n",ans);
    }
}
