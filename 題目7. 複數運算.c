#include <stdio.h>

int main()
{
    int n;
    int rn1,urn1,rn2,urn2;
    scanf("%d",&n);
    char cnt;
    for(int i=0; i<n; i++)
    {
        scanf(" %c",&cnt);
        scanf("%d %d %d %d",&rn1,&urn1,&rn2,&urn2);
        if (cnt=='+')
        {
            printf("%d %d\n",rn1+rn2,urn1+urn2);
        }
        if (cnt=='-')
        {
            printf("%d %d\n",rn1-rn2,urn1-urn2);
        }
        if (cnt=='*')
        {
            printf("%d %d\n",rn1*rn2+(-1)*urn1*urn2,rn1*urn2+rn2*urn1);
        }

    }
}
