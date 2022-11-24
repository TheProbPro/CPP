#include "Loan.h"
#include <cmath>
#include <iomanip>

// Default constructor
Loan::Loan()
{
    //nul inialiseres
    _debt = 0;
    _years = 0;
    _paymentsPerYear = 0;
    _interestRate = 0;
}

// Vores specialiseret constructor
Loan::Loan(double debt, int years, int paymentsPerYear, double interestRate){
    //assigner memebervariablerne til værdierne af parametrene
    _debt = debt;
    _years = years;
    _paymentsPerYear = paymentsPerYear;
    _interestRate = interestRate;
}

// Get og set metode for Years
int Loan::getYears() const{
    return _years;
}

void Loan::setYears(int years){
    _years = years;
}

// Get og set metode for payments per year
int Loan::getPaymentPerYear() const{
    return _paymentsPerYear;
}

void Loan::setPaymentsPerYear(int paymentsPerYear){
    _paymentsPerYear = paymentsPerYear;
}

// Get og set metode for debt
double Loan::getDebt() const{
    return _debt;
}

void Loan::setDebt(double debt){
    _debt = debt;
}

// Get og set metode for rente
double Loan::getInterestRate() const{
    return _interestRate;
}

void Loan::setInterestRate(double rate){
    _interestRate = rate;
}

//Calculate the total repayment of a loan including the interest
double Loan::totalPayment() const{
    //Bruger ydelsesformlen fra opgavebeskrivelsen til at få den betaling der laves x-antal gange på et år, i x-antal år,
    //og ganger den med det x-antal gange om året og hvor mange år der betales tilbage i for at få det fuldebeløb med renter.
    double ydelse = _debt * ((_interestRate/_paymentsPerYear) / (1 - pow((1 + (_interestRate/_paymentsPerYear)), -(_years * _paymentsPerYear))));
    double totaldebt = ydelse * (_years * _paymentsPerYear);
    return totaldebt;
}

//Calculate the total interest of a loan for all the years
double Loan::totalInterest() const{
    //Bruger totalPayment metoden og subtraktere den med det beløb man låner for at få hvor meget af det fulde beløb der er renter.
    return totalPayment() - _debt;
}

//Calculate the total net interest of a loan after refund
double Loan::totalInterestTaxDeducted(double taxDeductionRate) const{
    //Bruger metoden totalInterest og ganger den med 1-den procentdel man kan trække fra i skat så man får den Interest man ender med at betale.
    return totalInterest() * (1-taxDeductionRate);
}

//output the periodical payments with unpaid balance, paid interest and repayment
//of each payment to stream object ost
void Loan::outputPeriodicalPayments(std::ostream& ost, double *arr) const{

    double restgaeld = _debt;

    //Ydelsen vores 1 søjle skal indeholde
    double ydelse = _debt * ((_interestRate/_paymentsPerYear) / (1 - pow((1 + (_interestRate/_paymentsPerYear)), -(_years * _paymentsPerYear))));
    //Assigner ydelse til første søjle i arrayet
    for(int i = 0; i < (_years * _paymentsPerYear); i++){
        *arr[0][i] = ydelse;

        //Udregner og assigner renteudgift til den 2 søjle i arrayet
        if(i == 0){
            *arr[1][i] = _debt * (_interestRate / _paymentsPerYear);
        } else
            *arr[1][i] = *arr[3][i-1] * (_interestRate / _paymentsPerYear);


        //Udregner og assigner afdrag i 3 søjle i arrayet
        *arr[2][i] = ydelse - *arr[1][i];

        //Assigner restgæld til 4 søjle i arrayet
        restgaeld = restgaeld - *arr[2][i];
        *arr[3][i] = restgaeld;
    }

    ost << std::setw(10) << "Termin:";
    ost << std::setw(17) << "Ydelse:";
    ost << std::setw(17) << "Rente:";
    ost << std::setw(17) << "Afdrag:";
    ost << std::setw(18) << "Restgaeld:" << std::endl;
    for(int i = 0; i < (_years * _paymentsPerYear); i++){
        ost << "| ";
        ost << std::fixed << std::setprecision(2) << std::setw(10) << i + 1;
        ost << " |   ";
        for(int j = 0; j < 4; j++){
            ost << "| ";
            ost << std::fixed << std::setprecision(2) << std::setw(10) << *(*(arr + j) + i);
            ost << " |   ";
        }
        ost << std::endl;
    }
    /*
    ost << std::setw(10) << "Termin:";
    ost << std::setw(17) << "Ydelse:";
    ost << std::setw(17) << "Rente:";
    ost << std::setw(17) << "Afdrag:";
    ost << std::setw(18) << "Restgaeld:" << std::endl;
    for(int i = 0; i < (_years * _paymentsPerYear); i++){
        ost << "| ";
        ost << std::fixed << std::setprecision(2) << std::setw(10) << i + 1;
        ost << " |   ";
        for(int j = 0; j < 4; j++){
            ost << "| ";
            ost << std::fixed << std::setprecision(2) << std::setw(10) << ydelsesforloeb[j][i];
            ost << " |   ";
        }
        ost << std::endl;
    }
*/
}
