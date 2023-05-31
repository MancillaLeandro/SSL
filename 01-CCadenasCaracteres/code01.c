#include <stdio.h>
#include <conio.h>

#define TAM 100

/*
    FUNCIONES

    a - Calcular Y Retornar Longitud De Una Cadena
    b - Convertir Una Cadena A Su Equivalente En Numeros
    c - Convertir Una Cadena De Caracteres A Una Misma Cadena Con Sus Caracteres En Mayuscula
    d - Eliminar De Una Cadena De Caracteres Todas Las Ocurrencias De Un Caracter Dado
    e - Concatenar Al Final De Una Cadena, Una Segunda Cadena Dada
    f - Modificar La Cadena Dada Con La Interseccion De Un Caracter Dado En Una Posicion Determinada
*/

void LongitudCadena(char cadena[]) //FUNCIONA CORRECTAMENTE
{
    int cant = 0;
  
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        cant++;
    }

    printf("La Cadena Tiene: %d Caracteres\n", cant);
}

void ConvertirASCII(char cadena[]) //FUNCIONA CORRECTAMENTE
{
    double ASCII = 0; 
    int aux;

    for (int i = 0; cadena[i] != '\0'; i++)
    {
        aux = cadena[i];

        if (aux < 100)
        {
            ASCII *= 100;
            ASCII += aux;
        }
        else
        {
            ASCII *= 1000;
            ASCII += aux;
        }
    }

    printf("El Equivalente En ASCII Es: %.0f\n", ASCII);
}

void ConvertirAMayuscula(char cadena[]) //FUNCIONA CORRECTAMENTE
{
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] >= 'a' && cadena[i] < 'z')
        {
            cadena[i] = cadena[i] - 32;
        }
    }

    printf("%s\n", cadena);
}

void EliminarCaracter(char cadena[]) //FUNCIONA CORRECTAMENTE
{
    char borrar[1];
    char aux[TAM] = "";
    int j = 0;

    printf("La Cadena Acutal Es: %s\n", cadena);
    printf("Ingrese El Caracter A Borrar: ");
    scanf("%s", borrar);

    for (int i = 0; cadena[i] != '\0'; i++)
    {   
        if (borrar[0] != cadena[i])
        {
            aux[j] = cadena[i];
            j++;
        }
    }

    printf("La Cadena Actual Es: %s\n", aux);
}

void ConcatenarCadenas(char cadena[]) //FUNCIONA CORRECTAMENTE
{
    char cadena2[TAM];
    char cadena3[TAM];
    int j = 0;

    printf("Ingrese Una Cadena: ");
    scanf("%s", cadena2);

    for (int i = 0; cadena[i] != '\0'; i++)
    {
        cadena3[j] = cadena[i];
        j++;
    }

    cadena3[j] = ' ';
    j++;

    for (int i = 0; cadena2[i] != '\0'; i++)
    {
        cadena3[j] = cadena2[i];
        j++;
    }

    printf("La Nueva Cadena Es: %s\n", cadena3);
}

void ModificarCadena(char cadena[]) //FUNCIONA CORRECTAMENTE
{
    char cadena2[TAM];
    char cadena3[TAM];
    char letra[1];
    int j = 0;

    printf("Ingrese La Letra Para Modificar: ");
    scanf("%s", letra);

    for (int i = 0; cadena[i] != letra[0]; i++)
    {
        cadena3[j] = cadena[i];
        j++;
    }

    fflush(stdin);

    printf("Ingrese La Nueva Cadena: %s", cadena3);
    gets(cadena2);

    for (int i = 0; cadena2[i] != '\0'; i++)
    {
        cadena3[j] = cadena2[i];
        j++;
    }
    
    printf("La Nueva Cadena Es: %s\n", cadena3);
}

int main()
{
    int opcion;
    char cadena[TAM];

    printf("Ingrese Una Cadena De Caracteres: ");
    gets(cadena);

    do //MENU DE OPCIONES
    {
        printf("\n**************MENU**************\n\n");
        printf("A - Calcular Longitud De La Cadena\n");
        printf("B - Convertir A ASCII\n");
        printf("C - Convertir A Mayuscula\n");
        printf("D - Eliminar Caracter\n");
        printf("E - Concatenar Cadenas\n");
        printf("F - Modificar Cadena\n\n");
        
        opcion = getch();

        switch (opcion)
        {
        case 65: case 97:
            LongitudCadena(cadena);
            break;
        case 66: case 98:
            ConvertirASCII(cadena);
            break;
        case 67: case 99:
            ConvertirAMayuscula(cadena);
            break;
        case 68: case 100:
            EliminarCaracter(cadena);
            break;
        case 69: case 101:
            ConcatenarCadenas(cadena);
            break;
        case 70: case 102:
            ModificarCadena(cadena);
            break;
        }
    }
    while (opcion != 27);

    return 0;
}
