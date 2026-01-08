
#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 10;
    printf("Wert von a: %d\n", a);
    printf("Adresse von a: %p\n", &a);

    int *p = &a;

    return 0;
}