#include "Calculadora.h"


float PedirNumero(char* mensaje)
{
	float numeroRegresado;

	printf("%s", mensaje);
	scanf("%f", &numeroRegresado);

	return numeroRegresado;
}

float Suma(float x, float y)
{
	float sumaRegresada;

	sumaRegresada = x + y;

	return sumaRegresada;
}

float Resta(float x, float y)
{
	float restaRegresada;

	restaRegresada = x - y;

	return restaRegresada;
}

float Division(float x, float y)
{
	float divisionRetornada;

	divisionRetornada = x / y;

	return divisionRetornada;
}

float Multiplicacion(float x, float y)
{
	float multiplicacionRetornada;

	multiplicacionRetornada = x * y;

	return multiplicacionRetornada;
}

float Factorial(float numero)
{
	int i;
	int factorial;

	factorial = 1;

	for(i = 1; i < numero; i++)
	{
		factorial = factorial * i;
	}

	return factorial;
}
