
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {

    srand((unsigned)time(NULL));
    int zahl;

    do {
        zahl = (rand() % 9) + 1; //Zufallszahl im Bereich von 1-9
        printf("Geworfen wurde: %d\n", zahl);
        Sleep(2000);
    }while(zahl != 9);

    if(zahl == 9) {
        printf("Eine 9 ist gefallen.\n");
    }
    else {
        printf("MEH\n");
    }

    return 0;
}