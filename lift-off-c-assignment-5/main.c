
#include <stdio.h>

int main()
{
    float r, diameter, circumference, area;
    
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    
    diameter = 2 * r;
    circumference = 2 * 3.14 * r;
    area = 3.14 * (r* r);
    
    printf("Diamter of circle = %.2f units \n", diameter);
    printf("Circumference of circle = %.2f units \n", circumference);
    printf("Area of circle = %.2f sq. units", area);

    return 0;
}

