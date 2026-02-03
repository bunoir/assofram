#include <stdio.h>
#include <string.h>

#define MAXSTRING   100

int main(void) {
    char c = 'a';
    char *p;            /* punta ad una variabile di tipo char */
    char s[MAXSTRING];

    p = &c;             /* Assegnamo a p l'indirizzo di c */
    
    printf("%p\n", p);                      /* Stampa l'indirizzo contenuto in p                    */
    printf("%c%c%c\n", *p, *p + 1, *p + 2); /* *p recupera il contenuto dalla memoria a cui p punta */   
    strcpy(s, "ABC");                       /* Copia in s la stringa "ABC" (aggiungendo \0)         */
    
    /* NOTA: s è un array, ma è ANCHE un puntatore! */
    /* s punta alla locazione di memoria di s[0]    */
    printf("%s %c%c%s\n", s, *s + 6, *s + 7, s + 1);
    
    /* Imposta nuovo contenuto in s */
    strcpy(s, "she sells sea shells by seashore");
    p = s + 14; /* punta alla locazione di memoria di s[0] a cui aggiunge 14 */  

    /* Scorre p (ma p punta ad s[0] + 14) e modifica il contenuto delle      */
    /* locaizoni di memoria, modificando quindi s!                           */
    for( ; *p != '\0'; ++p) {
        if (*p == 'e') *p = 'E';
        if (*p == ' ') *p = '\n';
    }
    /* Prova che s è stato modificato */
    printf("%s\n", s);

    return 0;
}
