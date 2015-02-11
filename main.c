#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "studenteLinkedList.h"

const char fname[]="studenti.dat";  // Nome del file di input

int main(int argc, char** argv) {
    FILE *inputFile;                // file di input
    studente studenteDaAggiungere, studenteInLista;
    studenteLinkedList list=NULL;   // lista degli studenti
    int n;                          // numero degli elementi nella lista
    int i = 0;
    // Apertura del file di lettura
    inputFile = fopen(fname, "rb");
    if(inputFile == NULL) {
        fprintf(stderr, "Impossibile aprire il file %s in lettura\n", fname);
        exit(-1);
    }
    
    // Lettura degli elementi dal file ed inserimento ordinato
    while(fread(&studenteDaAggiungere, sizeof(studente), 1, inputFile) == 1) {
        // studenteDaAggiungere contiene i dati dello studente letto
        
        // TODO Implementare il codice per l'inserimento in ordine del nuovo elemento
        
        
    }
    fclose(inputFile);
    
    // Stampa della lista ordinata a schermo
    n = size(list);
    for(i=0; i<n; i++) {
        studenteInLista = getElementAtPosition(list, i);
        printf("%s; %s\n", studenteInLista.cognome, studenteInLista.nome);
    }
    
    // Liberare sempre la memoria, quando non più necessaria.
    list = empty(list);
    
    return (EXIT_SUCCESS);
}

