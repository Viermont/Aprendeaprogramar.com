/******************************************************************************/
/*                                                                            */
/* -Fecha: 12/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: El usuario de nuestro programa podrá teclear dos números de    */
/*  hasta 8 cifras significativas. El programa deberá mostrar el resultado    */
/*  de dividir el primer número entre el segundo, utilizando tres cifras      */
/*  decimales.                                                                */
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
	float a;
	float b;
	printf("Escriba un número real :");
	scanf("%f", &a);
	printf("\nEscriba otro número real :");
	scanf("%f", &b);
	printf("\nEl resultado de dividir el primer número entre el segundo es: %8.3f\n", a / b);
	return 0;
}
