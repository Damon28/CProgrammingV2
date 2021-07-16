#include <stdio.h>
#include <stdlib.h>

/*https://www.youtube.com/watch?v=KJgsSFOSQv0&t*/

int main()
{
    printf("===Dereferencing Pointers===\n\n");

    int age = 30;
    int *pAge = &age;

    printf("%p", pAge); /*this is a pointer location for 30*/
    printf("\n\nWhen dereferencing, you are actually going to that memory location & grabbing the value\n");

    printf("%d", *pAge); /*This will grab/print '30'*/

    printf("\n\nDereferencing using asterisk (*) and ampersand (&).\n\n");

    printf("%d\n", &age); /*30*/
    printf("%d\n", *&age); /**the star is dereferencing*/
    printf("%d\n", &*&age); /*30*/
    printf("%d\n", *&*&age); /*Memory Address*/

    return 0;
}
