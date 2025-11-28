#include <stdio.h>
#include <math.h>

int main() {
    int n = 6;            // Start mit einem Hexagon
    double s = 1.0;       // Seitenlänge des Hexagons im Einheitskreis
    double pi_approx;

    printf("Annäherung von PI über Inkreis eines Polygons\n\n");

    while (n <= 1000000) {
        // Umfang des Polygons U = n * s, Radius = 1 → pi ≈ U / 2
        pi_approx = (n * s) / 2.0;
        printf("n = %d -> pi ≈ %.15f\n", n, pi_approx);

        // Neue Seitenlänge bei Verdopplung der Seitenzahl (Archimedische Rekursion)
        s = sqrt(2 - sqrt(4 - s * s));

        n *= 2;  // Seiten verdoppeln
    }

    return 0;
}
