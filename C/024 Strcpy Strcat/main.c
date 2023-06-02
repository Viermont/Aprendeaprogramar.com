/******************************************************************************/
/*                                                                            */
/* -Fecha: 02/06/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crear un programa que te pida una palabra, y la almacene en la */
/*  variable llamada "texto". Luego deberá pedir una segunda palabra, y       */
/*  añadirla al final de "texto". Finalmente, deberá pedir una tercera        */
/*  y guardarla en la variable "texto" y en otra variable llamada "texto2".   */
/*                                                                            */
/*                       ;}          ;;} ;;}++                           ;}   */
/*                       ;;'} ;\;}    ;;;;} ;} ;--/ ;;;} ;\/} ,;;\ ;;;\ ;;;}  */
/*                       ;;;} `;;}     ;;}  ;} ;;;, ;}   ;;;} `;;/ ;};}  ;}   */
/*                           .,;'                                             */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <string.h>

/*Por seguridad no se utiliza gets sino fgets. Dara error de compilación si no
se utiliza -Wno-deprecated-declarations al compilar para deshabilitar las
advertencias relacionadas con funciones desaprobadas.*/

int main()
{
	char texto[30], texto2[30];

	printf("Introduzca una palabra: ");
	gets(texto);
	printf("\nTu palabra es: %s.\n", texto);
	printf("Introduzca una nueva palabra: ");
	gets(texto2);
        strcat(texto, texto2);
	printf("\nTu nueva palabra es: %s.\n", texto);
	printf("Introduzca una palabra: ");
	gets(texto);
	strcpy(texto2, texto);
	printf("Tu nueva palabra escrita 2 veces es: %s y %s\n", texto, texto2);
	return 0;
}
