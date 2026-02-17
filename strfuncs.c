#include <stdio.h>

/*
** to_lower
** 
** Transforma la "stringa" str[] in minuscolo
*/
void to_lower(char str[]) {
    int i = 0;

    while(str[i] != '\0') {
        str[i] += (str[i] > 64 && str[i] < 91) ? 32 : 0;
        i++;
    }
}

void to_upper(char str[]) {
    int i = 0;

    while(str[i] != '\0') {        
        str[i] -= (str[i] > 96 && str[i] < 123) ? 32 : 0;
        i++;
    }
}

void to_name(char str[]) {
    int i = 1;

    str[0] -= (str[0] > 96 && str[0] < 123) ? 32 : 0;

    while(str[i] != '\0') {
        str[i] += (str[i] > 64 && str[i] < 91) ? 32 : 0;
        i++;
    }
}

int is_upperchar(char ch) {
    return (ch > 64 && ch < 91) ? 1 : 0;
}

int is_lowerchar(char ch) {
    return (ch > 96 && ch < 123) ? 1 : 0;
}

int is_alphachar(char ch) {
    return is_upperchar(ch) || is_lowerchar(ch);
}

int is_alpha(char str[]) {
    int i = 0;
    int check = 1;

    while(str[i] != '\0') {
        if(!is_alphachar(str[i])) {
            check = 0;
            break;
        }
        i++;
    }
    
    return check;
}

void sanitize(char str[]){

}

int main(void) {
    char mystr[50];

    printf("Inserisci una stringa alfabetica: ");
    scanf("%s", mystr);
    
    if (!is_alpha(mystr)) {
        printf("La stringa deve essere alfabetica (a-z oppure A-Z)\n");
        return 1;
    }

    to_lower(mystr);
    printf("Trasformazione in minuscolo: %s\n", mystr);

    to_upper(mystr);
    printf("Trasformazione in maiuscolo: %s\n", mystr);
 
    to_name(mystr);
    printf("Trasformazione in nome: %s\n", mystr);

    return 0;
}


