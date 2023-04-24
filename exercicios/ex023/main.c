#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehTriangulo(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }
    if (a < b + c && b < a + c && c < a + b) {
        return true;
    } else {
        return false;
    }
}

void tipoTriangulo(float a, float b, float c) {
    if (a == b && b == c) {
        printf("O tri�ngulo � equil�tero.\n");
    } else if (a == b || a == c || b == c) {
        printf("O tri�ngulo � is�sceles.\n");
    } else {
        printf("O tri�ngulo � escaleno.\n");
    }
}

int main() {
    float a, b, c;

    printf("Insira os valores dos tr�s lados do tri�ngulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (ehTriangulo(a, b, c)) {
        tipoTriangulo(a, b, c);
    } else {
        printf("Os valores inseridos n�o formam um tri�ngulo.\n");
    }

    return 0;
}
