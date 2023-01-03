#include<stdio.h>

int main()
{
    int dis,t;
    while(scanf("%d",&dis)!=EOF)
    {
        t=dis*100/(100-76.2);
        printf("%d\n",t+1);
    }
}
