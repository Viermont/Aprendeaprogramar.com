/******************************************************************************/
/*                                                                            */
/* -Fecha: 26/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crea un programa que pida al usuario 4 números, los memorice   */
/*  (utilizando una tabla), calcule su media aritmética y después muestre en  */
/*  pantalla la media y los datos tecleados.                                  */
/*                                                                            */
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
	int num[4];
	int i;
	double suma = 0;

	for (i = 0; i < 4; i++)
	{
		printf("Introduzca un número: ");
		scanf("%d", &num[i]);
		suma += num[i];
	}
	printf("La media aritmética de %d + %d + %d + %d / 4 es: %6.1f\n",
		 num[0], num[1], num[2], num[3], suma / 4);
	return 0;
}
