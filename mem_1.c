
#include<stdio.h>
#include<stdlib.h>

struct circle
{
    int radius;
    float area;
    float circumference;
    // double a;
};

main()
{
    int a = 3;
    float *ptr;
    int size;

    // ptr = &a; static 
    struct circle c1;
    struct circle *ptr_c; // << 

    c1.radius = 5;
    c1.area = (22 / 7) * c1.radius * c1.radius;
    c1.circumference = 2 * (22/7) * c1.radius;

    printf("\nCircle - radius: %d area: %f circumference: %f", c1.radius, c1.area, c1.circumference);

    size = sizeof(struct circle); 
    // printf("\nThe size of struct circle on this computer is.. %d",size);

    ptr_c = (struct circle*) malloc(size);
    ptr_c->radius = 6;
    ptr_c->area = (22 /7) * ptr_c->radius * ptr_c->radius;
    ptr_c->circumference = 2 * (22 /7 ) * ptr_c->radius;

    printf("\nCircle - radius: %d area: %f circumference: %f", ptr_c->radius,ptr_c->area, ptr_c->circumference);

    // size = sizeof(float);
    // printf("The size of int on this computer is.. %d",size);

    // ptr = (float *) malloc(size);  // dynamic

    // *ptr = 6;
    // printf("\nptr = %f",*ptr);

}