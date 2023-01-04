#include<stdio.h>

int main()
{
    int n;
    int cnt=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<=n;i++)
        {
            if(i%3==0)
                cnt=cnt+i;
        }
        printf("%d\n",cnt);
        cnt=0;
    }
}
