#include <stdio.h>
int main() {
    char filename[] = "data.txt";
    FILE *file= fopen(filename,"w");
    if (file==NULL){
        perror("");
        return 1;
    }

    int n,n_lines;
    printf("Enter number of inputs you want to write");
    scanf("%d",&n_lines);

    printf("Enter %d numbers", n_lines);
    for(int i=0; i<n_lines; i++) {
        scanf("%d",&n);
        fprintf(file,"%d\n",n);
    }

    fclose(file);
    return 0;
}