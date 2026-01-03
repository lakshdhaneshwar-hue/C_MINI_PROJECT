#include <stdio.h>

int main() {
    double loanAmount;
    double annualRate;
    int months;

    double monthlyRate;
    double emi;
    double power = 1.0;

    // Taking user input
    printf("Enter loan amount: ");
    scanf("%lf", &loanAmount);

    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &annualRate);

    printf("Enter loan tenure (in months): ");
    scanf("%d", &months);

    // Convert annual rate to monthly rate
    monthlyRate = annualRate / (12 * 100);

    // Calculate (1 + r)^n using loop
    for (int i = 0; i < months; i++) {
        power = power * (1 + monthlyRate);
    }

    // EMI calculation
    emi = (loanAmount * monthlyRate * power) / (power - 1);

    // Output
    printf("\n------ EMI DETAILS ------\n");
    printf("Monthly EMI = %.2lf\n", emi);
    printf("Total Payment = %.2lf\n", emi * months);
    printf("Total Interest = %.2lf\n", (emi * months) - loanAmount);

    return 0;
}