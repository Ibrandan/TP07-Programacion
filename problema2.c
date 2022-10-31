#include <stdio.h>
#include <ctype.h>

char isvowel(char letra);

int main(void) {

    char cad[100], *punt;
    int consonantes = 0;


    puts("Ingrese una linea de texto");
    gets(cad);

    punt = &cad[0];

    while (*punt != '\0')
    {
        if (isalpha(*punt) && isvowel(*punt) == 0) {
            printf("%c", toupper(*punt));
            consonantes++;
        } else {
            printf("%c", *punt);
        }
        punt++;
    }

    punt = cad;

    printf("\nDireccion en memoria de punt: %d \n" , &punt);
    printf("Direccion en memoria de arreglo: %d \n", punt);

    printf("Contenido de la quinta celda del arreglo: %c \n",cad[4]);
    printf("Contenido de la quinta celda del arreglo: %c \n", *(punt + 4));

    punt = cad;

    printf("Direccion de punt + 3: %d \n", punt + 3);
    printf("Contenido de punt + 3: %c \n", *(punt + 3));

    while (*punt != '\0')
    {
        printf("%c", *punt);
        punt++;
    }
    

    return 0;

}

char isvowel(char letra) {
    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': 
        return 1;
    default:
        return 0;
    }    
}