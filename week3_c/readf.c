#include <stdio.h>
int main() {
    char filename[] = "data.txt";
    FILE *file= fopen(filename,"r");
    if (file==NULL){
        perror("");
        return 1;
    }

    int buffersize=10;
    char buffer[buffersize];
    while (fgets(buffer,buffersize,file) != NULL ){
        printf("%s",buffer);
    }

  
    fclose(file);
    return 0;
}