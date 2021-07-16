#include <stdio.h>
#include <stdlib.h>

/*https://www.youtube.com/watch?v=KJgsSFOSQv0&t*/

int main()
{
    printf("===2D Arrays & Nested Loops===\n\n");

    int nums[3][2] = {                                /*2 open/close bracket ([][])== 2D array*/
                    {1, 2},         /*First element in the 'nums' array*/
                    {3, 4},
                    {5, 6}
                    } ;

    printf("%d, ", nums[0][0]); /*1*/
    printf("%d\n\n", nums[1][1]); /*4*/

    int i, j; /*declaring 2 variables*/
    for(i = 0; i < 3; i++){
        for(j=0; j < 2; j++){
            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}
