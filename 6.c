/*Να γραφεί συνάρτηση η οποία θα επιστρέφει τον μεγαλύτερο και τον μικρότερο αριθμό που βρίσκεται σε ένα ακέραιο πίνακα Ν θέσεων.*/

#include <stdio.h>
#include <stdlib.h>

#define N 3

void find(int *arr, int *meg, int *mik);

int main(void){

    int *arr = (int*) malloc(N * sizeof(int));

    arr[0] = 20;
    arr[1] = 30;
    arr[2] = 10;

    int meg = arr[0], mik = arr[1];

    find(arr, &meg, &mik);

    printf("%d %d", meg, mik);

    free(arr);

    return 0;
}

void find(int *arr, int *meg, int *mik){

    for (int i = 0; i < N; i++){

        if (arr[i] > *meg){
            *meg = arr[i];
        }
        if (arr[i] < *mik){
            *mik = arr[i];
        }
    }
}