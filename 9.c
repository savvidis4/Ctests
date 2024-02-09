/*Να γραφεί συνάρτηση η οποία θα δέχεται έναν πίνακα χαρακτήρων και στο περιεχόμενό του θα μετατρέπει τα πεζά γράμματα σε κεφαλαία 
και τα κεφαλαία σε πεζά (λατινικοί χαρακτήρες). Όλοι οι άλλοι χαρακτήρες θα μένουν αναλλοίωτοι.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *find(char *arr);

int main(void){

    char *arr = "RTkvmGNBN//NgGTBB";
    arr = find(arr);

    
    printf("%s\n",arr);
    

    free(arr);
    return 0;
}

char *find(char *arr){

    int len = strlen(arr);
    char *t = malloc (strlen(arr)+1);

    for (int i = 0; i < len; i++){

        if (arr[i] >= 65 && arr[i] <= 91){
            t[i] = arr[i] + 32;
        } else if (arr[i] >= 97 && arr[i] <= 122){
            t[i] = arr[i] - 32;
        } else {
            t[i] = arr[i];
        }
        
    }
    return t;
}