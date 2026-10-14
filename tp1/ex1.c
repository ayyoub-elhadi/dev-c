#include <stdio.h>

int main()
{
    char operateur;
    double a, b, resultat;

    printf("Entrez une operation (+, -, *, /) : ");
    scanf(" %c", &operateur);

    printf("Entrez deux nombres : ");
    scanf("%lf %lf", &a, &b);

    switch (operateur)
    {
        case '+':
            resultat = a + b;
            break;
        case '-':
            resultat = a - b;
            break;
        case '*':
            resultat = a * b;
            break;
        case '/':
            if (b == 0)
            {
                printf("Erreur : division par zero.\n");
                return 1;
            }
            resultat = a / b;
            break;
        default:
            printf("Operateur invalide.\n");
            return 1;
    }

    printf("Resultat : %.2f %c %.2f = %.2f\n", a, operateur, b, resultat);
    return 0;
}