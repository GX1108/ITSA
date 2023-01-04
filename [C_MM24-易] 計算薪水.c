#include<stdio.h>

int main(){
    int a,b;
    double money;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a<=60){
            money=a*b;
        }
        if(a>60&&a<=120){
            money=60*b+(a-60)*b*1.33;
        }
        else money=60*b+60*b*1.33+(a-120)*b*1.66;
        printf("%.1f\n",money);
    }
    return 0;
}
