/******************************************************************************/
/*                                                                            */
/* -Fecha: 27/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crea un programa que almacene en una tabla el número de días   */
/*  que tiene cada mes (año no bisiesto), pida al usuario que le indique un   */
/*  mes (ej. 2 para febrero) y un día (ej. el día 15) y diga qué número de    */
/*  día es dentro del año (por ejemplo, el 15 de febrero sería el día número  */
/*  46, el 31 de diciembre sería el día 365).                                 */
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
	int numDiasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int numMes;
	int numDia;
	int suma = 0;
	int i;

	printf("Indica un mes del año: ");
	scanf("%d", &numMes);
	printf("Indica un día del mes: ");
	scanf("%d", &numDia);
	for (i = 0; i < numMes - 1; i++)
	{
		suma += numDiasMes[i]; 	
	}	
	suma += numDia;
	printf("Ese es el día %d del año.\n", suma);
	return 0;
}
