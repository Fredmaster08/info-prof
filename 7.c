
#include <stdio.h>
#include <windows.h>

int main() {

    int i = 1;
    int summe = 0;

    while(i <= 10) {

        printf("Summe ist aktuell: %d\n", summe);
        printf("i ist aktuell: %d\n", i);
        summe = summe + 1;
        i = i + 1;
    }
    printf("summer = %d\n", summe);

    return 0;
}