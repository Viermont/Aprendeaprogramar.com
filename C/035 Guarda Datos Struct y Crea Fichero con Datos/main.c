/******************************************************************************/
/*                                                                            */
/* -Fecha: 20/10/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crea una agenda que maneje los siguientes datos: nombre,       */
/*  dirección, tlf móvil, email, y día, mes y año de nacimiento (estos tres   */
/*  últimos datos deberán ser números enteros cortos). Deberá tener capacidad */
/*  para 100 fichas. Se deberá poder añadir un dato nuevo, visualizar los     */
/*  nombres de las fichas existentes, o mostrar todos los datos de una persona*/
/*  (se preguntará al usuario cual es el nombre de esa persona que quiere     */
/*  visualizar). Al empezar el programa, leerá los datos de un fichero llamado*/
/*  "agenda.dat." Al terminar, guardará todos los datos en ese fichero.       */
/*                                                                            */
/*                       ;}          ;;} ;;}++                           ;}   */
/*                       ;;'} ;\;}    ;;;;} ;} ;--/ ;;;} ;\/} ,;;\ ;;;\ ;;;}  */
/*                       ;;;} `;;}     ;;}  ;} ;;;, ;}   ;;;} `;;/ ;};}  ;}   */
/*                           .,;'                                             */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	struct
	{
		char		nombre[25];
		char		apellido[25];
		char		calle[25];
		long int	movil;
		char		email[40];
		short		diaNac;
		short		mesNac;
		short		anioNac;
	} agenda[100];

	FILE*	fichero;
	int	opcion;
	int	i = 0;
	int	j;
	char	consulta[25];

	fichero = fopen("agenda.dat", "rt"); 
	
	if (fichero == NULL)
	{	
		printf("\nEl fichero aún no existe.\n\n");
	}
	else
	{
		while (! feof(fichero) && i < 100)
		{
			fscanf(fichero, "%24s %24s %24s %ld %39s %hd %hd %hd",
                		agenda[i].nombre, agenda[i].apellido, agenda[i].calle,
                		&agenda[i].movil, agenda[i].email, &agenda[i].diaNac,
                		&agenda[i].mesNac, &agenda[i].anioNac);
			i++;
		}
		
		fclose(fichero);
	}	

	do
	{
		printf("\nBienvenido a su agenda personal, indique una opción:\n"
			"(1) - Añadir datos de una nueva persona.\n"
			"(2) - Visualizar nombres de las fichas existentes.\n"
			"(3) - Mostrar los datos de una persona.\n"
			"(4) - Salir del programa.\n\n");
		scanf("%d", &opcion);

		switch (opcion)
		{
			case 1:
				if (i < 100)
				{
					printf("Nombre: ");
					scanf("%24s", agenda[i].nombre);
					printf("Apellido: ");
					scanf("%24s", agenda[i].apellido);
					printf("Calle: ");
					scanf("%24s", agenda[i].calle);
					printf("Móvil: ");
					scanf("%ld", &agenda[i].movil);
					printf("Email: ");
					scanf("%39s", agenda[i].email);
					printf("Día de Nacimiento: ");
					scanf("%hd", &agenda[i].diaNac);
					printf("Mes de Nacimiento: ");
					scanf("%hd", &agenda[i].mesNac);
					printf("Año de Nacimiento: ");
					scanf("%hd", &agenda[i].anioNac);
					i++;
				}
				else
				{
					printf("Agenda Llena");
				}

				break;

			case 2:
					for (j = 0; j <= i; j++)
					{
						printf("%s\n", agenda[j].nombre);
					}
				break;

			case 3:
					printf("¿Cuál es el nombre de la persona"
						" que quiere que le muestre?: ");
					scanf("%24s", consulta);
					
					for (j = 0; j <= i; j++)
					{
						if (strcmp(agenda[j].nombre, consulta) == 0)
						{
							printf("Nombre: %s\nApellido:  %s\nCalle: %s\nMóvil:  %ld\nEmail: "
								" %s\nDía de Nacimiento: %hd\nMes de Nacimiento: %hd\nAño de Nacimiento: %hd\n",
                						agenda[j].nombre, agenda[j].apellido, agenda[j].calle,
                						agenda[j].movil, agenda[j].email, agenda[j].diaNac,
                						agenda[j].mesNac, agenda[j].anioNac);
						}
					}
				break;
		}

	}
	while (opcion != 4);

	fichero = fopen("agenda.dat", "wt");
	for (j = 0; j <= i - 1; j++)
	{
		fprintf(fichero, "%24s %24s %24s %ld %39s %hd %hd %hd",
                		agenda[j].nombre, agenda[j].apellido, agenda[j].calle,
                		agenda[j].movil, agenda[j].email, agenda[j].diaNac,
                		agenda[j].mesNac, agenda[j].anioNac);
		if (j < i - 1) fprintf(fichero, "\n");	
	}
	fclose(fichero);
}
