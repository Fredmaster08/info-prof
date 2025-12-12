
#include <stdio.h>

int main() {

    int anzahl;
    char kundengruppe;
    float einzelpreis;
    float gesamtpreis; // wird ausgerechnet
    float rabattProzentAb10StueckA;
    float rabattProzentAb10StueckB;


    printf("Produktanzahl: ");
    scanf("%d", &anzahl);
    printf("Produktpreis: ");
    scanf("%f", &einzelpreis);
    printf("Kundengruppe: ");
    scanf(" %c", &kundengruppe);
    if(kundengruppe != 'A' && kundengruppe != 'B') {
        printf("Deine Eingabe der Kundegruppe war fehlerhaft. Nur A oder B ist erlaubt.\n");

        return -1;
    }
    else {
    }
        if(anzahl >= 10) {
            if(kundengruppe == 'B') {
            gesamtpreis = einzelpreis * anzahl * (1.0 - rabattProzentAb10StueckB / 100);
            }
            else{
                gesamtpreis = einzelpreis * anzahl * (1.0 - rabattProzentAb10StueckA / 100);
            }
        }
        else {
            gesamtpreis = einzelpreis * anzahl;
        }
        printf("Gesamtpreis: %.2f\n", gesamtpreis);
   
    
    return 0;
}