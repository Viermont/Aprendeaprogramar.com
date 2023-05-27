/******************************************************************************/
/*                                                                            */
/* -Fecha: 27/05/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crear un programa que te pida una frase y la muestre en        */
/*  pantalla sin espacios. Por ejemplo, si la frase es "Hola, ¿como estás?"   */
/*  debería aparecer en pantalla "Hola,¿comoestás?".                          */
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

/*Por seguridad no se utiliza gets sino fgets. Dara error de compilación si no
se utiliza -Wno-deprecated-declarations al compilar para deshabilitar las
advertencias relacionadas con funciones desaprobadas.*/

int main()
{
	char frase[30];
	int i;

	printf("Escriba una frase: ");
	gets(frase);
	for (i = 0; i < strlen(frase); i++)
	{
		if (frase[i] != ' ') putchar(frase[i]);
	}
	putchar('\n');
	return 0;
}
