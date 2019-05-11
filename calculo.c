#include "calculo.h"

static int vecinos (int y, int x, int Matriz[FILAS+2][COLUMNAS+2] ); //Cuenta la cantidad de celulas vivas que rodean a una determinada posicion

void clean (int Matriz[FILAS+2][COLUMNAS+2] ){ //Limpia la matriz del mundo
	int i; //fila actual
	int j; //columna actual

	for (i=0;i<FILAS+2;i++){ // "Por cada fila ..."
		for (j=0;j<COLUMNAS+2;j++){ // "Por cada columna ..."
			Matriz[i][j]=MUERTA; // "...coloca un '0' (celula muerta)"
		}
	}

}


void evolution(int Matriz[FILAS+2][COLUMNAS+2], int Next[FILAS+2][COLUMNAS+2]){ //Evalua la configuracion de la proxima generacion
	int i; //fila actual
	int j; //columna actual
	int n; //vecinos vivos de la celula actual

	for (i=1; i<=FILAS; i++){ //Por cada fila...
		for (j=1; j<=COLUMNAS; j++){ // Por cada columna...

			n = vecinos (i,j,Matriz); //... calcula cauntas celulas vivas rodean la posicion actual

			if( Matriz[i][j] == VIVA){ //Si la celula analizada esta viva...

				if(n==2 || n==3){	//Entonces sobrevive solo si sus "vecinos" son 2 o 3
					Next[i][j] = VIVA;
				}else{	// n<2 || n>3
					Next[i][j] = MUERTA;
				}


			}else{ //Matriz[i][j] == MUERTA  	//Si la celula analizada esta muerta...

				if(n==3){		//Entonces cobra vida únicamente si tiene 3 vecinos vivos
					Next[i][j] = VIVA;
				}else{ // n!=3
					Next[i][j] = MUERTA;
				}				

			}
		}
	}

	return;
}

void replace (int Matriz[FILAS+2][COLUMNAS+2], int Next[FILAS+2][COLUMNAS+2]){//Actualiza el Mundo, con el contenido de la matriz auxiliar
	int i; //Fila actual
	int j; //Columna actual

	for (i=1;i<=FILAS;i++){ //Por cada fila...
		for(j=1;j<=COLUMNAS;j++){ //Por cada columna...
			Matriz[i][j] = Next [i][j]; //Transfiere el contenido de Next al mundo
		}
	}

}


static int vecinos (int y, int x, int Matriz[FILAS+2][COLUMNAS+2] ){//Calcula cuantas celulas vivas rodean una posicion del mundo
	int rta=0; //Define la respuesta
	int i; //Fila actual
	int j; //Columna actial

	for(i=y-1;i<=y+1;i++){ //Desde la fila anterior hasta la siguiente...
		for(j=x-1;j<=x+1;j++){ //Desde la columna anterior hasta la siguiente...
			if (Matriz[i][j]==VIVA){ //.. si encuentra una celula viva...
				rta++; //... incrementa el contador
			}
		}
	}
	//Sin embargo, el programa barrio tambien la celda que se halla en el medio, la cual no debìa contarse

	if (Matriz[y][x]==VIVA){ //Por lo tanto, si habia una celula viva...
		rta--; //...disminuye el contador, corrigiendolo
	}

	return rta; //Devuelve el resultado

}