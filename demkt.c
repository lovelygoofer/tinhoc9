#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/* Nhap tu ban phim mot sau ki tu S. Hay in ra so luong
cac ki tu chu cai A co trong xau S */

int main(){
    char s[255];
    scanf("%s", s);

    int as = 0;
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == 'A'){
            as++;
        }
    }
    printf("%d", as);
}