#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *input = fopen("demgao.inp", "r");
    FILE *output = fopen("demgao.out", "w");


    int a, b, k, sg = 0;
    fscanf(input, "%d %d %d", &a, &b, &k);
    for(int i = a; i <= b; i++){
        if(i % k == 0){
            sg++;
        }
    }

    fprintf(output, "%d", sg);


    fclose(input);
    fclose(output);

} // run test cases pls, limit is one second