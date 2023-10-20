/******************************************************************************/
/*                                                                            */
/* -Fecha: 20/10/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crear un programa que pida al usuario pares de números enteros */
/*  y escriba su suma (con el formato "20 + 3 = 23") en pantalla y en un      */
/*  fichero llamado "sumas.txt", que se encontrará en un subdirectorio llamado*/
/*  "resultados".Cada vez que se ejecute el programa, deberá añadir los nuevos*/
/*  resultados a continuación de los resultados de las ejecuciones anteriores.*/
/*                                                                            */
/*                       ;}          ;;} ;;}++                           ;}   */
/*                       ;;'} ;\;}    ;;;;} ;} ;--/ ;;;} ;\/} ,;;\ ;;;\ ;;;}  */
/*                       ;;;} `;;}     ;;}  ;} ;;;, ;}   ;;;} `;;/ ;};}  ;}   */
/*                           .,;'                                             */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int	numA;
	int	numB;
	int	suma;
	FILE*	fichero;
	char	nombre[21] = "resultados/sumas.txt";

	printf("\nA continuación le solicitaré un par de números enteros, le mostraré\n"
		"su suma y guardaré el resultado en el archivo \"%s\".\nSi introduce "
		"un dato que no sea un número entero saldrá del programa.\n", nombre);

	while (1)
	{
		printf("\nEscriba un número entero: ");
		if (scanf("%d", &numA) != 1) break;
		printf("\nEscriba otro número entero: ");
		if (scanf("%d", &numB) != 1) break;
		suma = numA + numB;
		printf("%d + %d = %d", numA, numB, suma);

		fichero = fopen(nombre, "at");
		if (fichero == NULL)
		{
			printf("\nError al crear el fichero");
			exit(1);
		}
		fprintf(fichero, "%d + %d = %d\n", numA, numB, suma);
		fclose(fichero);
	}
}
