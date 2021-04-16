/*
 ============================================================================
 Name        : Trabajo_Practico_1°.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"

int main(void) {

	setbuf(stdout, NULL);

	int opcion;
	float a;
	float b;
	float suma;
	float resta;
	float division;
	float multiplicacion;
	float factorialA;
	float factorialB;
	int bandera1;
	int bandera2;


	bandera1 = 0;
    bandera2 = 0;
	do
	{
	    printf("***********Bienvedio a la calculadora************\n");
		printf("\n 1. Ingrese 1er operando A = %.2f . \n 2. Ingrese 2do operando B = %.2f . \n 3. Calcular todas las operaciones. \n 4. Informar resultados. \n 5. Salir. \n",a,b);
		printf("\n *************************************************\n");
		scanf("%d", &opcion);
		system("CLS");

		switch(opcion)
		{
		case 1:
			a = PedirNumero("Ingrese 1er numero: ");
			bandera1 = 1;

			break;
		case 2:
			b = PedirNumero("Ingrese 2do numero: ");
			bandera2 = 1;

			break;
		case 3:
		    if(bandera1 == 0 || bandera2 == 0)
            {
                printf("Error, falta ingresar operando.\n");
            }
            else
            {
                suma = Suma(a,b);
                resta = Resta(a,b);
                division = Division(a,b);
                multiplicacion = Multiplicacion (a,b);
                factorialA = Factorial(a);
                factorialB = Factorial(b);
            }



			break;
		case 4:
		    if(bandera1 == 0 || bandera2 == 0)
            {
                printf("Error, falta ingresar operando.\n");
            }
            else
            {

                printf("El resultado de %.2f + %.2f es: %.2f \n",a,b,suma);
                printf("El resultado de %.2f - %.2f es: %.2f \n",a,b,resta);

                if(b == 0)
                {
                    printf("No es posible dividir por 0. \n");
                }
                else
                {
                    printf("El resultado de %.2f / %.2f es: %.2f \n",a,b,division);
                }

                printf("El resultado de %.2f * %.2f es: %.2f \n",a,b,multiplicacion);

                if(factorialA != 0)
                {
                    printf("El factorial de %.2f es: %.2f \n", a,factorialA);
                }
                else
                {
                    printf("El factorial de 0 es 1.\n");
                }

                if(factorialB != 0)
                {
                    printf("El factorial de %.2f es: %.2f \n", b,factorialB);
                }
                else
                {
                    printf("El factorial de 0 es 1.\n");
                }
                }
                break;

		}

	}while(opcion != 5);



	return EXIT_SUCCESS;
}

