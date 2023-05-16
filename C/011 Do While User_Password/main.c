/******************************************************************************/
/*                                                                            */
/* -Fecha: 16/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crea un programa que pida al usuario su código de usuario (un  */
/*  número entero) y su contraseña numérica (otro número entero), y no le     */
/*  permita seguir hasta que introduzca como código 1024 y como contraseña    */
/*  4567.                                                                     */
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
	int codUser;
	int pass;

	do
	{
		printf("Introduzca su código de usuario.\n");
		scanf("%d", &codUser);
		printf("Introduzca su contraseña.\n");
		scanf("%d", &pass);
		if ((codUser != 1024) || (pass != 4567))
		{
			printf("Error, código de usuario o clave incorrectos.\n");
		}
	}
	while ((codUser != 1024) || (pass != 4567));
	printf("Bienvenido al área restringida");
	return 0;
}
