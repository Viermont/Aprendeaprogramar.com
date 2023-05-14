/******************************************************************************/
/*                                                                            */
/* -Fecha: 14/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crear un programa que use el operador condicional para mostrar */
/*  el valor absoluto de un número de la siguiente forma: si el número es     */
/*  positivo, se mostrará tal cual; si es negativo, se mostrará cambiado de   */
/*  signo.                                                                    */
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

	printf("Escriba un número: ");
	scanf("%d", &num);
	num = (num > 0) ? num : num * -1;
	printf("El valor absoluto del número introducido es %d.\n", num);
	return 0;
}
