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
    f - Modificar La Cadena Dada Con La Intersecion De Un Caracter Dado En Una Posicion Determinada
*/

void LongitudCadena(char cadena[])
{
    int cant = 0;
    
  
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        cant++;
    }

    printf("La Cadena Tiene: %d Caracteres\n", cant);
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
            //Funcion B
            break;
        case 67: case 99:
            //Funcion C
            break;
        case 68: case 100:
            //Funcion D
            break;
        case 69: case 101:
            //Funcion E
            break;
        case 70: case 102:
            //Funcion F
            break;
        }
    }
    while (opcion != 27);

    return 0;
}
