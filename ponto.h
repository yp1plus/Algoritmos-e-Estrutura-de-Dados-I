#ifndef PONTO_H
 #define PONTO_H

 #include <stdio.h>
 #include <stdlib.h>
 
 #define boolean int
 #define true 0
 #define false 1
 
 typedef struct ponto_ PONTO;
 
 PONTO *ponto_criar(float x, float y);
 void ponto_apagar(PONTO *ponto);
 boolean ponto_set(PONTO *p, float x, float y);
 float getX(PONTO *p);
 float getY(PONTO *p);

 #endif