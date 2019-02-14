#include <stdio.h>

int main(){
    int value;
    int floor = 1;
    int result = 0;

    printf("Enter an integer value: ");
    scanf("%d", &value);
    printf("\nBefore: %d", value);

    while(floor < value / 10){
        floor = floor * 10;
    }
   if (floor == 10){
        //result = value;
    }else{
        for(int i = 10; floor >= 1; i = i * 10){
            int temp = (value % 10) * floor;
            result = result + temp;
            floor = floor / 10;
            value = value / 10;
        }
    }
    printf("\nAfter : %d",result);
    return 0;
}