/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 21:11:56 by rdel-olm          #+#    #+#             */
/*   Updated: 2025/02/09 21:54:31 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>

#include "../includes/Account.hpp"

/**
 * Static members to track overall account data:
 * - `_nbAccounts` tracks the total number of accounts created.
 * - `_totalAmount` stores the total amount across all accounts.
 * - `_totalNbDeposits` counts the total number of deposits made.
 * - `_totalNbWithdrawals` counts the total number of withdrawals made.
 * 
 * Constructor "Account::Account" initializes an account with an initial 
 * deposit.Updates static data members to track the number of accounts and 
 * total amount. Displays a creation message.
 *
 * @param int initial_deposit   The initial deposit amount for the account.
 *
 * @return void                 No return value. Initializes account data.
 * 
 * 
 * Destructor "Account::~Account" displays a message when an account is closed.
 *
 * @return void                 No return value. Cleans up account instance.
 * 
 * 
 * Static method "Account::getNbAccounts" returns the total number of accounts.
 *
 * @return int                  The total number of accounts created.
 * 
 * 
 * Static method "Account::getTotalAmount" returns the total amount across all 
 * accounts.
 *
 * @return int                  The total amount held in all accounts.
 * 
 * 
 * Static method "Account::getNbDeposits" returns the total number of deposits.
 *
 * @return int                  The total number of deposits across all 
 * 								accounts.
 * 
 * 
 * Static method "Account::getNbWithdrawals" returns the total number of 
 * withdrawals.
 *
 * @return int                  The total number of withdrawals across all 
 * 								accounts.
 * 
 * 
 * Static method "Account::displayAccountsInfos" displays summary information
 * about all accounts, including the number of accounts, total amount, 
 * deposits, and withdrawals.
 *
 * @return void                 No return value. Outputs account information.
 * 
 * 
 * Method "Account::makeDeposit" processes a deposit for the account.
 * Updates the account balance and increments deposit counters.
 * Displays deposit information.
 *
 * @param int deposit           The amount to deposit.
 *
 * @return void                 No return value. Updates the account balance.
 * 
 * 
 * The method "Account::makeWithdrawal" attempts to withdraw an amount from 
 * the account. If the balance is insufficient, the withdrawal is refused.
 * 
 * @param int withdrawal        The amount to withdraw from the account.
 * 
 * @return bool                 Returns true if the withdrawal is successful. 
 *                              Returns false if the withdrawal is refused. 
 * 
 * 
 * The method "Account::checkAmount" checks whether the account balance is 
 * negative after a withdrawal.
 * 
 * @return int                  Returns 1 if the balance is negative. 
 *                              Returns 0 otherwise. 
 * 
 * 
 * The method "Account::displayStatus" logs the current status of the account, 
 * including the balance, number of deposits, and number of withdrawals.
 * 
 * @return void                 No return value. Outputs the account's 
 * 								current status.
 * 
 * 
 * The static method "Account::_displayTimestamp" logs the current timestamp 
 * in the format "[YYYYMMDD_HHMMSS]".
 * 
 * @return void                 No return value. Logs the timestamp.
 * 
 */

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" \
	<< this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" \
	<< this->_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << \
	";total:" << Account::getTotalAmount() << \
	";deposits:" << Account::getNbDeposits() << \
	";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" \
	<< this->_amount;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	std::cout << ";deposit:" << deposit << ";amount:" \
	<< this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<  ";p_amount:" << this->_amount;
	this->_amount -= withdrawal;
	if (checkAmount())
	{
		this->_amount += withdrawal;
		std::cout << ";withdrawal:refused" << std::endl;
		return 0;
	}
	_totalAmount -= withdrawal;
	this->_nbWithdrawals += 1;
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount \
	<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return 1;
}

int		Account::checkAmount(void) const
{
	if (this->_amount < 0)
		return 1;
	return 0;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << \
	this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << \
	this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t at_once;

	at_once = time(NULL);
	struct tm *tm_info = localtime(&at_once);
	char buffer[20];
	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", tm_info);
	std::cout << buffer;
}
