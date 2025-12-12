
#include <stdio.h>
#include <windows.h>

int main() {

    int noten[5] = {2, 3, 4, 1, 2};
    int notenAnzahl = 5;

    int werte[10];
    werte[7] = 42;

    for(int i = 0; i < notenAnzahl; i++) {
        printf("Note an Position %d ist %d\n", i, noten[i]); 
    }

    for(int i = 0; i < notenAnzahl; i++) {
        noten[i] = 0;
    }

    for(int i = 0; i < notenAnzahl; i++) {
        printf("Note an Position %d ist %d\n", i, noten[i]);
    }

    return 0;
}