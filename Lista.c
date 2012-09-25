//
//  Lista.c
//  
//
//  Created by Julio De Abreu Molina on 24/09/12.
//
//

#include <stdio.h>
#include <stdlib.h>

struct Lista {
    char *elem;
    struct Lista *siguiente;
} ;




void agregar(struct Lista **lista, char *elem) {
    struct Lista *caja,*aux;
    caja = (struct Lista*)malloc(sizeof(struct Lista));
    caja->elem = (char*)malloc(sizeof(char*));
    caja->elem = elem;
    aux = *lista;
    if (*lista==NULL) {
        *lista = caja;
    } else {
        printf("pronto");
    }
}


int main() {
    struct Lista *lista;
    lista = (struct Lista*)malloc(sizeof(struct Lista));
    lista->elem = "holaks";
    struct Lista *aux;
    aux = lista;
    lista->siguiente = (struct Lista*)malloc(sizeof(struct Lista));
    lista = lista->siguiente;
    //lista = (struct Lista*)malloc(sizeof(struct Lista));
    printf("%d",atoi(lista->elem));
   // agregar(lista,"Hola");
    //agregar(lista,"Esto es una prueba");
}