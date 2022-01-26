/*
 * funcions.c
 *
 *  Created on: 17 dic 2021
 *      Author: juanjopg
 */
#include <stdio.h>
#include "funcions.h"
#define PI 3.14

//1-Suma dos nombres utilitzant funcions
int sumar(int num1, int num2){
    return num1+num2;
}
int llegirNum(char *msg){
    int num;
    printf("%s", msg);
    scanf("%d", &num);
    return num;
}

//2-Validar que es un número natural en int i en float.
int validarint(char *msg){
	int num;
	do{
		printf("%s", msg);
		scanf("%d", &num);
	}while (num < 1);
	return num;
}
float validarfloat(char *msg){
	float num;
	do{
		printf("%s", msg);
		scanf("%f", &num);
	}while (num < 1);
	return num;
}

/* 3-Crea un programa (utilitzant funcions)
 * que demani el radi d’un cercle (enter)
 * i retor-ni la longitud de la circunferencia.
 */
float vradi(char *msg){
    float vradi;
    vradi = validarfloat("Introdueix un radi que sigui natural:\n");
    return vradi;
}
float calcularL(float radi){
    return 2*PI*radi;
}

/*4-Validar un nombre entre un determinat interval
 * amb un máxim de 3 intents.
 */
int validate(){
    int x, i=0;
    do{
        printf("Introdueix un nombre natural:\n");
        scanf("%d", &x);
        i++;
    }while((x < 10 || x > 5000) && (i != 3));
    if( i == 3){
        x = -1;
    }
    return x;
}

//5-Validar que és un número primer.

int vnumprimer(int num){
	int i, rmodul = 0, contadordiv = 0;
	for(i = 1; i != num; i++){
		rmodul = num % i;
		if (rmodul == 0){
			contadordiv = contadordiv + 1;
		}
	}
	if(contadordiv > 2 || num == 4){
		return 0;
	}else{
		return 1;
	}
}

//6-Validar el tamaño.
int tamano(){
	int s;
	do{
		printf("Introduce un numero del 1 al 50: ");
		scanf("%d",&s);
	}while(s < 1 || s > 50);
	return s;
}

//7-Validar un intervalo entre el numeros.
int valor10(){
	int input;
	do{
		printf("Introduce un numero del 1 al 10: ");
		scanf("%d",&input);
	}while(input < 1 || input > 10);
	return input;
}

//8-Validar una potencia.

int potencia(int x,int y){
	int i,t;
	t=x;
	for(i=1;i < y;i++){
		t *= x;
	}
	return t;
}

