/******************************************************************************/
/*                                                                            */
/* -Fecha: 10/10/2023                                                         */
/*                                                                            */           
/* -Enunciado: Crear un programa que cree un array de 7 números enteros y lo  */
/*  ordene con cada uno de estos tres métodos: método de burbuja, selección   */
/*  directa e inserción directa (mostrando el resultado de los pasos          */
/*  intermedios.                                                              */
/*                                                                            */
/*                       ;}          ;;} ;;}++                           ;}   */
/*                       ;;'} ;\;}    ;;;;} ;} ;--/ ;;;} ;\/} ,;;\ ;;;\ ;;;}  */
/*                       ;;;} `;;}     ;;}  ;} ;;;, ;}   ;;;} `;;/ ;};}  ;}   */
/*                           .,;'                                             */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>

int main()
{
	int	num[7];
	int	i;
	int	j;
	char	letra = 96;
	int	aux;
	int	metodo;
	int	menor;

	printf("A continuación le solicitaremos 7 números enteros.\n");

	for (i = 1; i <= 7; i++)
	{
		printf("%c: ", letra + i);
		scanf("%d", &num[i - 1]);
	}

	printf("\nLos números introducidos son: ");

	for (i = 1; i <= 7; i++)
        {
                printf("%c:%d ", letra + i, num[i - 1]);
        }

	do
	{
		printf("\n\n¿Qué algoritmo de ordenación desea utilizar?\n"
			"(1) - Método de burbuja.\n"
			"(2) - Selección directa.\n"
			"(3) - Inserción directa.\n"
			"(4) - Ninguno, deseo salir.\n\n");
		scanf("%d", &metodo);
	}
	while (metodo < 1 || metodo > 4);

	switch (metodo)
	{
		case 1:
			for (i = 0; i < 7; i++)
			{
				for (j = i + 1; j < 7; j++)
				{
					if (num[i] > num[j])
					{
						aux = num[i];
						num[i] = num[j];
						num[j] = aux;
					}
				}

				printf("\nVuelta %d del bucle: ", i + 1);

			        for (j = 1; j <= 7; j++)
        			{
                			printf("%c:%d ", letra + j, num[j - 1]);
        			}
			}

			printf("\n\nLos números introducidos ordenados son: ");

		        for (i = 1; i <= 7; i++)
        		{
                		printf("%d ", num[i - 1]);
        		}

			printf("\n");

			break;
		case 2:
			for (i = 0; i < 6; i++)
			{
				menor = i;

				for (j = i + 1; j <= 6; j++)
				{
					if (num[j] < num[menor])
					{
						menor = j;
					}
				}
			
				if (menor != i)
				{
					aux = num[i];
					num[i] = num[menor];
					num[menor] = aux;
				}

				printf("\nVuelta %d del bucle: ", i + 1);

                                for (j = 1; j <= 7; j++)
                                {
                                        printf("%c:%d ", letra + j, num[j - 1]);
                                }

			}
			printf("\n\nLos números introducidos ordenados son: ");

                        for (i = 1; i <= 7; i++)
                        {
                                printf("%d ", num[i - 1]);
                        }

			printf("\n");

			break;
		case 3:
			for (i = 1; i <= 7; i++)
			{
				j = i - 1;

				while (j >= 1 && num[j - 1] > num[j])
				{
					aux = num[j];
					num[j] = num[j - 1];
					num[j - 1] = aux;

					j = j - 1;
				}

				printf("\nVuelta %d del bucle: ", i);

                                for (j = 1; j <= 7; j++)
                                {
                                        printf("%c:%d ", letra + j, num[j - 1]);
                                }

			}

			printf("\n\nLos números introducidos ordenados son: ");

                        for (i = 1; i <= 7; i++)
                        {
                                printf("%d ", num[i - 1]);
                        }

                        printf("\n");

                        break;

	}

	return 0;
}
