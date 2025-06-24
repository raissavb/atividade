#include <stdio.h>

int main(void) {
    int filhos;
    int netos;
    int total = 0;

    scanf("%d", &filhos);

    for (int i = 0; i < filhos; i++) {
        scanf("%d", &netos);
        total = total + netos;
    }

    printf("%d\n", total);
    return 0;
}