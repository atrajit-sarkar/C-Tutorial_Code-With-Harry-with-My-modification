/*
Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab                       
2.5 – 5.0L                               
5.0L - 10.0L                          
Above 10.0L 

Tax  
5% 
20% 
30% 
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/

#include <stdio.h>

int main() {
    float income;
    printf("Enter your income: ");
    scanf("%f", &income);

    if (income > 2.5 && income < 5.0) {
        printf("You will pay 5%% tax.");
    } else if (income >= 5.0 && income < 10.0) {
        printf("You will pay 20%% tax.");
    } else {
        printf("You will pay 30%% tax.");
    }

    return 0;
}
