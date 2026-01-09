#include <stdio.h>

int main() {
    int a, b,somme = 0,diff = 0;
    float division;

    printf("Entrez la premiere valeur : ");
    scanf("%d", &a);

    printf("Entrez la deuxieme valeur : ");
    scanf("%d", &b);

if (a > 0 && a % 2 == 0)
        somme += a;
    if (b > 0 && b % 2 == 0)
        somme += b;
    if (a < 0 && a % 2 != 0 && b < 0 && b % 2 != 0)
        diff = a - b;
    if (b != 0)
        division = (float)a / b;
    else
        printf("Division impossible (division par zero)\n");

    printf("Somme des valeurs positives et paires = %d\n", somme);
    printf("Difference des valeurs negatives et impaires = %d\n", diff);
    if (b != 0)
        printf("Resultat de la division = %.2f\n", division);

    return 0;
}
