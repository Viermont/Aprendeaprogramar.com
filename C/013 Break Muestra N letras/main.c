/******************************************************************************/
/*                                                                            */
/* -Fecha: 16/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crear un programa que pida un número al usuario (entre 1 y     */
/*  100) y muestre tantas letras A como indique ese número, usando "break"    */
/*  para terminar.                                                            */
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
	
	printf("Escriba un número de 1 a 100: ");
	scanf("%d", &num);
	for (int i = 1; i <= 100; i++)
	{
		printf("A\n");
		if (i == num) break;

	}
	return 0;
}
