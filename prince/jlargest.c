#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a value of a :");
    scanf("%d",&a);
    printf("enter a value of b :");
    scanf("%d",&b);
    printf("enter a value of c :");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("a is largest.");
        }
        else{
            printf("c is largest.");
        }
    }
    else{
        if(b>c){
            printf("b is largest.");
        }
        else{
            printf("c is largest.");
        }
    }
}