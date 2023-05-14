/******************************************************************************/
/*                                                                            */
/* -Fecha: 13/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crear un programa que pida al usuario un número entero y diga  */
/*  si es par.                                                                */
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
	int num;

	printf("Introduce un número: ");
	scanf("%d", &num);
	if (num % 2 == 0) printf("\nEl número introducido es par\n");
	else printf("El número introducido es impar\n");
	return 0;
}
