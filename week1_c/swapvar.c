#include <stdio.h>
int main() {
    int a,b,temp;
    printf("Enter first var");
    scanf("%d",&a);
    printf("Enter second var");
    scanf("%d",&b);
    printf("First:%d , Second: %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("First:%d , Second: %d\n",a,b);
    return 0;

}