
#include <stdio.h>
#include <string.h>

int main() {

    char wort1[20] = "Ma";                      // strlen()
    char wort2[] = "tteo";                      // strcpy()
                                                // strcmp()
    strcat(wort1, wort2);                       // strcat()
    printf("%s\n", wort1);

    strcat(wort1, "!");
    printf("%s\n", wort1);

    return 0;
}