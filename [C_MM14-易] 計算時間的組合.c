#include<stdio.h>

int main(){
    long long int t,day,hr,min,sec;
    while(scanf("%lld",&t)!=EOF){
        day=t/(24*60*60);
        t=t%(24*60*60);
        hr=t/(60*60);
        t=t%(60*60);
        min=t/60;
        t=t%60;
        sec=t;
        printf("%d days\n",day);
        printf("%d hours\n",hr);
        printf("%d minutes\n",min);
        printf("%d seconds\n",sec);
    }
}
