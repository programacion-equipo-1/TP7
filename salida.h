
/* 
 * File:   salida.h
 * Author: tefi
 *
 * Created on May 11, 2019, 12:17 AM
 * 
 * Descripcion de Funciones:
 * 
 * bienvenida:
 *  ¿Que hace?
 *  Le da la bienvenida al usuario, informandole las opciones disponibles para utilizar el programa
 * 
 * help:
 *  ¿Que hace?
 *  Le indica al usuario las opciones de input por consola y sus respectivas acciones
 * 
 * display:
 *  ¿Que recibe?
 *  Recibe una matriz la cual simboliza el mundo actual
 *  Recibe un valor de tiempo el cual indica el número de generaciones pasadas desde la última inicialización
 * 
 *  ¿Que hace?
 *  Imprime en pantalla el estado del mundo actual, y el número de generación correspondiente
 *  
 */

#ifndef SALIDA_H
#define SALIDA_H

#include "general.h"

void bienvenida(void); //Imprime el mensaje de bienvenida al programa
void help(void); //Indica las teclas asignadas a las opciones disponibles (salir, inicializar, etc)
void display(int Matriz[FILAS+2][COLUMNAS+2] ,unsigned int time);//Muestra en pantalla la configuracion actual del mundo

#endif /* SALIDA_H */

