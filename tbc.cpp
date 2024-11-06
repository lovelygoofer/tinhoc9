#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *inpFile = fopen("tbc.inp", "r");
    if (inpFile == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    FILE *outFile = fopen("TBC.OUT", "w");
    if (outFile == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }

    int n;
    int b[1000];
    fscanf(inpFile, "%d\n", &n); 
    for (int i = 0; i < n; i++){
        fscanf(inpFile, "%d", &b[i]);
    }

    int a[1000];
    a[0]= b[0];
    int sum = a[0];

    for (int x = 1; x < n; x++){
        a[x] =  b[x] * (x+1) - sum;
        sum += a[x];
    } 

    for (int gg = 0; gg < n; gg++){
        fprintf(outFile, "%d ", a[gg]);
    }







    fclose(inpFile);
    fclose(outFile);

}  // just check it for me