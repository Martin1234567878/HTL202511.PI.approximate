#include <stdio.h>
#include <math.h>

int main() {
    int n = 6;            // Start mit einem Sechseck
    double pi_approx;       //Double speichert dezimalzahl

    for (; n <= 1000000; n *= 2) {  // Seitenzahl verdoppeln
        pi_approx = n * tan(M_PI / n);  // Inkreis-Formel
        printf("n = %d -> pi ? %.15f\n", n, pi_approx);
    }

    return 0;
}