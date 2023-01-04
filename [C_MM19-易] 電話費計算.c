#include<stdio.h>

int main()
{
    int n;
    double money;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<=800)
            money=n*0.9;
        if(n>800&&n<1500)
            money=n*0.9*0.9;
        if(n>=1500)
            money=n*0.9*0.79;
        printf("%.1f\n",money);
    }
}

