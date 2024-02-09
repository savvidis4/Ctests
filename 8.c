/*Να γραφεί συνάρτηση η οποία θα δέχεται ως όρισμα έναν πίνακα χαρακτήρων 
και θα επιστρέφει τη συχνότητα του κάθε κεφαλαίου χαρακτήρα του λατινικού αλφάβητου μέσα σε αυτόν.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int *find(char *arr);

int main(void){

    char *arr = "RTkvmGNBNNgGTBBBZZZZ";
    int *syc = find(arr);

    for (int i = 0; i< 26; i++){

        printf("%c %d\n", 65+i, syc[i]);
    }
    free(syc);
    return 0;
}

int *find(char *arr){

    int *syc = (int*) malloc(26 * sizeof(int));

    for (int i = 0; i < 26; i++){
        syc[i] = 0;
    }

    int len = strlen(arr);

    for (int i = 0; i < len; i++){

        if (arr[i] >= 65 && arr[i] <= 91){
            int thesi = arr[i] - 65;
            syc[thesi]++;
        }
    }
    return syc;
}