/******************************************************************************/
/*                                                                            */
/* -Fecha: 25/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crear un programa que pida al usuario un número entero y       */
/*  muestre sus equivalentes en formato hexadecimal y en octal. Deberá seguir */
/*  pidiendo (y convirtiendo) números hasta que se introduzca 0.              */
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
	int num;

	do
	{
		printf("Introduzca un número: ");
	        scanf("%d", &num);
		printf("\nSu número en hexadecimal es: %x y en octal es %o\n",
		 num, num);
	}
	while (num != 0);
	printf("Fin del programa.\n");
	return 0;
}
