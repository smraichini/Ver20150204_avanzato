#include <stdio.h>
#include <stdlib.h>

#include "dummyMath.h"
#include "classe.h"

int main(int argc, char** argv) {
    float f;
    char scelta = 's';
    char nome[NOME_MAXLEN+1];
    int alunni;
    int i;
    
    // SEZIONE 1 ------------------------------------------
    // ----------------------------------------------------
    printf("Inserisci un valore decimale da raddoppiare: ");
    scanf("%f", &f);
    // TODO Correggi l'implementazione della procedura raddoppia
    raddoppia(f);
    printf("Il valore raddoppiato è: %f\n", f);
    
    // SEZIONE 2 ------------------------------------------
    // ----------------------------------------------------
    // Inserimento dei dati
    while(scelta == 's') {
        printf("\nInserisci il nome della classe (max %d caratteri): ", NOME_MAXLEN);
        scanf("%s", nome);
        printf("Inserisci il numero degli alunni: ");
        scanf("%d", &alunni);
        
        // TODO Inserisci qui codice e funzioni per l'aggiunta della classe
        
        printf("Vuoi aggiungere un'altra classe? (s/n) ");
        getchar();  // Non modificare (buffered read)
        scelta = getchar();
    }
    
    // Stampa delle informazioni, in ordine _INVERSO_ rispetto a quello di inserimento
    // TODO Modifica il codice seguente per eseguire quanto richiesto.
    // TODO Aggiungi eventuali funzioni a tuo piacimento
    printf("\nStampa degli elementi in ordine inverso rispetto all'inserimento\n");
    for(i=0; i<3; i++) {
        printf("%s; %d\n", nome, alunni);
    }
    
    return (EXIT_SUCCESS);
}
