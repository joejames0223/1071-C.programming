#include <stdio.h>

int main()
{
    double H,W,BMI;

    printf("How tall are you?(cm)\n");
    scanf("%lf",&H);

    printf("How much do you weigh?(kg)\n");
    scanf("%lf",&W);

    BMI=W/((H/100)*(H/100));
    
    while(H>=0 && W>=0){
    if(BMI<18.5){
    	printf("你的BMI為: %.1lf \n",BMI);
        printf("體重過輕\n");
    }
    if(BMI>=18.5&&BMI<24){
    	printf("你的BMI為: %.1lf \n",BMI);
        printf("正常範圍\n");
    }
    if(BMI>=24&&BMI<27){
    	printf("你的BMI為: %.1lf \n",BMI);
        printf("體重過重\n");
    }
    if(BMI>=27&&BMI<30){
    	printf("你的BMI為: %.1lf \n",BMI);
        printf("輕度肥胖\n");
    }
    if(BMI>=30&&BMI<35){
    	printf("你的BMI為: %.1lf \n",BMI);
        printf("中度肥胖\n");
    }
    if(BMI>35){
    	printf("你的BMI為: %.1lf \n",BMI);
        printf("重度肥胖\n");
    printf("你的身高:");
    scanf("%lf",&H);
    printf("你的體重:");
    scanf("%lf",&W);
    }
}
    return 0;
}
