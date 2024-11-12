#include <stdio.h>
#include <stdlib.h>

/* find amount of c numbers that is compatible to make a triangle */

int main(){
    FILE *inputFile = fopen("tamgiac.inp", "r");
    FILE *outputFile = fopen("tamgiac.out", "w");
    int a, b, c = 0;
    fscanf(inputFile,"%d %d", &a, &b);

    for(int i = 2; i < a + b; i++){
        c++;
    }

    fprintf(outputFile, "%d", c);



    fclose(inputFile);
    fclose(outputFile);
}