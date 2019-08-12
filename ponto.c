#include "ponto.h"

struct ponto_{
    float x;
    float y;
};

PONTO* ponto_criar(float x, float y){
    PONTO *ponto = (PONTO *) malloc(sizeof(PONTO));

    if (ponto!=NULL)
    {
        ponto->x = x;
        ponto->y = y;
    }
    else
    {
        exit(1);
    }

    return ponto;
}

void ponto_apagar(PONTO *p){
    if (p != NULL)
        free(p);
}

boolean ponto_set(PONTO *p, float x, float y){
    if (p!=NULL)
    {
        p->x = x;
        p->y = y;

        return true;
    }

    return false;
}

//Retorna o valor de x do ponto
float getX(PONTO *p){
    if (p == NULL)
        exit(1);

    return p->x;
}

//Retorna o valor de y do ponto
float getY(PONTO *p){
    if (p == NULL)
        exit(1);

    return p->y;
}