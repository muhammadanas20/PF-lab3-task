#include <stdio.h>
//  swapping Variables
int main(){
    int numberOne,numberTwo;
    printf("Enter first number: ");
    scanf("%d",&numberOne);
    printf("Enter second number: ");
    scanf("%d",&numberTwo);
     // 1-Using Third variable method
    int temp;
    temp=numberOne;
    numberOne=numberTwo;
    numberTwo=temp;
    printf("After swapping: \n");
    printf("First number: %d\n", numberOne);
    printf("Second number: %d\n", numberTwo);
    // 2-Without using Third variable method
    numberOne = numberOne + numberTwo;
    numberTwo = numberOne - numberTwo;
    numberOne = numberOne - numberTwo;
    printf("After swapping: \n");
    printf("First number: %d\n", numberOne);
    printf("Second number: %d\n", numberTwo);
    return 0;
}


