/******************************************************************************/
/*                                                                            */
/* -Fecha: 24/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crear un programa que dé al usuario la oportunidad de adivinar */
/*  un número del 1 al 100 (prefijado en el programa) en un máximo de 6       */
/*  intentos. En cada pasada deberá avisar de si se ha pasado o se ha quedado */
/*  corto.                                                                    */
/*                                                                            */
/*                       ;}          ;;} ;;}++                           ;}   */
/*                       ;;'} ;\;}    ;;;;} ;} ;--/ ;;;} ;\/} ,;;\ ;;;\ ;;;}  */
/*                       ;;;} `;;}     ;;}  ;} ;;;, ;}   ;;;} `;;/ ;};}  ;}   */
/*                           .,;'                                             */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

int main()
{
	int num = 17;
	int numuser;
	int i;

	for (i = 1; i <= 6; i++)
	{
		printf("Adivina un número de 1 a 100: ");
	        scanf("%d", &numuser);
		if (numuser == num)
		{
			printf("Enhorabuena, has adivinado el número.\n");
			goto salida;
		}
		else if (numuser < num)
		{
			printf("El número es mayor.\n");
		}
		else
		{
			printf("El número es menor.\n");
		}
	}
	printf("Intentos terminados.\n");
	salida:
	return 0;
}
