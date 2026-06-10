#include <stdio.h>
#include <conio.h>
float multiply(float a, float b) {
    return a * b;
}

float add(float a, float b){
    return a+b;
}

float subtract(float a, float b){
    return a-b;
}

float divide(float a, float b){
    if(b==0){
        printf("cannot divide by 0\n");
        return 0;
    }
    else    
        return a/b;
}


int main() {

    char choice;

    do {

    float a, b;
    char operator;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("select the operator (+,-,*,/): ");
    scanf(" %c", &operator);

    switch(operator){

        case '+':
        printf("The sum of %.2f and %.2f is %.2f", a, b, add(a, b));
        break;

        case '-':
        printf("The difference of %.2f and %.2f is %.2f", a, b, subtract(a, b));
        break;

        case '*':
        printf("The product of %.2f and %.2f is %.2f", a, b, multiply(a, b));
        break;

        case '/':
        printf("The division of %.2f and %.2f is %.2f", a, b, divide(a, b));
        break;

        default:
        printf("enter a valid operator");
    }

    printf("do u want another calculation? (y/n)? ");
    printf(" %c", &choice);

    }while(choice == 'y'  || choice == 'Y');

    getch();

}