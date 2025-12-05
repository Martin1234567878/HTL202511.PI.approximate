#include <stdio.h>
#include <math.h>

int main() {
    int n = 6;            // Start mit einem Hexagon (6-Eck)
    double s = 1.0;       // Seitenlänge des Hexagons im Einheitskreis (Radius 1)
    double pi_approx;

    printf("Annäherung von PI über Inkreis eines Polygons\n\n");

    while (n <= 1000000) {  // Schleife läuft, bis das Polygon 1.000.000 Seiten hat
        // Umfang des Polygons U = n * s, Radius = 1 → pi ≈ U / 2
        pi_approx = (n * s) / 2.0;
        printf("n = %d -> pi ≈ %.15f\n", n, pi_approx);

        // Neue Seitenlänge bei Verdop plung der Seitenzahl (Archimedische Rekursion)
        s = sqrt(2 - sqrt(4 - s * s));

        n *= 2;  // Seitenanzahl verdoppeln
    }

    return 0;
}
//cl PI.c   .\PI    zum überprüfen ob der Code funktioniert (im Terminal)
