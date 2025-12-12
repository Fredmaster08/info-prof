
#include <stdio.h>
#include <string.h>

int main() { 

    char name[21];
    printf("Wie heisst du? ");
    scanf("%20s", name);
    printf("Hallo %s!\n", name);

    strcpy(name, "Jens");
    printf("Hallo %s!\n", name);

    return 0;
}