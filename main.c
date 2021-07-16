#include <stdio.h>
#include <stdlib.h>

/*https://www.youtube.com/watch?v=KJgsSFOSQv0&t*/

int main()
{
    double num1;
    double num2;
    char op;
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter an operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ";
    scanf("%lf", &num2);
    
    if(op == '+'){
        printf("%d", num1 + num2);
    } else if(op == '-'){
        printf("%d", num1 - num2);
    } else if(op == '/'){
        printf("%d", num1 / num2);
    } else if(op == '*'){
        printf("%d", num1 * num2);
    } else {
        printf("Invalid Operator");
    }
    return 0;
}
