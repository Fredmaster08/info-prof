
#include <stdio.h>

int main() {

    FILE* f = fopen("personen.csv", "r");

    if(f == NULL) {
        printf("Fehler beim erhalten der Datei.");
        return 1;
    }

    char kopfZeile[200];
    fgets(kopfZeile, sizeof(kopfZeile), f);

    int id, alter;
    char name[10];
    char vorname[10];
    float groesse;

    int counter = 0;

    while(
        fscanf(f, "%d , %29[^,] , %29[^,] , %d , %f", &id, name, vorname, &alter, &groesse) == 5
    ) {
        printf("ID: %d | %s %s | Alter: %d | Groesse: %.2fm\n", id, name, vorname, alter, groesse);
        counter++;
    }

    if(counter > 1) {
        printf("Es wurden %d Datensaetze eingelesen.\n", counter);
    }
    else{
        printf("Es wurde 1 Datensaetz eingelesen.\n", counter);
    }

    fclose(f);
    
    return 0;
}
