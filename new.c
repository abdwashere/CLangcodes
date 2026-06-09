#include<stdio.h>

int main(){

    int quantity = 0;
    float price = 0.0f;
    char item[50] = "";
    char currency = '$';
    float total = 0.0f;

    printf("what item would you like to buy? ");
    fgets(item, sizeof(item), stdin);
    printf("what is the price of each item? ");
    scanf("%f", &price);
    printf("how many would u like? ");
    scanf("%d",&quantity);
    
    total = price * quantity;

    printf("\nyouve bought %d %s\n",quantity, item);
    printf("total is %c%.2f\n", currency, total);
    
    return 0;
}