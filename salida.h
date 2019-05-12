/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

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
 *  Realiza varios printf, dandole la bienvenida al usuario e informandole las opciones disponibles
 * 
 * help:
 *  ¿Que hace?
 *  Realiza varios printf, indicandole al usuario las opciones de input por consola y sus respectivas acciones
 * 
 * display:
 *  ¿Que recibe?
 *  Recibe una matriz la cual simboliza el mundo actual
 *  Recibe un valor de tiempo el cual esta pensado ser el parametro que indica la progresion de mundos
 * 
 *  ¿Que hace?
 *  Imprime en pantalla el mundo actual en su tiempo actual, dando un formato apropiado y recorriendo el mundo analizando cada celda
 *  
 */

#ifndef SALIDA_H
#define SALIDA_H

#include "general.h"

void bienvenida(void); //Imprime el mensaje de bienvenida al programa
void help(void); //Indica las teclas asignadas a las opciones disponibles (salir, inicializar, etc)
void display(int Matriz[FILAS+2][COLUMNAS+2] ,unsigned int time);//Muestra en pantalla la configuracion actual del mundo

#endif /* SALIDA_H */

