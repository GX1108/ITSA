#include<stdio.h>

int main()
{
    int a,b,t;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        while(b!=0)
        {
            t=a%b;
            a=b;
            b=t;
        }
        printf("%d\n",a);
    }
}
