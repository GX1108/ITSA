#include <stdio.h>

int main()
{
    int n;
    int cnt=2;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==1)
            printf("NO\n");
        else
            for(int i=2; i<n; i++)
            {
                if(n%i==0)
                {
                    printf("NO\n");
                    break;
                }
                cnt++;
            }
        if (n==cnt)
            printf("YES\n");
    }

}
