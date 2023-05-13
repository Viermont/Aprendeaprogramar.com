/******************************************************************************/
/*                                                                            */
/* -Fecha: 11/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Multiplicar dos números tecleados por usuario.                 */
/*                                                                            */
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
	int num1;
	int num2;
	int multi;

	printf("Introduce un numero ");
	scanf("%d", &num1);
	printf("Introduce un numero ");
	scanf("%d", &num2);
	multi = num1 * num2;
	printf("la multiplicación da %d", multi);
	return 0;
}
