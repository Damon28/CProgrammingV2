#include <stdio.h>
#include <stdlib.h>

/*https://www.youtube.com/watch?v=KJgsSFOSQv0&t*/

/*
and = &&
or = ||
*/

int max(int num1, int num2, int num3){
    int result;
    if(num1 >= num2 && num1 >= num3){ /*NOTE the ampersand symbols*/
        result = num1;
    } else if(num2 >= num1 && num2 >= num3){ /*note 'else if' statement*/
        result = num2;
    } else { /*Note 'else' statement*/
        result = num3;
    }
}

int main()
{
    printf("===If/Else Statements===\n\n");

    printf("%d\n\n", max(60, 70, 80));

    if(3 < 2 || 2 > 5){ /*Note the 'or' sign (||).*/
        printf("True");
    } else {
        printf("False")
    }

    return 0;
}
