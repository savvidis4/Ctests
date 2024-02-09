/*Να γραφεί πρόγραμμα το οποίο θα υλοποιεί το παιχνίδι “Μάντεψε τον Αριθμό” με όρια τυχαίων αριθμών [1..100] και 7 προσπάθειες.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int i;
    
    // Use current time as seed for random generator
    srand(time(0));
    
    int arithmos;

    int s = 0;

    int number_to_guess = rand() % 101;
    printf("%d",number_to_guess);
    for (int i = 0; i < 7; i++){

        printf("mantepse arithmo.\n");

        scanf("%d", &arithmos);

        if (arithmos == number_to_guess){

            printf("congrats.\n");
            exit(0);
        } else if (arithmos > number_to_guess){
            printf("pio katw\n");
        } else{
            printf("pio panw\n");
        }

        s++;
        printf("lathos %d prospatheies menoun.\n", 7 - s);
    }
    printf("o arithmos itan o %d", number_to_guess);
    return 0;
}

