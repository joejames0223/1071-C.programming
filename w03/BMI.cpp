#include <stdio.h>

int main(){
    double H,W,BMI;
    printf("How tall are you?(cm)\n");
    scanf("%lf",&H);
    printf("How much do you weigh?(kg)\n");
    scanf("%lf",&W);
    BMI=W/((H/100)*(H/100));
while(W>=0&&H>=0){
    printf("你的BMI為: %.1lf \n",BMI);
    if(BMI<18.5){
         printf("體重過輕\n");
    }
    else if(BMI>=18.5&&BMI<24){
         printf("正常範圍\n");
    }
    else if(BMI>=24&&BMI<27){
         printf("體重過重\n");
    }
    else if(BMI>=27&&BMI<30){
         printf("輕度肥胖\n");
    }
    else if(BMI>=30&&BMI<35){
        printf("中度肥胖\n");
    }
    else if(BMI>=35){   //>=
        printf("重度肥胖\n");
}
    printf("你的身高:");
    scanf("%lf",&H);
    printf("你的體重:");
    scanf("%lf",&W);
    BMI=W/((H/100)*(H/100)); //就差這一行 
}
}

