#include <stdio.h>

int main ()
{
    float h,w,bmi;
    while(scanf("%f %f",&h,&w)!=EOF)
    {
        bmi=w/((h/100)*(h/100));
        printf("%.2f\n",bmi);

        if(bmi<18.5)
            printf("Underweight\n");
        if(bmi>=18.5&&bmi<24)
            printf("Normal\n");
        if(bmi>=24&&bmi<27)
            printf("Overweight\n");
        if(bmi>=27&&bmi<30)
            printf("Obese Class I\n");
        if(bmi>=30&&bmi<35)
            printf("Obese Class II\n");
        if(bmi>=35)
            printf("Obese Class III\n");
    }

}
