#include <stdio.h>
int main() {
    int a;
    printf("Welcome to Starbucks.Please choose from the following options!\n");
    printf("1. Latte\n2. Cappucino\n3. Mocha\n4. Espresso\n5. Flat White\n ");
    scanf("%d",&a);
    switch (a){ 
        case 1: printf ("You have selected Latte. Please wait as your order is being prepared :)\n");
        break;
        case 2: printf ("You have selected Cappucino. Please wait as your order is being prepared :)\n");
        break;
        case 3: printf ("You have selected Mocha. Please wait as your order is being prepared :)\n");
        break;
        case 4: printf ("You have selected Espresso. Please wait as your order is being prepared :)\n");
        break;
        case 5: printf ("You have selected Flat White. Please wait as your order is being prepared :)\n");
        break;
        default: printf ("The item you've chosen is unavailable right now. Sorry :(\n");
        }
    }