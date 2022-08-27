/* WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format. */

#include<stdio.h>

int main()
{
    float r,a;

    printf("\n enter radius->");
    scanf("%f",&r);

    a=3.14*r*r;

    printf("Area of circle is %f having the radius %f",a,r);

    return 0;
}
