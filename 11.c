
#include <stdio.h>

float meineFkt(float a, float b) {
    float c;
    c = 3 * a * a + 2 * b * b + 5 * b - a - 5;
    return c;
}

void werteAusgeben(float x1, float x2, float y) {
    printf("d = %.2f\te = %.2f\tf = %.2f\n", x1, x2, y);
    return;
}

int main() {
    float x1 = 5.0;
    float x2 = 7.0;
    float y;

    y = meineFkt(x1, x2);

    werteAusgeben(x1, x2, y);

    float wert;
    wert = meineFkt(3.0, 4.2);
    werteAusgeben(3.0, 4.2, wert);

    return 0;
}