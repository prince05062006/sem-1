#include<stdio.h>

int main(){
    int a,b,temp;
    printf("enter a value of a: ");
    scanf("%d",&a);
    printf("enter a value of b: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    temp=b;
    printf("value of a= %d",a);
    printf("value of b= %d",b);
}