#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<=120)
        {
            float sumelc=n*2.10;
            float nsumelc=n*2.10;
            printf("Summer months:%.2f\n",sumelc);
            printf("Non-Summer months:%.2f\n",nsumelc);
        }
        if(n>120&&n<=330)
        {
            float sumelc=(n-120)*3.02+120*2.10;
            float nsumelc=(n-120)*2.68+120*2.10;
            printf("Summer months:%.2f\n",sumelc);
            printf("Non-Summer months:%.2f\n",nsumelc);
        }
        if(n>330&&n<=500)
        {
            float sumelc=(n-330)*4.39+210*3.02+120*2.10;
            float nsumelc=(n-330)*3.61+210*2.68+120*2.10;
            printf("Summer months:%.2f\n",sumelc);
            printf("Non-Summer months:%.2f\n",nsumelc);
        }
        if(n>500&&n<=700)
        {
            float sumelc=(n-500)*4.97+170*4.39+210*3.02+120*2.10;
            float nsumelc=(n-500)*4.01+170*3.61+210*2.68+120*2.10;
            printf("Summer months:%.2f\n",sumelc);
            printf("Non-Summer months:%.2f\n",nsumelc);
        }
        if(n>700)
        {
            float sumelc=(n-700)*5.63+200*4.97+170*4.39+210*3.02+120*2.10;
            float nsumelc=(n-700)*4.50+200*4.01+170*3.61+210*2.68+120*2.10;
            printf("Summer months:%.2f\n",sumelc);
            printf("Non-Summer months:%.2f\n",nsumelc);
        }
    }
}
