/******************************************************************************/
/*                                                                            */
/* -Fecha: 22/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crear un programa que pida un número al usuario (entre 1 y 20) */
/*  y muestre los números el 1 al 20, excepto el indicado por el usuario,     */
/*  usando "continue" para evitar ese valor.                                  */
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
	int num;
	int i;

	printf("Escribe el nº del 1 al 20 que no quieres que aparezca: ");
	scanf("%d", &num);
	for (i = 1; i <= 20; i++)
	{
		if (i == num) continue;
		printf("%d ", i);
	}
	return 0;
}

