/******************************************************************************/
/*                                                                            */
/* -Fecha: 24/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crear un programa que descomponga un número (que teclee el     */
/*  usuario) como producto de su factores primos.                             */
/*  Por ejemplo, 60 = 2 · 2 · 3 · 5                                           */
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
	int divisor = 2;

	printf("Introduce el número que quieres descomponer: ");
	scanf("%d", &num);
	printf("%d = ", num);	
	while (divisor < num)
	{
		if (num % divisor == 0)
		{
			printf("%d * ", divisor);
			num = num / divisor;
			divisor = 2;
		}
		else divisor++;
	}
	printf("%d\n", num);
}
