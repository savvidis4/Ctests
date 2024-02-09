/*Να γραφεί πρόγραμμα το οποίο θα διαβάζει το αρχείο της προηγούμενης άσκησης, 
θα καταγράφει τα στοιχεία σε δυναμικά ορισμένο πίνακα και θα τυπώνει τα στοιχεία στην οθόνη.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Proion{

    char* code;
    char* desc;
    char* price;
};
typedef struct Proion Proion;


int main(void){

    FILE *file = fopen("test15.txt", "r");

    char *lines = malloc(256);

    int i = 0, N;

    fgets(lines, 256, file);
    
    N = atoi(lines);
    
    

    Proion *items = malloc(N * sizeof(Proion));

    for(int i = 0; i < N; i++){
        fgets(lines, 256, file);

        lines[strcspn(lines,"\n")] = '\0';

        items[i].code = strdup(strtok(lines, " "));
        items[i].desc = strdup(strtok(NULL, " "));
        items[i].price = strdup(strtok(NULL, "\n"));
    }

    for (int k = 0; k < N; k++){

        printf("%s %s %s\n", items[k].code, items[k].desc, items[k].price);

        free(items[k].code);
        free(items[k].desc);
        free(items[k].price);
    }

    free(lines);
    free(items);

    fclose(file);

    
}