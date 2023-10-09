/******************************************************************************/
/*                                                                            */
/* -Fecha: 09/10/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crear un programa que sea capaz de almacenar los datos de 50   */
/*  personas: nombre, dirección, teléfono, edad (usando una tabla de structs).*/
/*  Deberá ir pidiendo los datos uno por uno, hasta que un nombre se          */
/*  introduzca vacío (se pulse Intro sin teclear nada). Entonces deberá       */
/*  aparecer un menú que permita: Mostrar la lista de todos los nombres, las  */
/*  personas de una cierta edad, las personas cuya inicial sea la que el      */
/*  usuario indique, salir del programa (este menú debe repetirse hasta que   */
/*  se escoja la opción de “salir”)                                           */
/*                                                                            */
/*                       ;}          ;;} ;;}++                           ;}   */
/*                       ;;'} ;\;}    ;;;;} ;} ;--/ ;;;} ;\/} ,;;\ ;;;\ ;;;}  */
/*                       ;;;} `;;}     ;;}  ;} ;;;, ;}   ;;;} `;;/ ;};}  ;}   */
/*                           .,;'                                             */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <string.h>

struct {
	char nombre[41];
	char direccion[51];
	unsigned int telefono;
	int edad;
} personas[50];

int main()
{
	int numPersonas = 0;
	int opcion = 0;
	int i;
	char temporal[10];

	do {
		printf("Introduzca los datos de la persona a registrar:\n");

		printf("Nombre: ");
		fgets(personas[numPersonas].nombre, 41, stdin);
		personas[numPersonas].nombre[strlen(personas[numPersonas].nombre)
			 - 1] = '\0';
		if (strlen(personas[numPersonas].nombre) <= 1) break;

		printf("Dirección: ");
		fgets(personas[numPersonas].direccion, 41, stdin);
		personas[numPersonas].direccion[strlen(personas[numPersonas].direccion)
		       	 - 1] = '\0';

		printf("Teléfono:");
                fgets(temporal, 10, stdin);
		sscanf(temporal, "%u", &personas[numPersonas].telefono);

		printf("Edad:");
                fgets(temporal, 4, stdin);
                sscanf(temporal, "%d", &personas[numPersonas].edad);

                numPersonas++;
	}

	while (numPersonas < 50);

	do {
		printf("\nElija una de las siguientes opciones:\n"
			"(1)- Mostrar lista con todos los nombres.\n"
			"(2)- Mostrar personas de una cierta edad.\n"
			"(3)- Mostrar personas con la inicial indicada.\n"
			"(4)- Salir del programa.\n");
		fgets(temporal, 10, stdin);
		sscanf(temporal, "%d", &opcion);

		switch (opcion)
	        {
        	        case 1:
                	        for (i = 1; i <= numPersonas; i++)
                        	{
                                	printf("Nombre persona Nº %d: %s\n", i,
						personas[i - 1].nombre);
                        	}
                        	break;
                	case 2:
				printf("¿Las personas de que edad quiere que le"
					       " mostremos?: " );
				fgets(temporal, 10, stdin);
				sscanf(temporal, "%d", &opcion);
				for (i = 1; i <= numPersonas; i++)
				{
                                	if (personas[i - 1].edad == opcion)
					{
						printf("Nombre persona Nº %d: %s\n",
							 i, personas[i - 1].nombre);
					}
				}
				break;
                	case 3:
				printf("¿Las personas con que inicial quiere que"
					" le mostremos?: " );
                                fgets(temporal, 10, stdin);
				temporal[1] = '\0';
                                for (i = 1; i <= numPersonas; i++)
                                {
                                        if (temporal[0] == personas[i - 1].nombre[0])
                                        {
                                                printf("Nombre persona Nº %d: %s\n",
							 i, personas[i - 1].nombre);
                                        }
                                }
                                break;
                	case 4:
                        	printf("Fin del Programa.\n");
                        	goto salida;
        	}
		
		opcion = 0;
	}
	while (opcion < 1 || opcion > 4);

	salida:

	return 0;
}
