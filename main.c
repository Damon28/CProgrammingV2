#include <stdio.h>
#include <stdlib.h>

/*https://www.youtube.com/watch?v=KJgsSFOSQv0&t*/

int main()
{
    printf("===Pointers===\n\n");

    int age = 30;
    int * pAge = &age; /*This is a "int pointer variable"*/

    double gpa = 3.4;
    double * pGpa = &gpa; /*This is a "double pointer variable"*/

    char grade = 'A';
    char * aGrade = &grade; /*This is a "char pointer variable"*/

    printf("age's memory address: %p\n", &age);

    /*pointer is the memory address*/

    return 0;
}
