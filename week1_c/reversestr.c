#include <stdio.h>
int main() {
    char mystr[20];
    printf("Enter string");
    scanf("%s",mystr);
    int length=0;
    while(mystr[length] != '\0'){
        length++;
    }
    for( int i=length-1; i>=0 ;i--) {
        printf("%c",mystr[i]);
    }
    printf("\n");

}
