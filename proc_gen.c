//
//  proc_gen.c
//  
//
//  Created by Julio De Abreu Molina on 24/09/12.
//
//

#include <stdio.h>
#include <stdlib.h>

char **lectura(char *filename) {
    FILE *archivo;
    char **lineas;
    lineas = (char**)malloc(sizeof(char*));
    archivo = fopen(filename,"r");
    if (archivo==NULL) {
        printf("Error al Abrir el Archivo. Archivo no existente.");
        exit(1);
    } else {
        while (!feof(archivo)) {
            char *linea;
            linea = (char*)malloc(sizeof(char));
            fgets(linea,1000,archivo);
            **lineas = *linea;
            lineas = lineas + sizeof linea;
        }
    }
    return lineas;

}




               
int main() {
    char **productos;
    productos = (char**)malloc(sizeof(char*));
    productos=lectura("prueba.txt");
                
}