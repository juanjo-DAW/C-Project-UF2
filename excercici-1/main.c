/*
 * main.c
 *
 *  Created on: 17 dic 2021
 *      Author: juanjopg
 */
#include <stdio.h>
#include "funcions.h"

void main(){
    int num;
    do{
    	num = validate();
    }while (num == -1);

    printf("El teu nombre és: %d", num);

}


