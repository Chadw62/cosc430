#include <stdio.h>


int main(){

    int x,y;

    printf("Enter x value: ");
    scanf("%d", &x);

    printf("Enter y value: ");
    scanf("%d", &y);

    if(x < y){
        printf("Y is larger than x");
    } else if(x > y){
        printf("X is larger than y");
    }else{
        ("X and y are equal");
    }

    return 0;
}