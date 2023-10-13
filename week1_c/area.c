#include <stdio.h>
int main() {
    float a,b,c;
    printf("Enter length: ");
    scanf("%f", &a);
    printf("Enter breadth: ");
    scanf("%f", &b);
    c=a*b;
    printf("The area of rect is %.2f\n", c);
    return 0;
}