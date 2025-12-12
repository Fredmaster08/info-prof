
#include <stdio.h>
#include <string.h>


typedef struct {
        char name[30];
        int alter;
        float groesse;
    }Person;


int main() { 

    Person personen[3] = {
        {"Lissi", 21, 1.21},
        {"Tim", 18, 1.90},
        {"Frut", 60, 1.85}
    };

    int anzahlPersonen = 3;

    for(int i = 0; i < anzahlPersonen; i++) {
        printf("%s ist %d Jahre alt und %.2fm gross.\n", personen[i].name, personen[i].alter, personen[i].groesse);
    }


    return 0;
}