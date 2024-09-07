#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput(const char *prompt);

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

double calculateDistance() {
    double x1, y1, x2, y2;
    
    x1 = askForUserInput("Enter x1: ");
    y1 = askForUserInput("Enter y1: ");
    x2 = askForUserInput("Enter x2: ");
    y2 = askForUserInput("Enter y2: ");
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    
    return distance;
}

double calculatePerimeter() {
    double width = calculateWidth();
    double height = calculateHeight();
    
    double perimeter = 2 * (width + height);
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", askForUserInput("Enter x1: "), askForUserInput("Enter y1: "));
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", askForUserInput("Enter x2: "), askForUserInput("Enter y2: "));
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    
    return 4.0; // Difficulty rating
}

double calculateArea() {
    double width = calculateWidth();
    double height = calculateHeight();
    
    double area = width * height;
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", askForUserInput("Enter x1: "), askForUserInput("Enter y1: "));
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", askForUserInput("Enter x2: "), askForUserInput("Enter y2: "));
    printf("The area of the city encompassed by your request is %.2f\n", area);
    
    return 4.0; // Difficulty rating
}

double calculateWidth() {
    double x1, y1, x2, y2;
    
    x1 = askForUserInput("Enter x1: ");
    y1 = askForUserInput("Enter y1: ");
    x2 = askForUserInput("Enter x2: ");
    y2 = askForUserInput("Enter y2: ");
    
    double width = x2 - x1;
    if (width < 0) {
        width = -width; // Make width non-negative
    }
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    
    return 4.0; // Difficulty rating
}

double calculateHeight() {
    double x1, y1, x2, y2;
    
    x1 = askForUserInput("Enter x1: ");
    y1 = askForUserInput("Enter y1: ");
    x2 = askForUserInput("Enter x2: ");
    y2 = askForUserInput("Enter y2: ");
    
    double height = y2 - y1;
    if (height < 0) {
        height = -height; // Make height non-negative
    }
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    
    return 4.0; // Difficulty rating
}

double askForUserInput(const char *prompt) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}
