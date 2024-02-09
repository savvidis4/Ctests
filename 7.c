/*Να γραφεί συνάρτηση η οποία θα επιστρέφει τους δύο μικρότερους αριθμούς που βρίσκονται σε ένα πίνακα Ν θέσεων. 
Ο πίνακας θα σαρωθεί μόνο μία φορά.*/

#include <stdio.h>
#include <stdlib.h>

#define N 5

void find(int *arr, int *meg, int *mik);

int main(void){

    int mik, meg, *arr = (int*) malloc(N * sizeof(int));

    arr[0] = 20;
    arr[1] = 30;
    arr[2] = 10;
    arr[3] = 100;
    arr[4] = 5;

    if (arr[0] < arr[1]){

        mik = arr[0];
        meg = arr[1];
    } else {
        mik = arr[1];
        meg = arr[0];
    }

    find(arr, &meg, &mik);

    printf("%d %d", meg, mik);

    free(arr);

    return 0;
}


void find(int *arr, int *meg, int *mik){

    for (int i = 0; i < N; i++){

        if (arr[i] < *mik){
            *meg = *mik;
            *mik = arr[i];
        }
    }
}