/*Να γραφεί συνάρτηση η οποία θα ελέγχει αν σε ένα πίνακα χαρακτήρων βρίσκεται μία συγκεκριμένη τιμή.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find(char arr[], char let);

int main(void){

    char arr[] = "Test";

    char let = 'k';

    int found = find(arr, let);

    if (found == 1){
        printf("Not Found");
    } else {
        printf("Found");
    }
}

int find(char arr[], char let){

    for(int i = 0; i < strlen(arr); i++){

        if (arr[i] == let){
            return 0;
        }
    }
    return 1;
}