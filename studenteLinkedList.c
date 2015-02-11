#include <stdlib.h>
#include <string.h>

#include "studenteLinkedList.h"

/*
 * Restituisce la lunghezza della lista.
 */
int size(studenteLinkedList list) {
    int r=0;
    
    // TODO Implementa il corpo della funzione
    while(list->next != NULL) {
        r++;
        list = list->next;
    }
    
    return r;
}


/*
 * Restituisce l'elemento alla posizione specificata.
 * La prima posizione è la 0.
 * Se non esiste alcun elemento alla posizione specificata, le stringhe nome e cognome
 * dell'elemento restituito hanno lunghezza zero.
 */
studente getElementAtPosition(studenteLinkedList list, int position) {
    studente r;
    
    // TODO Implementa il corpo della funzione

    int i;
    if(list != NULL && position > 0 && position < size(list))
    {
        for(i = 0; i < position; i++)
            list = list->next;
        strcpy(r->nome, list->s->nome);
        strcpy(r->cognome, list->s->cognome);
    }
    
    return r;
}


/*
 * Inserisce un elemento alla posizione specificata.
 * La prima posizione è la 0.
 * Se la lista è lunga n, gli elementi presenti vanno da 0 a n-1. È possibile
 * comunque aggiungere in posizione n (inserimento in coda).
 * 
 * Restituisce il valore aggiornato del puntatore al primo elemento in caso di successo.
 * Restituice NULL in caso di errore nell'aggiunta dell'elemento.
 */
studenteLinkedList insertElementAtPosition(studenteLinkedList list, int position, studente e) {
    studenteLinkedList r=NULL;
    
    // TODO Implementa il corpo della funzione
    
    int i;
    if(position >= 0 && position < size(list))
    {
        *r = (studenteLinkedList)malloc(sizeof(LLElement));
        if(r != NULL)
        {
            studenteLinkedList *temp = &list;
            for(i = 0; i < position; i++)
                temp = &((*temp)->next);
            strcpy(r->s->nome, e->nome);
            strcpy(r->s->cognome, e->cognome);
            r->next = *temp;
            *temp = r;
        }         
    }

    return r;
}


/*
 * Svuota la lista.
 * Restituisce sempre NULL.
 */
studenteLinkedList empty(studenteLinkedList list) {
    
    // TODO Implementa il corpo della funzione
    
    studenteLinkedList elementDelete;
    while(list != NULL)
    {
        elementDelete = list;
        list = list->next;
        free(elementDelete);
    }
    return NULL;
}
