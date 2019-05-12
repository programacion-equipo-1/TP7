/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   entrada.h
 * Author: tefi
 *
 * Created on May 11, 2019, 12:10 AM
 * 
 * Descripcion de Funciones:
 * 
 * teclado:
 *  ¿Que devuelve?
 *  El primer caracter colocado por teclado
 *  ¿Que hace?
 *  Llama getchar(), toma el primer caracter ignorando el resto
 * 
 * inicializacion:
 *  ¿Que recibe?
 *  Recibe una matriz con dimensiones la cual simboliza el mundo.  
 *  ¿Que hace?
 *  Imprime las condiciones de input
 *  Permite al usuario colocar valores en los respectivos lugares de una matriz
 *  
 */

#ifndef ENTRADA_H
#define ENTRADA_H

#include "general.h"

int teclado (void); //Recibe un caracter del teclado
void inicializacion(int Matriz[FILAS+2][COLUMNAS+2] ); //Permite el ingreso de las condiciones iniciales de mundo

#endif /* ENTRADA_H */

