#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *inp = fopen("bai1.inp", "r");
    FILE *out = fopen("bai1.out", "w");

    int a, b, k;
    fscanf(inp, "%d %d %d", &a, &b, &k);

    if (k % 2 != 0){
        fprintf(out, "NO");
        return 0;
    }


    int doan[10000];

    for (int i = 0; i <= b - a + 1; i++){
        doan[i] =  a + i;
    }

    int sum = 0;
    for(int x = a; x <= b; x++){
        if (k%x == 0){
            sum++;
        }
    }

    if (sum % 2 == 0){
        fprintf(out, "YES");
    } else {
        fprintf(out, "NO");
    }

    fclose(inp);
    fclose(out);

    //run 5 test cases with my code please, it's already within limitations
}