//Exercício 1:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int inicio, fim, passo, i;

    printf("Digite o primeiro valor: ");
    scanf("%d", &inicio);
    printf("Digite o segundo valor: ");
    scanf("%d", &fim);
    printf("Digite o passo: ");
    scanf("%d", &passo);

    if (passo <= 0) {
        printf("O passo deve ser maior que zero!\n");
    } else {
        i = inicio + passo;
        while (i <= fim) {
            printf("%d ", i);
            i = i + passo;
        }
        printf("\n");
    }

    system("pause");
    return 0;
}

//Exercício 2:
#include <stdio.h>

int main() {
    int n, i;
    float termo, soma;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    soma = 0;
    termo = 0.5;
    i = 1;

    if (n > 0) {
        while (i <= n) {
            soma = soma + termo;
            termo = termo / 2;
            i = i + 1;
        }

        printf("A soma dos %d termos e: %.6f\n", n, soma);
    } else {
        printf("Digite um numero maior que zero!\n");
    }

    return 0;
}

//Exercício 3:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas = 10;
    int i, j, espaco, valor;

    for (i = 0; i < linhas; i++) {
        for (espaco = 0; espaco < linhas - i - 1; espaco++) {
            printf("  ");
        }

        valor = 1;
        for (j = 0; j <= i; j++) {
            printf("%4d", valor);
            valor = valor * (i - j) / (j + 1);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
