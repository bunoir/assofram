#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    char name[50], c;
    int i;
    
    srand(time(NULL));
    
    for(i = 0; i < 50; ++i) name[i] = '*';
        
    printf("Stringa random: %s\n\n", name);
    
    printf("Ciao! Come ti chiami? ");
    i = 0;
    while((c = getchar()) != '\n') {
        if(isalpha(c)) {
            name[i] = c;
            ++i;
        } else {
            putchar('\b');
            putchar(' ');
            putchar('\b');
        }
    }
    
    name[i] = '\0';
    
    printf("\nL'utente ha terminato l'input!\n");
    printf("L'utente ha inserito %i caratteri\n", i);
    printf("Il nome inserito è: %s\n", name);
    
    for(i = 0; i < 50; ++i)
        putchar(name[i]);
    
    return 0;
}
