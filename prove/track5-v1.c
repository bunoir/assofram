#include <stdio.h>
#include <string.h>

int main(void) {
    char binary[30];
    int  decimal = 0;
    int  i = 0;
    int  digit;

    /* Chiede all'utente l'inserimento della "stringa binaria" */
    printf("Inserisci un numero in formato binario: ");
    scanf("%s", binary);

    /* Conversione da binario a decimale */
    while(binary[i] != '\0') {
        digit = (binary[i] == '0') ? 0 : 1;
        decimal = decimal * 2 + digit;
        i++;
    }

    /* Stampa il valore decimale */
    printf("Valore decimale: %d\n", decimal);

    return 0;
}
