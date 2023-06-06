/******************************************************************************/
/*                                                                            */
/* -Fecha: 06/06/2023                                                         */
/*                                                                            */
/* -Enunciado: Crear un programa que pida al usuario su nombre y su           */
/*  contraseña, y no le permita seguir hasta que introduzca como nombre       */
/*  "Pedro" y como contraseña "Peter".                                        */
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
	char user[11], pass[11];

	do
	{
		printf("Introduzca su nombre de usuario: ");
		fgets(user, 11, stdin);
		printf("Introduzca su contraseña: ");
		fgets(pass, 11, stdin);
		printf("User: %sPass: %s", user, pass);
	}
	while (strcmp(user, "Pedro\n") != 0 || strcmp(pass, "Peter\n") != 0);
	printf("Usuario y contraseña correctos\n");
	return 0;
}
