/*Να γραφεί συνάρτηση η οποία θα λύνει την πρωτοβάθμια εξίσωση. Η συνάρτηση θα επιστρέφει (στο όνομά της) 0 αν έχει λύση, 
1 αν είναι αδύνατη και δύο αν είναι αόριστη. Σε περίπτωση που έχει λύση θα επιστρέφει και τη ρίζα.*/

#include <stdio.h>

int ex(float a, float b,float *j);

int main(void){

    float a, b, j;

    scanf("%f%f", &a,&b);

    int r = ex(a,b, &j);

    if (r == 0){

        printf("%f", j);
    } else if (r == 1){
        printf("ADYN");
    } else {
        printf("AORIST");
    }
    return 0 ;
}

int ex(float a, float b,float *j){

    if (a == 0){
        if (b == 0){
            return 2;
        }
        return 1;
    } 

    *j = -b/a;
    return 0;
}