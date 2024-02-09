/*Να γραφεί πρόγραμμα το οποίο θα διαβάζει ένα αρχείο κειμένου χαρακτήρα - χαρακτήρα
και στο τέλος θα τυπώνει τους χαρακτήρες που υπάρχουν σε αυτό και τις συχνότητές τους.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    FILE *file = fopen("test.txt", "r");

    char *line = malloc(256);

    int let = 0;

    int *freq = calloc(52, sizeof(int));

    while (fgets(line, 256, file)){

        line[strcspn(line,"\n")] = '\0';

        int i = 0;

        while (line[i]){

            if (line[i] >= 65 && line[i] <= 90){

                freq[line[i] - 65]++;
                
            } else if (line[i] >= 97 && line[i] <= 122){

                freq[line[i] - 71]++;
            }

            i++;
        }
    }

    for (int i = 0; i < 52; i++){

        if (freq[i] != 0){
            if (i < 26){
                printf("%c %d\n", i + 65, freq[i]);
            } else {
                printf("%c %d\n", i + 71, freq[i]);
            }
        }
    }
    fclose(file);
    free(line);
    free(freq);
}