/*
 * es7-feb.c
 *
 * Esercizio 7 del pdf esercizi-feb2026.pdf
*/
#include <stdio.h>

int main(void) {
    float loan_balance, monthly_payment, interest_rate;
    float monthly_interest_rate, remaining_balance;

    printf("Inserisci l'importo da finanziare: ");
    scanf("%f", &loan_balance);

    printf("Inserisci l'interesse annuo: ");
    scanf("%f", &interest_rate);

    printf("Inserisci il pagamento mensile: ");
    scanf("%f", &monthly_payment);

    /* Calcolo dell'interesse mensile */
    monthly_interest_rate = interest_rate / (100 * 12);

    remaining_balance = loan_balance - monthly_payment + loan_balance * monthly_interest_rate;
    printf("\nRimanenza dopo il primo pagamento: €%.2f\n", remaining_balance);

    loan_balance = remaining_balance;
    remaining_balance = loan_balance - monthly_payment + loan_balance * monthly_interest_rate;
    printf("\nRimanenza dopo il secondo pagamento: €%.2f\n", remaining_balance);
    

    return 0;
}
