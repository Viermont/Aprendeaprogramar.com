/******************************************************************************/
/*                                                                            */
/* -Fecha: 25/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crea un programa que pida al usuario 4 letras (usando getchar) */
/*  y las muestre en orden inverso.                                           */
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
	char letra1, letra2, letra3, letra4;

	printf("Introduzca 4 letras y pulse Intro: ");
	letra1 = getchar();
	letra2 = getchar();
	letra3 = getchar();
	letra4 = getchar();
	printf("\n%c%c%c%c\n", letra4, letra3, letra2, letra1);
	return 0;
}
