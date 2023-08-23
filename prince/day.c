#include<stdio.h>

int main(){
    int d,w,y;

    printf("please enter day : ");
    scanf("%d",&d);

    w=d/7;
    d=d%7;
    y=w/52;
    w=w%52;

    printf("%d",y);
    printf(":");

    printf("%d",w);
    printf(":");

    printf("%d",d);
}