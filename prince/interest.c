#include<stdio.h>

int main(){
    float p,r,t,i;
    printf("enter a value of principal:");
    scanf("%f",&p);
    printf("enter a value of roi:");
    scanf("%f",&r);
    printf("enter a value of time period:");
    scanf("%f",&t);
    printf("interest is =%f",i=(p*r*t)/100);
}