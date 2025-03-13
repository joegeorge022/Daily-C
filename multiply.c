/* Write a C program that defines a function multiply() which takes two integers as parameters and returns their product. Call this function in main() and display the result. */


#include <stdio.h>

int multiply(int num1, int num2){
    int result = num1*num2;
    return result;
}

int main() {
    int num1,num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    
    printf("%d",multiply(num1,num2));
}
