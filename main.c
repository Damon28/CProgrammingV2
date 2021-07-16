#include <stdio.h>
#include <stdlib.h>

/*https://www.youtube.com/watch?v=KJgsSFOSQv0&t*/

int main()
{
    printf("===For Loops===\n\n");

    printf("===While Loop===\n\n");

    int i = 1;
    while(i <= 5){
        printf("%d\n", i);
        i++;
    }

    printf("===For Loop==\n\n");
    int d;
    for(d = 1; d <= 5; d++){ /*NOTE: the semi-colons between the things*/
        printf("%d\n", d);
    }

    printf("\n===Iterating with 'For Loops'===\n\n");
    int luckyNumbers[] = {4, 8, 15, 16, 23, 41};

    int x;
    for(x = 0; x < 6; x++){
        printf("%d\n", luckyNumbers[x]);
    }



    return 0;
}
