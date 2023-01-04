#include <stdio.h>

int main()
{
    int n,a,b,c;
    while(scanf("%d",&n)!=EOF)
    {
        a=n/100;
        b=(n-a*100)/10;
        c=(n-a*100-b*10);
        int ans=a*a*a+b*b*b+c*c*c;
        if(ans==n)
            printf("Yes\n");
        else
            printf("No\n");

    }
}
