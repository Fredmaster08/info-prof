
#include <stdio.h>

void print_array(int array[], int arrayLaenge) {
    for(int i = 0; i < arrayLaenge; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void verdoppeln(int array[], int arrayLaenge) {
    for(int i = 0; i < arrayLaenge; i++) {
        array[i] = array[i] * 2;
    }   
}

int main() {

    int zahlen[] = {3, 6, 9, 12};
    int zahlenLaenge = 4;

    print_array(zahlen, zahlenLaenge);

    verdoppeln(zahlen, zahlenLaenge); 
     
    print_array(zahlen, zahlenLaenge);

    return 0;
}