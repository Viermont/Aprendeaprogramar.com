/******************************************************************************/
/*                                                                            */
/* -Fecha: 11/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Expresar en sistema octal el número decimal introducido.       */
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
	int numDec;

	printf("Introduzca un número decimal de 3 cifras: ");
	scanf("%d", &numDec);
	printf("El número en octal es el %d", numDec / 64);
	numDec = numDec % 64;
	printf("%d", numDec / 8);
        numDec = numDec % 8;
	printf("%d\n", numDec / 1);
	return 0;
}

