#include "circulo.h"
#include <math.h>

#define PI 3.14159

struct circulo_{
    PONTO *ponto_c;
    float raio;
};

CIRCULO* circulo_criar(float c, float y, float raio){
    CIRCULO *circulo = (CIRCULO *) malloc(sizeof(CIRCULO));

    if (circulo != NULL)
    {
        PONTO *p = ponto_criar(c, y);
        circulo->ponto_c = p;
        circulo->raio = raio;
    }
    else
    {
        exit(1);
    }

    return circulo;
}

void circulo_apagar(CIRCULO *circulo){
    if (circulo != NULL)
        free(circulo);
}

float circulo_area(CIRCULO *circulo){
    if (circulo == NULL)
    {
        exit(1);
    }

    return (circulo->raio) * (circulo->raio) * PI;
}

/* Adicionando função distancia no TAD Circulo por praticidade (não precisar criar funções de retorno para o circulo, caso na main)
 * A escolha do TAD Ponto não é interessante, pois teria que ser incluída a biblioteca circulo.h em Ponto, o que é anti-intuitivo
 */
void distancia(PONTO *p, CIRCULO *r){
    if (p == NULL || r == NULL)
    {
        exit(1);
    }

    float dist = sqrt((getX(p) - getX(r->ponto_c)) * (getX(p) - getX(r->ponto_c)) + (getY(p) - getY(r->ponto_c)) * (getY(p) - getY(r->ponto_c))); //sqrt((x2-x1)² - (y2-y1)²) 

    if (dist < r->raio)
    {
        printf("O ponto é interior à circunferência.\nDistância: %.2f\n", dist);
    }
    else if (dist > r->raio)
    {
        printf("O ponto é exterior à circunferência.\nDistância: %.2f\n", dist);
    }
    else if (dist == r->raio)
    {
        printf("O ponto pertence à circunferência.\nDistância: %.2f\n", dist);
    }

}