/*Να γραφεί συνάρτηση η οποία θα γεμίζει έναν πίνακα χαρακτήρων με τυχαίες μοναδικές τιμές.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(char *arr);

int main(void){

    char *arr = malloc(8);

    fill(arr);

    printf("%s", arr);
    return 0;
}

void fill(char *arr){

    srand(time(NULL));

    int *numbers = malloc(8*sizeof(int));
    int ex = 0;

    for (int i = 0; i < 8; i++){

        do{

            ex = 0;

            int ran = (rand() % 106) + 20;

            for (int j = 0; j < i+1; j++){

                if ((char) ran == arr[j]){
                    ex = 1;
                }
            }

            arr[i] = (char) ran;

        }while (ex != 0);
    }
    return;
}