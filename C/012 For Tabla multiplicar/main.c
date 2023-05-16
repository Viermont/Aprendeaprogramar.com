/******************************************************************************/
/*                                                                            */
/* -Fecha: 16/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crear un programa que escriba en pantalla las tablas de        */
/*  multiplicar del 1 al 9.                                                   */
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

int main()
{

	for (int tabla = 1; tabla <= 9; tabla++)
	{
		printf("TABLA DEL %d.\n", tabla);
		for (int num = 1; num <= 9; num++)
		{
			printf("%d por %d es %d.\n", tabla, num, tabla * num);
		}
	}
	return 0;
}	
