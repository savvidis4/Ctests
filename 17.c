/*Να γραφεί συνάρτηση η οποία θα επιστρέφει ένα τυχαίο ακέραιο αριθμό μεταξύ δύο ορίων που δίνονται ως ορίσματα.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint(int lower, int upper);

int main(void){

    int m = randint(15,17);
    printf("%d", m);
}

int randint(int lower, int upper){

    srand(time(NULL));

    int randomnum = (rand() % (upper - lower + 1)) + lower;

    return randomnum;
}