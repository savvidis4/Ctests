/*Να γραφεί πρόγραμμα το οποίο θα διαβάζει λέξη - λέξη ένα αρχείο κειμένου 
και θα τυπώνει την συχνότητα του κάθε κεφαλαίου λατινικού χαρακτήρα (στο συνολικό αρχείο) 
και το σύνολο των χαρακτήρων που δεν ήταν κεφαλαίοι λατινικοί 
(δεν θα υπολογίζονται τα κενά (spaces) και οι αλλαγές γραμμών. */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    FILE *file = fopen("test.txt", "r");

    char *line = malloc(256);

    int low_let = 0;

    int *freq = calloc(26, sizeof(int));

    while(fgets(line, 256, file)){

        line[strcspn(line, "\n")] = '\0';

        int i = 0;

        while (line[i]){

            if (line[i] >= 65 && line[i] <= 91){

                freq[line[i]-65]++;

            } else if (line[i] >= 97 && line[i] <= 122){

                low_let++;
            }
            i++;
        }
    }

    for (int i = 0; i < 26; i++){
        printf("%c %d\n", i + 65, freq[i]);
    }
    printf("%d", low_let);

    free(freq);
    free(line);

    fclose(file);
}