#include <stdio.h>

int main(void)
{
    int width, height, length, volume, weight;

    /* imposto le dimensioni del pacco */
    width = 10;
    height = 8;
    length = 12;

    /* calcolo il volume del pacco, memorizzando il valore in volume */
    volume = width * height * length;

    /* 
       calcolo il peso dimensionale: volume/166 e memorizzo il valore
       nella variabile weight
    */
    weight = (volume + 165) / 166;

    /* mostro in output il peso dimensionale della spedizione */
    printf("Il peso dimensionale è: %d\n", weight);
    
    return 0;
}
