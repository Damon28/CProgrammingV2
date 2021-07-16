#include <stdio.h>
#include <stdlib.h>

/*https://www.youtube.com/watch?v=KJgsSFOSQv0&t*/

int main()
{
    printf("===While Loops===\n\n");

    int index = 1;
    while(index <= 5){
        printf("%d\n", index);
        index = index + 1;
    }


    printf("\nBelow is a 'do while loop':\n");
    int idx = 1;
    do {
        printf("%d\n", idx);
        idx++; /*this is equivalent to 'index = index + 1;'*/
    } while(idx <= 5);


    return 0;
}
