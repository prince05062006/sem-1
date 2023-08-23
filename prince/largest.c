#include<stdio.h>

int main(){
    int a,b,c;

    printf("enter a velue of a: ");
    scanf("%d",&a);
    printf("enter a velue of b: ");
    scanf("%d",&b);
    printf("enter a velue of c: ");
    scanf("%d",&c);

    if(a>b){
        printf("a is largest");
    }else{
        if(b>c){
            printf("b is largest");
        }else{
            printf("c is largest");
        }
    }
}