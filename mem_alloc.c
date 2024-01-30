#include<stdio.h>
#include<stdlib.h>

struct rectangle
{
    int length;
    int breadth;
    float area;
    float circumference;
}

main()
{
    int a = 6;
    int *ptr;

    struct rectangle rec_1;
    struct  rectangle *rec_ptr;
    {
        /* data */
    };
    

    ptr = (int *) malloc(sizeof(int));

    *ptr =  4;

    printf("Pointer value .. %d .. address .. %u", *ptr,ptr);

    rec_1.length = 6;
    rec_1.breadth = 5;

    rec_1.area = rec_1.length * rec_1.breadth;
    rec_1.circumference = 2 * (rec_1.length + rec_1.breadth);

    printf("\nArea : %f   Circumference : %f", rec_1.area, rec_1.circumference);

    rec_ptr = (struct rectangle*) malloc(sizeof(struct rectangle));
    rec_ptr->length = 8;
    rec_ptr->breadth = 6;
    rec_ptr->area = rec_ptr->length * rec_ptr->breadth;
    rec_ptr->circumference = 2 * (rec_ptr->length + rec_ptr->breadth);

    printf("\nArea2 : %f   Circumference2 : %f", rec_ptr->area, rec_ptr->circumference);
}