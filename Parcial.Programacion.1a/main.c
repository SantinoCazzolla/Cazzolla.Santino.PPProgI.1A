#include <stdio.h>
#include <stdlib.h>

float aplicarDescuento(float valor);

int contarCaracteres(char chadena[], int tamCadena, char caracter);

typedef struct
{
    int id;
	char procesador[20];
	char marca[20];
	float precio;
}eNotebook;

int main()
{
    /* 1. Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un
  producto y devuelva el valor del producto con un descuento del 5%. Realizar la llamada desde el main.

  2. Crear una función que se llame contarCaracteres que reciba una cadena de caracteres como primer
  parámetro y un carácter como segundo y devuelva la cantidad de veces que ese carácter aparece en la cadena.

  3. Dada la estructura Notebook(id, procesador, marca, precio) generar una función que permita ordenar un array
  de dicha estructura por marca. Ante igualdad de marca deberá ordenarse por precio. Hardcodear datos y mostrarlos desde el main.
  */



    float valor1 = 100;

    aplicarDescuento(valor1);

    contarCaracteres("santino", 10, 'n');

    return 0;
}

float aplicarDescuento(float valor)
{


      float valorConDescuento;
      float todoOk = 0;

    if(valor > 0)
        {
            valorConDescuento = valor * 0.95;
            todoOk = 1;
            printf("El valor es %.2f, coen el descuanto aplicado queda en %.2f.", valor, valorConDescuento);
        }

    return todoOk;
}

int contarCaracteres(char cadena[], int tamCaracter, char caracter)
{
    int contadorCarac = 0;

    for(int i = 0; i < tamCaracter; i++)
        {
        if(cadena[i] == caracter)

        {
            contadorCarac++;
        }

    return contadorCarac;
}
}
