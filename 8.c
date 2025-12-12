
#include <stdio.h>
#include <windows.h>

int main() {

    for(int i = 1; i < 10; i++) {
        Sleep(500);
        printf("%d ", i);
        Sleep(500);
        printf("<- Das ist eine %d.\n", i);
        Sleep(500);
    }

    return 0;
}