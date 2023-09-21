/*
1° Programa que suma dos arreglos de números (0, 1, 2, 3, 4 + 0, 1, 2, 3, 4
(arreglos del mismo tamaño)), debe darnos resultados ordenados por arreglo
(0, 1, 2, 3, 4 + 0, 1, 2, 3, 4 = 0, 1, 2, 3, 4)
2° Ahora elegir entre dividir y sumar
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int extension;
	int numeros1[]={1,2,3,4,5};
	int numeros2[]={6,7,8,9,10};//no es necesario especificar, ya que lo inicializamos con "={componentes del conjunto}"
	int resultado[5];//se debe especificar el valor entre corchetes porque es un valor que vas a pedir
	
	for(extension=0;extension<5;extension++) //extensión va de 0 a 5
		resultado[extension]=numeros1[extension]+numeros2[extension];//los primeros sumandos+los segundos sumandos=resultado

	for(extension=0;extension<5;extension++)
		printf("%d\t", resultado[extension]);
	
	return 0;
}
