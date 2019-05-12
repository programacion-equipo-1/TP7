
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
 *  El primer caracter de la línea ingresada por teclado
 *  ¿Que hace?
 *  Al llamar a la función, se detiene el programa, hasta que el ususario ingrese caracteres y oprima ENTER
 *  Sólo se tendrá en cuenta el primer caracter ingresado (el cual puede ser ENTER), ignorándose los demás
 * 
 * inicializacion:
 *  ¿Que recibe?
 *  Recibe una matriz con dimensiones la cual simboliza el mundo.  
 *  ¿Que hace?
 *  Imprime las condiciones de input, es decir, cómo ingresar los valores, y cuáles están permitidos
 *  (actualmente, 0 significa célula muerta, 1 célula viva. Los espacios son ignorados)
 *  Permite al usuario colocar valores en los respectivos lugares de una matriz
 *  
 */

#ifndef ENTRADA_H
#define ENTRADA_H

#include "general.h"

int teclado (void); //Recibe un caracter del teclado
void inicializacion(int Matriz[FILAS+2][COLUMNAS+2] ); //Permite el ingreso de las condiciones iniciales de mundo

#endif /* ENTRADA_H */

