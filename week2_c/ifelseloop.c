#include <stdio.h>
int main() {
    int mark;
    printf("Enter Marks: ");
    scanf("%d",&mark);
    if (mark<=100 && mark>=0){
        if (mark >= 40){ 
        printf ("The mark of %d is a PASS\n", mark);
        }
    else if (mark==0){ 
        printf ("The mark of %d is a ZERO\n", mark);
        }
    else { 
        printf ("The mark of %d is a FAIL\n", mark);
        }
    }
    else {
        printf("Please enter a valid mark\n");
    }
    
    return 0;
    }