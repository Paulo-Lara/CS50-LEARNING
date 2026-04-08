int main()
{
    int torres; //Pongo torres para iniciar el scanf
    printf("How many towers do you want to use?\n");
    printf("Remember that the number has to be between 1 and 8!\n");
    scanf("%d", &torres); // Obtenemos la cantidad que el usuario quiere
    int j = 0;
    int i = 0;
    int k = 0;
    // Aquí puse estos para ayudar a que se cumpla el formato de los # y de los espacios

    while (torres >= 9 || torres <= 0)
    {
        printf("The number should be between 1 and 8, Try again\n");
        scanf("%d", &torres);
        // Si el numero de torres no está entre 1 a 8, se repite
    }

    for (i = 1; i <= torres; i++)
    // i empieza en 1, y mientras sea menos o igual a torres, aumenta.
    {
        for (j = 1; j <= (torres - i); j++)
        {
            printf(" ");
        }
        // se imprimen los espacios antes de los #

        for (k = 1; k <= i; k++)
        {
            printf("#");
        }
        // Se imprimen los #

        printf("  "); // *PARA EL ESPACIO ENTRE LOS DOS*

        for (k = 1; k <= i; k++)
        {
            printf("#");
            //Se vuelven a imprimir # después del espacio
        }
        printf("\n");
        // Se imprime un espacio para que las filas no estén amontonadas
    }
}
