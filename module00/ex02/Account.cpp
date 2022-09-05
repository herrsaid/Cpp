
#include "Account.hpp"
#include <ctime>
#include <iostream>
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit)
{
    _displayTimestamp();
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = _nbAccounts;
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "amount:" << _amount << ';';
    std::cout << "created" << std::endl;
    _nbAccounts++;
    _totalAmount += _amount;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "amount:" << _amount << ';';
    std::cout << "closed" << std::endl;
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

int		Account::checkAmount( void ) const
{
    return (_amount);
}

void    Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "p_amount:" << _amount << ';';
    std::cout << "deposit:" << deposit << ';';
    _amount += deposit;
    _nbDeposits++;
    std::cout << "amount:" << _amount << ';';
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}


void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "account:" << getNbAccounts() << ';';
    std::cout << "total:" << getTotalAmount() << ';';
    std::cout << "deposits:" << getNbDeposits() << ';';
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void    Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "amount:" << _amount << ';';
    std::cout << "deposits:" << _nbDeposits << ';';
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void printdate(int date)
{
    if (date < 10)
        std::cout << 0 << date;
    else
        std::cout << date;
}

void    Account::_displayTimestamp()
{
    std::time_t t;

    t = std::time(nullptr);
    std::tm *time = std::localtime(&t);

    std::cout << '[';
    std::cout << time->tm_year + 1900;
    printdate(time->tm_mon + 1);
    printdate(time->tm_mday);
    std::cout << '_';
    printdate(time->tm_hour);
    printdate(time->tm_min);
    printdate(time->tm_sec);
    std::cout << "] ";

}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "p_amount:" << _amount << ';';
    if (withdrawal > _amount)
    {
        std::cout << "withdrawal:refused" << std::endl;
        return (0);
    }
    _amount -= withdrawal;
    _nbWithdrawals++;
    std::cout << "withdrawal:" << withdrawal << ';';
    std::cout << "amount:" << _amount << ';';
    std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (1);
}
