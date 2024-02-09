/*Να γραφεί συνάρτηση η οποία θα επιστρέφει την διαφορά του ASCII κωδικού ενός πεζού λατινικού χαρακτήρα από τον αντίστοιχο κεφαλαίο.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int find(char ch);

int main(void){

    char ch;
    scanf("%c", &ch);

    int d = find(ch);

    printf("%d", d);

    return 0;
}

int find(char ch){
    int up = toupper(ch);
    int lo = tolower(ch);
    int d = lo - up;
    return d;
}