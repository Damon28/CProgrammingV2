#include <stdio.h>
#include <stdlib.h>

int main() /*main function is a special function that ALWAYS gets called*/
{
    /*https://www.youtube.com/watch?v=KJgsSFOSQv0&t*/
    sayHi("Mike", 29); /*calls the function below*/
    /*the string above is passed to the name variable below*/
    sayHi("Tom", 18);
    sayHi("Oscar", 19);

    return 0;
}

void sayHi(char name[], int age){ /*'void' means that the function does NOT return any info*/
    /*the above shows that sayHi takes a string & stores it into the 'name' variable*/
    printf("Hello %s, you are %d.\n\n", name, age);
}
