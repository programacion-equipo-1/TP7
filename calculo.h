/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   calculo.h
 * Author: tefi
 *
 * Created on May 11, 2019, 12:25 AM
 */

#ifndef CALCULO_H
#define CALCULO_H

#include "general.h"

void clean (int Matriz[FILAS+2][COLUMNAS+2] ); //Limpia la matriz del mundo

void evolution(int Matriz[FILAS+2][COLUMNAS+2], int Next[FILAS+2][COLUMNAS+2]); //Evalua el estado de la siguiente generacion, colocando...
										//... el resultado en la matriz auxiliar Next
void replace (int Matriz[FILAS+2][COLUMNAS+2], int Next[FILAS+2][COLUMNAS+2]);//Reemplaza el contenido del mundo por el de la matriz Next


#endif /* CALCULO_H */

