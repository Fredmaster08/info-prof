
#include <stdio.h>

int main() {

    int zahl;
    printf("Gib eine Zahl ein: ");
    scanf("%d", &zahl);

    if(zahl > 0) {
        printf("Die Zahl %d ist Groesser als 0\n", zahl);
    }
    else if(zahl == 0) {
        printf("Die Zahl %d ist gleich 0\n", zahl);
    }
    else if(zahl < -10) {
        printf("Die Zahl %d ist kleienr als -10\n", zahl);
    }
    else{
        printf("Die Zahl %d ist kleiner als 0 und groesser oder gleich -10", zahl);
    }

    return 0;
}