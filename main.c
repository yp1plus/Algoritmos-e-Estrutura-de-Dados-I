#include "circulo.h"

int main(void){
    PONTO *ponto;
    CIRCULO *circulo;
    float x, y, cx, cy, r;

    scanf ("%f %f %f %f %f", &x, &y, &cx, &cy, &r);

    ponto = ponto_criar(x, y);
    circulo = circulo_criar(cx, cy, r);

    distancia(ponto, circulo);

    return 0;
}