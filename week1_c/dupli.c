#include <stdio.h>

int main() {
    int arr[6] = {1,2,3,4,4,3};
    for (int i=0; i<6; i++) {
        for (int j=i+1; j<6 ;j++){
            if (arr[i] == arr[j]){
                printf("Duplicate: %d\n", arr[i]);
            }
        }
    }
}