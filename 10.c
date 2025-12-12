
#include <stdio.h>
#include <windows.h>

int main() {

    for(int i = 1; i <= 10; i++) {
        if(i % 2 == 0) {
            printf("%d\n", i);
            Sleep(500);
            continue;
        }
    }

    return 0;
}