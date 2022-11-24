#ifndef LOAN_H
#define LOAN_H
#include <iostream>

class Loan
{
public:
    //Standard constructor
    Loan();

    //Skal initialisere Loan med parametre
    Loan(double debt, int years, int paymentsPerYear, double interestRate);

    //Returns the number of years the loan lasts
    int getYears() const;
    void setYears(int years);

    //Amount of payments per year (terminer)
    int getPaymentPerYear() const;
    void setPaymentsPerYear(int paymentsPerYear);

    //Debt
    double getDebt() const;
    void setDebt(double debt);

    //Rente
    double getInterestRate() const;
    void setInterestRate(double rate);

    //Calculate the total interest of a loan for all the years
    double totalInterest() const;

    //Calculate the total repayment of a loan including the interest
    double totalPayment() const;

    //Calculate the total net interest of a loan after refund
    double totalInterestTaxDeducted(double taxDeductionRate) const;

    //Bankers rounding metode
    double bankerRounding(double value) const;

    //Laver en double pointer til vores array
    double** getPeriodicalPayments();

    //output the periodical payments with unpaid balance, paid interest and repayment
    //of each payment to stream object ost
    void outputPeriodicalPayments(std::ostream& ost, double **array) const;

private:
    //Membervariable
    double _debt, _interestRate;
    int _years, _paymentsPerYear;
};

#endif // LOAN_H
