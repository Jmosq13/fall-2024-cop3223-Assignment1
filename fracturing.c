
 // John Mosquea
 // 9.8.24
 // Assignment 1
 //assignment1_John_Mosquea.c-lm
 // Introduction to Programming in C
 // Professor Juan 
 // It includes functions to compute user inputs along w/ distance, perimeter, area, width, and height of the circle.
 
#include <stdio.h>
#include <math.h>

#define PI 3.14159

// models of the function
double getInput(const char *prompt);
double calculateDistance(double *x1, double *y1, double *x2, double *y2);
double calculatePerimeter(double diameter);
double calculateArea(double diameter);
double calculateWidth(double x1, double x2);
double calculateHeight(double y1, double y2);

int main(void) {
    double x1, y1, x2, y2;
    double distance;

    // receive coordinates from user
    printf("Enter coordinates for Point #1:\n");
    x1 = getInput("x1");
    y1 = getInput("y1");
    
    printf("Enter coordinates for Point #2:\n");
    x2 = getInput("x2");
    y2 = getInput("y2");

    // Calculate distance
    distance = calculateDistance(&x1, &y1, &x2, &y2);

    // show results
    printf("The distance between the two points is: %.2f\n", distance);
    printf("The perimeter of the circle is: %.2f\n", calculatePerimeter(distance));
    printf("The area of the circle is: %.2f\n", calculateArea(distance));
    printf("The width of the circle is: %.2f\n", calculateWidth(x1, x2));
    printf("The height of the circle is: %.2f\n", calculateHeight(y1, y2));

    return 0;
}

// Function to get user input with a prompt
double getInput(const char *prompt) {
    double value;
    printf("Enter %s: ", prompt);
    scanf("%lf", &value);
    return value;
}

// Calculate distance between two points
double calculateDistance(double *x1, double *y1, double *x2, double *y2) {
    return sqrt(pow(*x2 - *x1, 2) + pow(*y2 - *y1, 2));
}

// Calculate the perimeter of a circle given its diameter
double calculatePerimeter(double diameter) {
    return PI * diameter;
}

// Calculate the area of a circle given its diameter
double calculateArea(double diameter) {
    double radius = diameter / 2;
    return PI * radius * radius;
}

// find the width of the circle based on x coordinates
double calculateWidth(double x1, double x2) {
    return fabs(x2 - x1);
}

// Calculate the height of the circle based on y coordinates in order to end program
double calculateHeight(double y1, double y2) {
    return fabs(y2 - y1);
}
