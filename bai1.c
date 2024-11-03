#include <stdio.h>
#include <math.h>

/* tinh s(n) = 1 * 3 + 2 * 4 + 3 * 5 + ... + n.(n+ 2)*/

int main(){
    int t;
    scanf("%d\n", &t);

    for (int i = 0; i < t; i++){
        int s = 0;
        int n;
        scanf("%d", &n);
        for (int x = 1; x <= n; x++){
          s += x * (x+2);           
        }
        printf("%d\n", s);
    }
}