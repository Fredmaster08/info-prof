
#include <stdio.h>

typedef struct {
    int id;
    char vorname[10];
    char name[10];
    int alter;
    float groesse;
}person_t;

int main() {

    person_t personen[] = {
        {1, "Julia", "Lehmann", 24, 1.78},
        {2, "Maxi", "Muster", 21, 1.73},
        {3, "Bert", "Schmidt", 19, 1.85}
    };

    int personenAnzahl = 3;

    FILE* f = fopen("personen_output.csv", "w");

    if(f == NULL) {
        printf("Fehler beim Oeffnen der Datei.");
        return 1;
    }

    for(int i = 0; i < personenAnzahl; i++) {
        fprintf(f, "%d, %s %s, %d, %.2f\n", personen[i].vorname, personen[i].name, personen[i].alter, personen[i].groesse);
    }

    printf("Datei wurde geschrieben");

    return 0;
}