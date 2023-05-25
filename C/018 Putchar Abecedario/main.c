/******************************************************************************/
/*                                                                            */
/* -Fecha: 25/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crea un  programa que escriba las letras de la A (mayúscula) a */
/*  la Z (mayúscula), usando ?for? y ?putchar?.                               */
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
	char letra;

	for (letra = 'A'; letra <= 'Z'; letra++)
	{
		putchar(letra);
	}
	putchar('\n');
	return 0;
}
