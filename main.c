#include <stdio.h>
#include <math.h>

int main()
{
    // MATH PROGRAM
    const double PI = 3.1459;
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("Area of a circle: %.2lf\n", area);
    printf("Surface Area of a circle(sphere): %.2lf\n", surfaceArea);
    printf("Volume of a circle: %.2lf\n", volume);

    return 0;
}