/*
 * main.c
 *
 *  Created on: 17 dic 2021
 *      Author: juanjopg
 */
#include <stdio.h>
#include "functions.h"

void main() {
	int x,y,p;
	x=validarint("Introduce la base de la potencia:  ");
	y=validarint("Introduce el exponente de la potencia:  ");
	p=potencia(x,y);
	printf("El resultado de la potencia es: [%d]",p);
}

