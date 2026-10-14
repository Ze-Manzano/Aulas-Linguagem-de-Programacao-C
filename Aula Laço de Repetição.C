#include <stdio.h>

int main() {
    int numero;
    int contador = 0;   
    int soma = 0;
    float media;

    while (contador < 10) {
        printf("Digite o numero %d: ", contador + 1);
        scanf("%d", &numero);

        if (numero > 0) {
            soma = soma + numero;
            contador = contador + 1;
        } else {
            printf("Numero invalido! Digite apenas positivos.\n");
        }
    }

    media = soma / 10.0;

    printf("\nSoma: %d\n", soma);
    printf("Media: %.2f\n", media);

    return 0;
}
