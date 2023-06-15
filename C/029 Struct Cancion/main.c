/******************************************************************************/
/*                                                                            */
/* -Fecha: 15/06/2023                                                         */
/*                                                                            */
/* -Enunciado: Crear un programa con un "struct" que almacene datos de una    */
/*  canción en formato MP3: Artista, Título, Duración (en segundos), Tamaño   */
/*  del fichero (en KB). Un programa debe pedir los datos de una canción al   */
/*  usuario, almacenarlos en dicho "struct" y después mostrarlos en pantalla. */
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
	struct cancion datosCancion;
	printf("Introduzca los datos de su canción favorita.\nArtista: ");
	fgets(datosCancion.artista, 20, stdin);
	datosCancion.artista[strlen(datosCancion.artista) - 1] = '\0'; //Absorvo \n
	printf("Título: ");
	fgets(datosCancion.titulo, 20, stdin);
	datosCancion.titulo[strlen(datosCancion.titulo) - 1] = '\0';
	printf("Duración en segundos: ");
	scanf("%d", &datosCancion.duracion);
	printf("Tamaño en Kb: ");
	scanf("%d", &datosCancion.tamano);	
	printf("Te encanta la canción %s, de %s, que dura %d segundos y ocupa %d Kb.\n",
			datosCancion.titulo, datosCancion.artista, datosCancion.duracion,
			datosCancion.tamano);
	return 0;
}
