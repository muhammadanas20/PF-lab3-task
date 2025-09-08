#include <stdio.h>
// Users Information by escape characters
int main(){
    char firstName[20];
    char lastName[20];
    int userAge;
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your last name: ");
    scanf("%s", lastName);
    printf("Enter your age: ");
    scanf("%d", &userAge);
    printf("\n===User Information===\n");    
    printf("First Name:\t\"%s\"\n", firstName);
    printf("Last Name:\t\"%s\"\n", lastName);
    printf("Age:\t\t\"%d\"\n", userAge);
    return 0;
}   