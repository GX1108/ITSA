#include <stdio.h>
int main()
{
    int n,num;
    int cnt=2;
    scanf("%d",&n);
    if(n==1)
        printf("NO");
    else
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                printf("NO");
                break;
            }
            cnt++;
        }
    if (n==cnt)
        printf("YES");

}
