/*Να γραφεί συνάρτηση η οποία θα τοποθετεί σε έναν πίνακα ακεραίων Ν θέσεων τους Ν πρώτους αριθμούς της ακολουθίας Fibonacci.*/

#include <stdio.h>
#include <stdlib.h>

#define N 15

int *fib();

int main(void){

    int *arr = fib();
    for (int i = 0; i<N; i++){

        printf("%d\n", arr[i]);
    }
    free(arr);
    return 0;
}

int *fib(){

    int *arr = (int*) malloc(N * sizeof(int));
    
    if (N == 1){

        arr[0] = 0;

    } else {

        arr[0] = 0;
        arr[1] = 1;

        for (int i = 2; i < N; i++){

            arr[i] = arr[i-1] + arr[i-2];
        }  

    } 
    return arr;
}