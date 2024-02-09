/*Να γραφεί πρόγραμμα το οποίο θα καταγράφει σε δυναμικά ορισμένο πίνακα δομών τα στοιχεία Ν προϊόντων. 
Στην συνέχεια θα σώζει τον πίνακα σε αρχείο κειμένου Στην πρώτη γραμμή του αρχείου θα καταγράφεται το πλήθος των εγγραφών που ακολουθούν. 
Για κάθε προϊόν θα καταγράφονται τα ακόλουθα στοιχεία: Κωδικός, Περιγραφή, Τιμή.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Proion{
    int code;
    char *desc;
    float price;
};
typedef struct Proion Proion;


int main(void){

    int N;
    scanf("%d", &N);

    Proion *items = malloc(sizeof(Proion) * N);

    FILE *file = fopen("test15.txt", "w");

    int i;

    fprintf(file, "%d\n", N);

    for (i = 0; i < N; i++){

        scanf("%d", &items[i].code);
        items[i].desc = malloc(256);
        scanf("%s", items[i].desc);
        scanf("%f", &items[i].price);


        fprintf(file, "%d %s %.2f\n", items[i].code, items[i].desc, items[i].price);
    }

    fclose(file);

    for (int i = 0; i < N; i++){
        free(items[i].desc);
    }

    free(items);
}