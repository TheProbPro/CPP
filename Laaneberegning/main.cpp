#include <iostream>
#include "Loan.h"


int main()
{
    //Variabler der skal bruges
    double debt = 0;
    double interestRate = 0;
    int years = 0;
    int paymentsPrYear = 0;

    //Lytter efter et total til lånet
    std::cout << "Enter value of loan: ";
    std::cin >> debt;
    //Lytter efter en rente
    std::cout << "Insert interest rate: ";
    std::cin >> interestRate;
    //Lytter efter antal år som beløbet skal betales tilbage på
    std::cout << "Enter number of years, the loan will be payed back over: ";
    std::cin >> years;
    //Lytter efter hvor mange gange man vil betale tilbage pr år
    std::cout << "How many times a year do you wish to pay back your loan?: ";
    std::cin >> paymentsPrYear;

    //Constructor kald/ opretter et objekt af klassen vi kan udfører metoder på
    Loan L1(debt, years, paymentsPrYear, interestRate);

    //Kald total payment
    std::cout << "The total of your loan with inerest is = " << L1.totalPayment() << std::endl;

    //Kald af total interest
    std::cout << "The total interest of your loan is = " << L1.totalInterest() << std::endl;

    //Kald af total interest with tax deducted
    double taxDeductionRate = 0;
    std::cout << "What is your tax deduction rate?: ";
    std::cin >> taxDeductionRate;
    std::cout << "Your interest with the tax deduction rate is = " << L1.totalInterestTaxDeducted(taxDeductionRate) << std::endl;

    double ptr[L1.getYears() * L1.getPaymentPerYear()][4];
    double (*p)[4] = ptr;




    //Udskriver et skema med funktionen her under
    L1.outputPeriodicalPayments(std::cout, *p);

    return 0;
}
