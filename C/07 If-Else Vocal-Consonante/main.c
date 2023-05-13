/******************************************************************************/
/*                                                                            */
/* -Fecha: 13/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crear un programa que pida una letra al usuario y diga si se   */
/*  trata de una vocal.                                                       */
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

	char letra;

	printf("Escriba una letra: ");
	scanf("%c", &letra);
	if ((letra == 'a') || (letra == 'e') || (letra == 'i')
		|| (letra == 'o') || (letra == 'u'))
		printf("La letra es una vocal\n");
	else printf("La letra es una consonante\n");
	return 0;
}
