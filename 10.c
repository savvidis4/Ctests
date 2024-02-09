/*Να γραφεί συνάρτηση η οποία θα δέχεται ως όρισμα ένα ταξινομημένο πίνακα πραγματικών αριθμών και θα τοποθετεί σε αυτόν ένα πραγματικό αριθμό, 
ο οποίος, επίσης, δίδεται ως όρισμα και θα τον τοποθετεί στην κατάλληλη θέση ώστε ο πίνακας να παραμένει ταξινομημένος. 
Για την υλοποίηση της άσκησης δεν θα εκτελεστεί ταξινόμηση. */

#include <stdio.h>
#include <stdlib.h>

void put(float arr[], float a, int size);

int main(void){

    float arr[] = {2,3,4,5,7}, a;

    scanf("%f", &a);

    int size = sizeof(arr) / sizeof(arr[0]);

    put(arr, a, size);
    
    for (int i = 0; i < 6; i++){
        printf("%f\n",arr[i]);
    }
    
    return 0;
}

void put(float arr[], float a, int size){

    int i = size - 1;

    while (i >= 0 && arr[i] > a){

        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = a;

}
