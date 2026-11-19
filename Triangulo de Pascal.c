#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, k, valor;

    printf("Entrada: ");
    scanf("%d", &n);

    printf("Saida:\n");
    for (i = 0; i < n; i++) {
        for (k = 0; k < n - i - 1; k++) {
            printf(" ");
        }
        valor = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", valor);
            valor = valor * (i - j) / (j + 1);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
