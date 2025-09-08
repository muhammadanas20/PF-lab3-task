#include <stdio.h>
//  swapping Variables
int main(){
    int variableOne,variableTwo;
    printf("Enter first number: ");
    scanf("%d",&variableOne);
    printf("Enter second number: ");
    scanf("%d",&variableTwo);
     // 1-Using Third variable method
    int temp;
    temp=variableOne;
    variableOne=variableTwo;
    variableTwo=temp;
    printf("After swapping: \n");
    printf("First number: %d\n", variableOne);
    printf("Second number: %d\n", variableTwo);
    // 2-Without using Third variable method
    variableOne = variableOne + variableTwo;
    variableTwo = variableOne - variableTwo;
    variableOne = variableOne - variableTwo;
    printf("After swapping: \n");
    printf("First number: %d\n", variableOne);
    printf("Second number: %d\n", variableTwo);
    return 0;
}


