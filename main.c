#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*https://www.youtube.com/watch?v=KJgsSFOSQv0&t*/
    printf("\n\n===Arrays===\n\n");

    int luckyNumbers[] = {4, 8, 15, 16, 23}; /*this is an array*/
    printf("%d\n", luckyNumbers[0]); /*0-index like python | prints '4'*/
    printf("%d\n", luckyNumbers[1]); /* prints '8'*/

    /*reassigning values at specific indices*/
    luckyNumbers[1] = 200;
    printf("%d\n\n", luckyNumbers[1]); /* prints '200'*/

    int unknownArray[10];
    unknownArray[1] = 80;
    unknownArray[0] = 90;
    printf("%d", unknownArray[0]);

    printf("\n\n===Mad Libs Game===\n\n");
    char color[20];
    char pluralNoun[20];
    char celebrityFirst[20];
    char celebrityLast[20];
    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity name: ");
    scanf("%s%s", celebrityFirst, celebrityLast); /*first & last*/
    /*AGAIN: Note that the ampersand is not used for strings*/

    printf("\n\nRoses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityFirst, celebrityLast); /*first & last*/



    printf("\n===Simple Calculator w/ Integers===\n\n");
    int num1;
    int num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second Number: ");
    scanf("%d", &num2);

    printf("Answer : %d", num1 + num2);

    printf("\n\n===Simple Calculator w/ Doubles===\n\n");

    double num3;
    double num4;
    printf("Enter first number: ");
    scanf(" %lf", &num3);
    printf("Enter second Number: ");
    scanf(" %lf", &num4);
    printf("Answer : %f", num3 + num4);

    printf("\n\nNOTE: For 'printf' use '%%f' to represent a double but...\nFor 'scanf' use '%%lf' to represent a double.\n\n");

    return 0;
}
