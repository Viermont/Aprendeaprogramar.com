/******************************************************************************/
/*                                                                            */
/* -Fecha: 14/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Programa que pide tres números al usuario y dice cuál es el    */
/*  mayor de los tres.                                                        */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                       ;}          ;;} ;;}++                           ;}   */
/*                       ;;'} ;\;}    ;;;;} ;} ;--/ ;;;} ;\/} ,;;\ ;;;\ ;;;}  */
/*                       ;;;} `;;}     ;;}  ;} ;;;, ;}   ;;;} `;;/ ;};}  ;}   */
/*                           .,;'                                             */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

int main() {
	int numA;
	int numB;
	int numC;

	printf("Escribe un número: \n");
	scanf("%d", &numA);
	printf("Escribe otro número: \n");
	scanf("%d", &numB);
	printf("Escribe otro número: \n");
	scanf("%d", &numC);
	if (numA >= numB)
	{
		if (numA >= numC)
		{
			printf("El número %d es el mayor de los 3\n", numA);
		}
	}
	else if (numB >= numC)
	{
		printf("El número %d es el mayor de los 3\n", numB);
	}
	else
	{
		printf("El número %d es el mayor de los 3\n", numC);
	}
	return 0;
}
