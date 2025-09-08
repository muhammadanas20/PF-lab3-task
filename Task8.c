#include <stdio.h>
// Percentage Calculator
int main (){
    int subject1, subject2, subject3, total;
    float percentage;
    printf("Enter marks of subject 1: ");
    scanf("%d", &subject1);
    printf("Enter marks of subject 2: ");
    scanf("%d", &subject2);
    printf("Enter marks of subject 3: ");
    scanf("%d", &subject3);
    total = subject1 + subject2 + subject3;               // calculating total marks
    percentage = (total / 300.0) * 100;                   // calculating percentage
    printf("Total Marks: %d\n", total);                    // displaying total marks
    printf("Percentage: %.2f%%\n", percentage);            // displaying percentage
}