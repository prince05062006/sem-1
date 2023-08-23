#include<stdio.h>

int main(){
    char C;
    printf("enter a value of C:");
    scanf("%c",&C);
    if(C=='a'||C=='e'||C=='i'||C=='o'||C=='u'||C=='A'||C=='I'||C=='O'||C=='E'||C=='U'){
        printf("C is vowel.");
    }
    else{
        printf("C is constant.");
    }
}