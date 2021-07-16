#include <stdio.h>
#include <stdlib.h>

/*https://www.youtube.com/watch?v=KJgsSFOSQv0&t*/

int main()
{
    printf("===Switch Statements===\n\n");
    printf("It's an 'if statement' that allows you to compare one value to many others.");

    char grade = 'A';
    
    switch(grade){
    case 'A':
        printf("You did great!");
        break;
    case 'B':
        printf("You did alright!");
        break;
    case 'C':
        printf("You did poorly");
        break;
    case 'D':
        printf("You did very bad!");
        break;
    case 'F':
        printf("You Failed!");
        break;
    default :
        printf("Invalid Grade");
    }
    
    return 0;
}
