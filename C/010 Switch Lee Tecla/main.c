/******************************************************************************/
/*                                                                            */
/* -Fecha: 14/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crear un programa que lea una letra tecleada por el usuario y  */
/*  diga si se trata de una vocal, una cifra numérica o una consonante.       */
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
	char a;

	printf("Pulse una tecla seguida de intro: ");
	scanf("%c", &a);
	switch(a)
	{
		case 'q':
		case 'w':
		case 'r':
		case 't':
		case 'y':
		case 'p':
		case 's':
		case 'd':
		case 'f':
		case 'g':
		case 'h':
		case 'j':
		case 'k':
		case 'l':
		case 'z':
		case 'x':
		case 'c':
		case 'v':
		case 'b':
		case 'n':
		case 'm': printf("Consonante. \n");
			  break;
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': printf("Vocal. \n");
			  break;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': printf("Dígito. \n");
			  break;
		default: printf("Otra tecla. /n");
	}
	return 0;
}	
