/******************************************************************************/
/*                                                                            */
/* -Fecha: 02/10/2023                                                         */
/*                                                                            */
/* -Enunciado: Crear un programa con un "struct" que almacene datos de hasta  */
/*  100 canciones en formato MP3: Artista, Título, Duración (en segundos),    */
/*  tamaño del fichero (en KB). El programa Deberá tener un menú que permita  */
/*  las opciones: añadir una nueva canción, mostrar el título de todas las    */
/*  canciones, buscar la canción que contenga un cierto texto (en el artista  */
/*  o en el título).                                                          */
/*                                                                            */
/*                       ;}          ;;} ;;}++                           ;}   */
/*                       ;;'} ;\;}    ;;;;} ;} ;--/ ;;;} ;\/} ,;;\ ;;;\ ;;;}  */
/*                       ;;;} `;;}     ;;}  ;} ;;;, ;}   ;;;} `;;/ ;};}  ;}   */
/*                           .,;'                                             */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <string.h>

struct cancion
{
	char artista[20];
	char titulo[20];
	int duracion;
	int tamano;
};

int main()
{
	struct cancion datosCancion[101];
	int opcion;
	int numCanciones = 0;
	int i;
	char buscar[20]; 

	do
	{
		printf("\nAlmacén de Canciones.\n\n1-Añadir nueva canción.\n2-Mostrar"
			" el título de todas las canciones.\n3-Buscar la canción "
			"que contenga cierto texto.\n4-Salir\n\nIndique la opción "
			"numérica que desee: ");
		scanf("%d", &opcion);
		getchar(); // Absorve intro

		if (opcion == 1)
		{
			printf("\nIntroduzca los datos de la canción.\nArtista: ");
			fgets(datosCancion[numCanciones].artista, 20, stdin);
			datosCancion[numCanciones].artista[strlen(datosCancion[numCanciones].artista)
				- 1] = '\0'; // Absorve intro y sustituye
			printf("Título: ");
			fgets(datosCancion[numCanciones].titulo, 20, stdin);
			datosCancion[numCanciones].titulo[strlen(datosCancion[numCanciones].titulo)
				- 1] = '\0'; // Absorve intro y sustituye
			printf("Duración en segundos: ");
			scanf("%d", &datosCancion[numCanciones].duracion);
			printf("Tamaño en Kb: ");
			scanf("%d", &datosCancion[numCanciones].tamano);	
			printf("La canción %s, de %s, que dura %d segundos y ocupa %d Kb"
				" ha sido almacenada con éxito.\n",
				datosCancion[numCanciones].titulo,
				datosCancion[numCanciones].artista,
				datosCancion[numCanciones].duracion,
				datosCancion[numCanciones].tamano);
			numCanciones++;
		}

		if (opcion == 2)
		{
			printf("\nCanciones almacenadas:\n");

			for (i = 0; i < numCanciones; i++)
			{
				printf("%d - %s\n", i + 1, datosCancion[i].titulo);
			}
		}

		if (opcion == 3)
		{
			printf("\nIntroduzca el texto a buscar: ");
			fgets(buscar, 20, stdin);
			buscar[strlen(buscar) - 1] = '\0';
			printf("\nCanciones con el texto indicado:\n");
			
			for (i = 0; i < numCanciones; i++)
			{
				if (strstr(datosCancion[i].titulo, buscar) || strstr(datosCancion[i].artista, buscar))
				{
					printf("%d - %s, de %s.\n", i + 1,
							datosCancion[i].titulo,
							datosCancion[i].artista);
				}
			}
		}
	}
	while (opcion != 4);

	return 0;
}
