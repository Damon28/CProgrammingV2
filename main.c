#include <stdio.h>
#include <stdlib.h>

/*https://www.youtube.com/watch?v=KJgsSFOSQv0&t*/

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;

};

int main()
{
    printf("===Structs===\n\n");

    printf("struct - data structure where we can store groups of data types\n");
    printf("like a list/array in python\n\n");

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    /*string is an array of values so you can't just do student1.name = "Jim"
    use strcpy() function*/
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Business");

    struct Student student2;
    student2.age = 30;
    student2.gpa = 4.0;
    /*string is an array of values so you can't just do student1.name = "Jim"
    use strcpy() function*/
    strcpy(student2.name, "Pam");
    strcpy(student2.major, "Business");

    printf("%f\n", student1.gpa);
    printf("%s\n\n", student1.name);
    printf("%f\n", student2.gpa);
    printf("%s\n\n", student2.name);

    return 0;
}
