/******************************************************************************/
/*                                                                            */
/* -Fecha: 14/06/2023                                                         */
/*                                                                            */
/* -Enunciado: Crear un programa que pida 10 nombres y los memorice. Después  */
/*  deberá pedir que se teclee un nombre y dirá si se encuentra o no entre    */
/*  los 10 que se han tecleado antes. Volverá a pedir otro nombre y a decir   */
/*  si se encuentra entre ellos, y así sucesivamente hasta que se teclee “fin”*/
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
	char nombres[11][20];
	int i;
	int existe = 1;

	for (i = 0; i < 10; i++)
	{
		printf("Escriba el nombre %d de 10: ", i + 1);
		fgets(nombres[i], 20, stdin);
		nombres[i][strlen(nombres[i]) - 1] = '\0'; //Absorvo \n
	}
	
	do
	{
		printf("\nEscriba un nombre a comprobar: ");
		fgets(nombres[10], 20, stdin);
		nombres[10][strlen(nombres[10]) - 1] = '\0'; //Absorvo \n
		for (i = 0; i < 10; i ++)
		{
			if (strcmp(nombres[i], nombres[10]) == 0)
			{
				existe = 0;
				break;
			}
			else existe = 1;
		}
		if (existe == 0)
			printf("El nombre introducido si existe en la memoria\n");
	        else
			printf("El nombre introducido no existe en la memoria\n");
	} while (strcmp(nombres[10], "fin") != 0);
	
	printf("Fin del programa.\n");
	
	return 0;
}
