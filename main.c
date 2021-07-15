#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*:::THIS IS A TEST:::*/

    printf("===Mad Libs Game===\n\n");
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
