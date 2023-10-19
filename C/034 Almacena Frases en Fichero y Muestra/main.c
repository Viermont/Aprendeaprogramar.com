/******************************************************************************/
/*                                                                            */
/* -Fecha: 18/10/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crea un programa que pida al usuario que teclee frases, y las  */
/*  almacene en el fichero “frases.txt”. Acabará cuando el usuario pulse      */
/*  Intro sin teclear nada. Después deberá mostrar el contenido del fichero.  */
/*                                                                            */
/*                                                                            */
/*                       ;}          ;;} ;;}++                           ;}   */
/*                       ;;'} ;\;}    ;;;;} ;} ;--/ ;;;} ;\/} ,;;\ ;;;\ ;;;}  */
/*                       ;;;} `;;}     ;;}  ;} ;;;, ;}   ;;;} `;;/ ;};}  ;}   */
/*                           .,;'                                             */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE*	fichero;
	char	nombre[11] = "frases.txt";
	char	frase[100];

	fichero = fopen(nombre, "wt");

	if (fichero == NULL)
	{
		printf("Ha habido un problema al crear el fichero.\n");
		exit(1);
	}

	printf("Este programa almacena frases en un fichero de texto.\n"
		"Al terminar cada frase pulse \"Intro\".\n"
		"Si no desea almacenar más frases pulse \"Intro\"\n.");
	
	do
	{
		fgets(frase, 100, stdin);
		if (strcmp(frase, "\n") != 0) fputs(frase, fichero);
	}
	while (strcmp(frase, "\n") != 0);
	
	fclose(fichero);
	fichero = fopen(nombre, "rt");
	
	while (! feof(fichero))
	{
		fgets(frase, 100, fichero);
		if (! feof(fichero)) printf("%s", frase);
	}
}
