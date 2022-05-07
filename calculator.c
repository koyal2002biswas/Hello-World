#include<stdio.h>

float sum(float a, float b){return a+b;}
float sub(float a, float b){return a-b;}
float mult(float a, float b){return a*b;}
float div(float a, float b){return a/b;}
int main(){
    float(*p)(float, float);
    float(*q)(float, float);
    float(*r)(float, float);
    float(*s)(float, float);
    p=&sum;
    q=&sub;
    r=&mult;
    s=&div;
    float x,y;
    int choice;
    printf("Enter your choice");
    scanf("%d", &choice);
    printf("Enter the numbers");
    scanf("%f %f", &x, &y);
    if(choice==1) { printf("The answer is %f", p(x,y));}
    else if(choice==2) { printf("The answer is %f", q(x,y));}
    else if(choice==3) { printf("The answer is %f", r(x,y));}
    else if(choice==4) { printf("The answer is %f", s(x,y));}



}