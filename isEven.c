/*Write a C function named isEven() that takes an integer as input and returns 1 if the number is even, otherwise returns 0. Use this function in main() to check whether a given number is even or odd.*/

#include <stdio.h>

int isEven(int num){
    if(num%2==0){
        return 1;
    } else{
        return 0;
    }
}

int main() {
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    printf("%d",isEven(num));
}
