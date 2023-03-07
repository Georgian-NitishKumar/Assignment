#include <stdio.h>
int main()
{
    float radius, area;
    printf("Enter radius of circle is : ");
    scanf("%f", &radius);
    area = 3.1415 * radius * radius;
    printf("The area of circle is:%.2f\n", area); // .2 means two deciamal number thak
    return 0;
}