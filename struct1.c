#include<stdio.h>

struct employee
{
    int age;
    char grade;
    float salary;
};

int main()
{
    struct employee s1;
    s1.age = 25;
    s1.grade = 'C';
    s1.salary = 10.000;

    printf("Age: %d, Grade: %c, Salary: %f", s1.age, s1.grade, s1.salary);

    s1.grade = 'D';
    printf("\nAge: %d, Grade: %c, Salary: %f", s1.age, s1.grade, s1.salary);
    
}
