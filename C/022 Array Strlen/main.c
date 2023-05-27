/******************************************************************************/
/*                                                                            */
/* -Fecha: 27/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crear un programa que pida tu nombre y lo muestre en pantalla  */
/*  separando cada letra de la siguiente con un espacio. Por ejemplo, si tu   */
/*  nombre es "Juan", debería aparecer en pantalla "J u a n".                 */
/*                                                                            */
/*                                                                            */
/*                       ;}          ;;} ;;}++                           ;}   */
/*                       ;;'} ;\;}    ;;;;} ;} ;--/ ;;;} ;\/} ,;;\ ;;;\ ;;;}  */
/*                       ;;;} `;;}     ;;}  ;} ;;;, ;}   ;;;} `;;/ ;};}  ;}   */
/*                           .,;'                                             */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	char nombre[20];
	int i;

	printf("Escriba su nombre: ");
	scanf("%s", nombre);
	for (i = 0; i < strlen(nombre); i++)
	{
		printf("%c ", nombre[i]);
	}
	putchar('\n');
	return 0;	
}
