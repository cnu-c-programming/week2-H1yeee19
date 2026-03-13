#include <stdio.h>

int main()
{
    int age;
    char grade;
    float gpa;

    scanf("%d %c %f", &age, &gpa, &grade);
    printf("%d %c %f\n", age, grade, gpa);

    return 0;
}
