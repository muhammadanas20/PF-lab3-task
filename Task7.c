#include <stdio.h>
// Area and Perimeter of a Rectangle
int main()
{
    int Length, Width, Area, Perimeter;
    printf("Enter the Length of Rectangle in cm : ");
    scanf("%d", &Length);
    printf("Enter the Width of Rectangle in cm : ");
    scanf("%d", &Width);

    Area = Length * Width;                               // calculating area
    Perimeter = 2 * (Length + Width);                    // calculating perimeter
    printf("Area of Rectangle: %dcm^2\n", Area);         // displaying area
    printf("Perimeter of Rectangle: %dcm\n", Perimeter); // displaying perimeter
    return 0;
}