#include <stdio.h>

void func(int pasquale, int davide);

int main(void)
{
    int x, y;

    x = 3;
    y = 4;

    printf("Il valore di x prima della chiamata di func() è: %i \n", x);
    printf("Il valore di y prima della chiamata di func() è: %i \n", y);

    func(x, y);

    printf("Il valore di x dopo la chiamata di func() è: %i \n", x);
    printf("Il valore di y dopo la chiamata di func() è: %i \n", y);

    return 0;
}

void func(int a, int b)
{
    a = 0;
    b = 0;
}
