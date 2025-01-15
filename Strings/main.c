#include <stdio.h>


int main()
{
    char string[5]={"hola"};//para crear un string (cadena de caracteres) es necesario saber cuanto es el espacio que necesitamos almacenar
                            //teniendo en cuenta esto, vamos a poner ese espacio necesitado de caracteres dentro de corchetes agregandole un
                            //caracter mas porque TODOS los strings llevan un caracter nulo que no lo vemos

    printf("%s",string); //para la impresion usamos %s

    return 0;
}
