#include <stdio.h>

int main(void) {
    int anoNascimento;
    int idadeReal;
    int anoMillennial;

    scanf("%d",&anoNascimento);

    idadeReal = 2025 - anoNascimento;
    anoMillennial = 2025 - (2 * idadeReal);

    printf("%d\n", anoMillennial);

    return 0;
}