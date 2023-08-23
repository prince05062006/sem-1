#include<stdio.h>
int main(){
    int n;
    printf("enter a value of n:");
    scanf("%d",&n);
    if(n>=0){
        printf("number is positive.");
    }
    else{
        printf("number is negative.");
    }
}