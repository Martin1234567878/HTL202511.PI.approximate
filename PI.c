#include <stdio.h>
#include <math.h>

int main() {
    int n = 6;            // Start mit einem Sechseck/n=Anzahl der Ecken 
    double pi_approx;       //Double speichert dezimalzahl

    for (; n <= 1000000; n *= 2) {  // Seitenzahl verdoppeln
        pi_approx = n * tan(M_PI / n);  // Inkreis-Formel
        printf("n = %d -> pi ? %.15f\n", n, pi_approx);     //%d gibt die Ganzzahl n aus.
                                                            // % .15f gibt die Pi - Näherung mit 15 Nachkommastellen aus.
    }

    return 0;
}