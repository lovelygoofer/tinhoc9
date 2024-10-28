#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/* Nhap tu ban phim so nguyen duong a. Hay tim va in ra man hinh so nguyen duong
b nho nhat sao cho a + b = mot so nguyen to. */

bool isPrime(int num);
int minValue(int min_value);
int main(){
    int a;
    scanf("%d", &a);
    int min_value = a;

    int primeNum = minValue(min_value);

    int b = primeNum - a;
    printf("%d", b);

    return 0;

}

int minValue(int min_value){
    int num = min_value + 1;

    while(1){
        if (isPrime(num)){
            return num;
        } num++;
    }

}

bool isPrime(int num){
    if (num < 2){
        return false;
    } 
    for (int i = 2; i < sqrt(num); i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}
//run 3 test cases against this code

