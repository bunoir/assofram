#include <stdio.h>

#define SCALE_FACTOR (5.0f/9.0f)
#define FREEZING_PT  32.0f

int main(void) {
    float fahr,cels;

    printf("Inserisci i gradi fahrenheit: ");
    scanf("%f", &fahr);
    /* conversione da fahrenheit a celsius 
       jshdjsdjsfj
    lksdsflk jlfdslkfjds /* commento innestato */
    */
    cels = SCALE_FACTOR * (fahr - FREEZING_PT);
    
    printf("Temperatura in gradi celsius: %.1f\n", cels);
    
    return 0;
}
