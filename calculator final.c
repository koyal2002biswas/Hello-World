#include<stdio.h>

float sum(float a, float b){ return a+b;}
float mult(float a, float b){ return a*b;}
int main(){
    float(*p)(float, float);
    float(*q)(float, float);
    p =&sum;
    q =&mult;
    int x,y;
    int choice;
    printf("Enter the numbers");
    scanf("%d %d", &x,&y);
    printf("Enter the choice");
    scanf("%d",&choice);
    if (choice==1){
        printf("The answer is %f",(p)(x,y));
    } else if (choice==2){
        printf("The answer is %f", (q)(x,y));
    } else {
        printf("Not valid");
    }



}
