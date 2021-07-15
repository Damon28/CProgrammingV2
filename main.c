#include <stdio.h>
#include <stdlib.h>

/*https://www.youtube.com/watch?v=KJgsSFOSQv0&t*/

/*When calling a function that returns something, define the function before it is called
This is called prototyping which allows you to define a function after it is called*/
double cube(double num);

int main()
{
    printf("===Return Statements===\n\n");
    printf("Answer: %f\n\n", cube(3.0)); /*CALLED HERE*/

    return 0;
}

double cube(double num) { /*DEFINED HERE*/
    return num * num * num;
}
