#include <stdio.h>

int main(){
    double num1;
    double num2;
    double result;
    char act;

    printf("Hello to simple calculator made in C by Awwze! \n");
    printf("Choose your first number: ");
    scanf("%lf", &num1);
    printf("Choose your second number: ");
    scanf("%lf", &num2);

    printf("Nice, now choose your action (+ - * / ): \n");
    scanf("%c", act);

    switch(act){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result  = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
    }


}