#include "Account.hpp"
#include <iostream>
#include <time.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits = 0;

Account::Account(int initial_deposit)
{
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_amount = initial_deposit;
	_accountIndex = Account::_nbAccounts++;
	_totalAmount += _amount;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<
	";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	_nbAccounts--;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed";
	std::cout << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<
	";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" <<
	_totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" <<
	_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();

	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount <<
	";deposit:" << deposit << ";amount:";
	_amount += deposit;
	std::cout << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();

	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (checkAmount() - withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return (0);
	}
	_nbWithdrawals += 1;
	_amount -= withdrawal;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" <<
	_nbWithdrawals << std::endl;
	return (1);
}

void	Account::_displayTimestamp(void)
{
	time_t now = time(&now);
	tm *ptm = gmtime(&now);

	std::cout << '[' << ptm->tm_year + 1900;
	if (ptm->tm_mon < 10)
		std::cout << '0';
	std::cout << ptm->tm_mon + 1;
	if (ptm->tm_mday < 10)
		std::cout << '0';
	std::cout << ptm->tm_mday << '_';
	std::cout << ptm->tm_hour << ptm->tm_min << ptm->tm_sec << "] ";
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}
