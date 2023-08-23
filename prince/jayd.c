#include<stdio.h>
int main(){
    int d,y,w;
    printf("enter a value of days:");
    scanf("%d",&d);
    printf("convert days into year & week:%d %d",y=d/365,w=d/7);
}