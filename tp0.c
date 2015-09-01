#include "tp0.h"

/* ******************************************************************
 *                     FUNCIONES A COMPLETAR
 * *****************************************************************/

/* swap() intercambia dos valores enteros.
 */
void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

/* maximo() busca el mayor elemento del arreglo y devuelve su posicion.
 * Si el vector es de largo 0, devuelve -1.
 */
int maximo(int vector[], int n) {
	int valor_max = 0, posicion_max = 0;
	if (n == 0) {
		return -1;
	} else {
		for (int i = 0; i < n; i++) {
			if (vector[i] > valor_max) {
				valor_max = vector[i];
				posicion_max = i;
			}
		}
	}
	return posicion_max;
}

/* La función comparar recibe dos vectores y sus respectivas longitudes
 * y devuelve -1 si el primer vector es menor que el segundo; 0 si son
 * iguales; y 1 si el segundo es menor.
 *
 * Un vector es menor a otro cuando al compararlos elemento a elemento,
 * el primer elemento en el que difieren no existe o es menor.
 */
int comparar(int vector1[], int n1, int vector2[], int n2) {
	int largo_max = 0;
	if (n1 > n2) {
		largo_max = n2;
	} else {
		largo_max = n1;
	}
	for (int i = 0; i < largo_max; i++) {
		if (vector1[i] < vector2[i]) {
			return -1;
		} else if (vector1[i] > vector2[i]) {
			return 1;
		}
	}
	if (n1 > n2) {
		return 1;
	} else if (n1 < n2) {
		return -1;
	} else {
		return 0;
	}
}

/* selection_sort() ordena el arreglo recibido mediante el algoritmo de
 * selección.
 */
void seleccion(int vector[], int n) {
	int posicion, intercambio;
	for (int i = 0; i < (n - 1); i++) {
		posicion = i;
		for (int j = i + 1; j < n; j++) {
			if (vector[posicion] > vector[j]) {
				posicion = j;
			}
		}
		if (posicion != i) {
			intercambio = vector[i];
			vector[i] = vector[posicion];
			vector[posicion] = intercambio;
      }
   }
}