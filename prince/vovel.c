#include<stdio.h>

int main(){
    char z;
    printf("enter a character:");
    scanf("%c",&z);

    if(z=='a'||z=='e'||z=='i'||z=='o'||z=='u'||z=='A'||z=='E'||z=='I'||z=='O'||z=='U'){
        printf("z is vowel.");
    }
    else{
        printf("z is constant.");
    }
}