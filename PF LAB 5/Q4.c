#include <stdio.h>

int main()
{
    int income;
    float TaxAmount, NetIncome;
    
    printf("Enter your income: ");
    scanf("%d", &income); 

    if (income > 0 && income <= 250000) {
        printf("No tax!\n");
    } else if (income > 250000 && income <= 500000) {
        TaxAmount = income * 0.05; 
        NetIncome = income - TaxAmount; 
    } else if (income > 500000 && income <= 1000000) {
        TaxAmount = income * 0.20;
        NetIncome = income - TaxAmount;
    } else if (income > 1000000) {
        TaxAmount = income * 0.30;
        NetIncome = income - TaxAmount;
    } else
        printf("Entered income must be greater than 0");
    
    printf("Income: %d\n", income);
    printf("TaxAmount: %.2f\n", TaxAmount);
    printf("NetIncome: %.2f\n", NetIncome);
    
    return 0;
}	
