/******************************************************************************/
/*                                                                            */
/* -Fecha: 08/06/2023                                                         */
/*                                                                            */
/* -Enunciado: Crear un programa que pida tu nombre, tu día de nacimiento y   */
/*  tu mes de nacimiento y lo junte todo en una cadena, separando el nombre   */
/*  de la fecha por una coma y el día del mes por una barra inclinada,        */
/*  así: “Juan, nacido el 31/12”.                                             */
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

// Version 2 using the sprintf and sscanf functions.

	char aux1[20];
        char aux2[50];
	int day;
        int month;

        printf("Escribe tu nombre: ");
        fgets(aux1, 20, stdin);
        if (aux1[strlen(aux1) - 1] == '\n')
                aux1[strlen(aux1) - 1] = '\0';
	sprintf(aux2, "%s, nacido el ", aux1);

        printf("Escribe tu día de nacimiento: ");
        fgets(aux1, 4, stdin);
        if (aux1[strlen(aux1) - 1] == '\n')
                aux1[strlen(aux1) - 1] = '\0';
	sscanf(aux1, "%d", &day);

        printf("Escribe tu mes de nacimiento: ");
        fgets(aux1, 4, stdin);
        if (aux1[strlen(aux1) - 1] == '\n')
                aux1[strlen(aux1) - 1] = '\0';
	sscanf(aux1, "%d", &month);

	strcpy(aux1, aux2);
        sprintf(aux2, "%s%d/%d\n", aux1, day, month);
        printf("%s",aux2);

// Version 1 using the sprintf function.

	char persona[50];
	char nombre[30];
	char dia[4];
	char mes[4];

	printf("Escribe tu nombre: ");
	fgets(nombre, 10, stdin);
	if (nombre[strlen(nombre) - 1] == '\n')
		nombre[strlen(nombre) - 1] = '\0';
	printf("Escribe tu día de nacimiento: ");
	fgets(dia, 4, stdin);
	if (dia[strlen(dia) - 1] == '\n')
		dia[strlen(dia) - 1] = '\0';
	printf("Escribe tu mes de nacimiento: ");
        fgets(mes, 4, stdin);
	if (mes[strlen(mes) - 1] == '\n')
		mes[strlen(mes) - 1] = '\0';
	sprintf(persona, "%s, nacido el %s/%s\n", nombre, dia, mes);
	printf("%s", persona);
}
