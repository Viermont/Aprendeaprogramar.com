/******************************************************************************/
/*                                                                            */
/* -Fecha: 11/10/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crea un programa que vaya leyendo las frases que el usuario    */
/*  teclea y las guarde en un fichero de texto llamado "registroDeUsuario.txt"*/
/*  Terminará cuando la frase introducida sea "fin"("fin" no se guardará).    */
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

int main()
{
	FILE* fichero;
	char frase[40];

	fichero = fopen("registroDeUsuario.txt", "wt");
	printf("Teclee la frase que desee guardar en el fichero y pulse ENTER.\n"
		"Teclee tantas frases como desee. Para finalizar escriba \"fin\"\n");
	
	do
	{
		fgets(frase, 40, stdin);
		if (strcmp(frase, "fin\n") != 0) fputs(frase, fichero);
	}
	while (strcmp(frase, "fin\n") != 0);
	
	fclose(fichero);
	
return 0;
}
