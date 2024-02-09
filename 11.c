/*Να γραφεί συνάρτηση που θα δέχεται τους βαθμούς Μ φοιτητών σε Ν μαθήματα και θα επιστρέφει τον μέσο όρο του κάθε φοιτητή. 
Ο μέσος όρος θα υπολογίζεται μόνο στα περασμένα μαθήματα*/

#include <stdio.h>

#define N 4
#define M 3

float *mo(int mathites, int vathmoi[]){

    int j, i, sum;
    float *mo = malloc(N * sizeof(float));

    for (j = 0; j < M; j++){

        sum = 0;

        for(i = 0; i < N; i++){

            if (vathmoi[i] >= 10){

                sum += vathmoi[i];
            }
        }

        mo[j] = sum / N;
    }
    return mo;
}