/*Να γραφεί συνάρτηση η οποία θα γεμίζει έναν πίνακα χαρακτήρων με τυχαίες τιμές.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(char* arr);

int main(void){

    char* arr = malloc(8);

    fill(arr);

    printf("%s", arr);
}

void fill(char* arr){

    srand(time(NULL));

    for (int i = 0; i < 8; i++){

        int randnum = (rand() % (106)) + 20;

        arr[i] = (char) randnum;
    }
    return;
}
