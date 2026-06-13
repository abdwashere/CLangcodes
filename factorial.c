#include<stdio.h>

void main(){


    int x;
    long long fact =1;

    printf("enter number ");
    scanf("%d",&x);


    for(int i=1; i<=x; i++){
        fact = fact * i;
    }

    printf("factorial of %d is %d", x, fact);


}