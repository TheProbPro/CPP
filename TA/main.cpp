#include <iostream>
#include "Loan.h"


int main()
{
    int repeat = 1;
    do{
    //Variabler der skal bruges
    double debt = 0;
    double interestRate = 0;
    int years = 0;
    int paymentsPrYear = 0;

    std::string ans;
    do{
    //Lytter efter et total til lånet
    std::cout << "Enter debt (eks. 1000000): ";
    std::cin >> debt;
    //Lytter efter antal år som beløbet skal betales tilbage på
    std::cout << "Enter number of years (eks. 20): ";
    std::cin >> years;
    //Lytter efter hvor mange gange man vil betale tilbage pr år
    std::cout << "Enter payments pr. year (eks. 4): ";
    std::cin >> paymentsPrYear;
    //Lytter efter en rente
    std::cout << "Insert interest rate (eks. 0.03): ";
    std::cin >> interestRate;
    std::cout << std::endl;

    //Udskriver de værdier du har skrevet ind
    std::cout << "Debt = " << debt << std::endl;
    std::cout << "Years = " << years << std::endl;
    std::cout << "Payments pr. year = " << paymentsPrYear << std::endl;
    std::cout << "Interest rate = " << interestRate << std::endl;
    std::cout << "Interest rate pr. termin = " << interestRate/paymentsPrYear << std::endl;
    std::cout <<  "Is these values correct? (y/n)" << std::endl;
    std::cin >> ans;
    } while(ans.compare("y"));

    //Laver nogle linjeskift
    std::cout << std::endl;
    std::cout << std::endl;

    //Constructor kald/ opretter et objekt af klassen vi kan udfører metoder på
    Loan L1(debt, years, paymentsPrYear, interestRate);

    //Kald total payment
    std::cout << "The total of your loan with inerest is = " << L1.totalPayment() << std::endl;

    //Kald af total interest
    std::cout << "The total interest of your loan is = " << L1.totalInterest() << std::endl;

    //Kald af total interest with tax deducted
    double taxDeductionRate = 0;
    std::cout << "What is your tax deduction rate? (eks. 0.306): ";
    std::cin >> taxDeductionRate;
    std::cout << "Your interest with the tax deduction rate is = " << L1.totalInterestTaxDeducted(taxDeductionRate) << std::endl;

    //Laver nogle linjeskift
    std::cout << std::endl;
    std::cout << std::endl;

    //Udskriver vores array over termin, ydelse, rente, afdrag og rest gæld med funktionen her under
    L1.outputPeriodicalPayments(std::cout, L1.getPeriodicalPayments());

    //Beder om input til om du vil kører programmet igen
    std::cout << "If you want to run the program again writhe 1, if not press anything else.";
    std::cin >> repeat;
    } while(repeat == 1);
    return 0;
}
