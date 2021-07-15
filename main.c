#include <stdio.h>
#include <stdlib.h>

/*When calling a function that returns something, define the function before it is called*/
double cube(double num) { /*note the input validation (double num) & the function name (cube)*/
    double result = num * num * num;
    return result;

/*Could also write:
double cube(double num)
    return num * num * num;;
*/

}

int main() /*main function is a special function that ALWAYS gets called*/
{
    /*https://www.youtube.com/watch?v=KJgsSFOSQv0&t*/
    printf("===Return Statements===\n\n");
    printf("Answer: %f\n\n", cube(3.0));

    return 0;
}
