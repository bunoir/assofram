/*
**  cnt_letters.c
**
**  Conta le lettere maiuscole presenti in un file
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int     c, i, letters[26];
    FILE    *ifp, *ofp;

    if (argc != 3) {
        printf("\n%s%s%s\n\n%s\n%s\n\n", "Uso: ", argv[0], " infile outfile", "Le lettere maiuscole presenti in infile saranno contate.", "Il risultato sara scritto in outfile.");
        exit(1);
    }
    
    ifp = fopen(argv[1], "r");
    ofp = fopen(argv[2], "w");

    /* Inizializza letters[] con valori zero */
    for(i = 0; i < 26; ++i) letters[i] = 0;

    while ((c = getc(ifp)) != EOF)
        /* BONUS
            1. Controlla se il carattere letto è unaa lettera letta è minuscola
            2. Nel caso, transformala in maiuscola
        */
        if ((c >= 'A') && (c <= 'Z'))
            ++letters[c - 'A'];

    for(i = 0; i < 26; ++i) {
        if(i % 6 == 0)  putc('\n', ofp);

        fprintf(ofp, "%c:%5d     ", 'A' + i, letters[i]);
    }
    putc('\n', ofp);
    
    fclose(ifp);
    fclose(ofp);

    return 0;
}
