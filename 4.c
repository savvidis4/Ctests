/*Να γραφεί συνάρτηση η οποία θα δεσμεύει έναν δυναμικό πίνακα double αριθμών Ν θέσεων και θα τον αρχικοποιεί με την τιμή L.*/

#include <stdio.h>
#include <stdlib.h>

#define N 5
#define L 9

int main(void){

    double *arr = (double*) malloc(N * sizeof(double));

    for (int i = 0; i < N; i++){

        arr[i] = L;

        printf("%lf\n",arr[i]);
    }

    free(arr);

    return 0;
}