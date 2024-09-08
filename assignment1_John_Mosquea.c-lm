/* assignment1_John_Mosquea.c-lm
 * John Mosquea
 * 9.8.24
 * Assignment 1
 * Introduction to Programming in C
 * Professor Juan 
 * It includes functions to compute distance, perimeter, area, width, and height of the circle.
 */

#include <stdio.h>
#include <math.h>

#define PI 3.14159

//models of the function
int main(void);
double getInput(void);
double calculateDistance(void);
double calculatePerimeter(void);
double calculateArea(void);
double calculateWidth(void);
double calculateHeight(void);

// Main function
int main(void) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
// Function to get user input
double getInput(void) {
    double value;
    printf("Enter a value: ");
    scanf("%lf", &value);
    return value;
}
// calculate distance between two points
double calculateDistance(void) {
    double x1, y1, x2, y2;
    printf("Enter coordinates for Point #1:\n");
    printf("x1 = ");
    x1 = getInput();
    printf("y1 = ");
    y1 = getInput();
    printf("Enter coordinates for Point #2:\n");
    printf("x2 = ");
    x2 = getInput();
    printf("y2 = ");
    y2 = getInput();

    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    return distance;
}
//  calculate perimeter of the circle
double calculatePerimeter(void) {
    double diameter = calculateDistance();
    double perimeter = PI * diameter;
    printf("The perimeter of the circle is %.2f\n", perimeter);
    return 3.0; 
}
// Function to calculate area of the circle
double calculateArea(void) {
    double diameter = calculateDistance();
    double radius = diameter / 2;
    double area = PI * radius * radius;
    printf("The area of the circle is %.2f\n", area);
    return 2.0; 
}
// find width of the circle
double calculateWidth(void) {
    double x1, x2;
    printf("Enter the x-coordinates for Point #1 and Point #2:\n");
    printf("x1 = ");
    x1 = getInput();
    printf("x2 = ");
    x2 = getInput();
    double width = fabs(x2 - x1);
    printf("The width of the circle is %.2f\n", width);
    return 1.0; 
}
// Function to calculate height of the circle
double calculateHeight(void) {
    double y1, y2;
    printf("Enter the y-coordinates for Point #1 and Point #2:\n");
    printf("y1 = ");
    y1 = getInput();
    printf("y2 = ");
    y2 = getInput();
    double height = fabs(y2 - y1);
    printf("The height of the circle is %.2f\n", height);
    return 1.0; 
}
