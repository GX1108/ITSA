#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d %d %d\n",n,n*n,n*n*n);
    }
}
