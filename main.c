#include <stdio.h>
#include <stdlib.h>

/*https://www.youtube.com/watch?v=KJgsSFOSQv0&t*/

int main()
{
    printf("===Memory Addressing===\n\n");

    int age = 30; /*30 is stored in RAM at a specific physical location in memory*/
    double gpa = 3.4; /*3.4 is stored in RAM at a specific physical location in memory*/
    char grade = 'A'; /*'A' is stored in RAM at a specific physical location in memory*/

    printf("%p\n\n", &age); /*%p stands for "pointer". This'll print out the memory address of the value 30.*/
    printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);

    return 0;
}
