#include <stdio.h>

int main(){
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("\nCongrats you can vote");
    }else{
        printf("\nSorry you cannot vote");
    }
    
    if(age >= 21){
        printf("\nCongrats you can drink");
    }else{
        printf("\nSorry underage");
    }

    return 0;
}