#include <stdio.h>

int main(void) {
    char str[50];
    int i = 0;

    printf("Inserisci un nome: ");
    scanf("%s", str);

    while(str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        
        i++;
    }
    
    printf("Nome in minuscolo: %s\n", str);

    return 0;
}
