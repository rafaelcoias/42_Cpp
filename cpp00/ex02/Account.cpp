#include "Account.hpp"
#include <ctime>
#include <iostream>

typedef std::string	str;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void) {}

Account::Account(int initial_deposit) {
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += _amount;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts( void ) {
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {
    return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) {
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
    return (Account::_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void ) {
    std::cout << "[" << time(NULL) << "] ";
}

int		Account::checkAmount( void ) const {
    return (_amount > 0);
}

void	Account::makeDeposit( int deposit ) {
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    _amount += deposit;
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _nbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "widthdrawal:" << withdrawal << ";";
    if (withdrawal > _amount) {
        std::cout << "refused" << std::endl;
		return (false);
    }
    _amount -= withdrawal;
    _totalNbWithdrawals++;
    _nbWithdrawals++;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_widthdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}

void	Account::displayStatus( void ) const {
    Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void ) {
    Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}