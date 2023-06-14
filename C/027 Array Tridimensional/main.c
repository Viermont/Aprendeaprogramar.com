/******************************************************************************/
/*                                                                            */
/* -Fecha: 14/06/2023                                                         */
/*                                                                            */
/* -Enunciado: Crear un programa que use un array de 3 dimensiones para       */
/*  para guardar los nombres de los meses en español e inglés. El usuario     */
/*  deberá indicar un número de mes (por ejemplo, 3) y se le mostrará el      */
/*  nombre de dicho mes en español (Marzo) y en inglés (March).               */
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
	char meses[2][12][10] =
		{
		"Enero",
		"Febrero",
		"Marzo",
		"Abril",
		"Mayo",
		"Junio",
		"Julio",
		"Agosto",
		"Septiembre",
		"Octubre",
		"Noviembre",
		"Diciembre",
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
		};
	int num;

	printf("Indique un número de mes: ");
	scanf("%d", &num);	
	printf("El mes indicado es: %s - %s\n", meses[0][num -1], 
			meses[1][num -1]);
	return 0;
}
