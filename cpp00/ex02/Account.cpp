/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:23:02 by pllucian          #+#    #+#             */
/*   Updated: 2021/12/01 17:37:28 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int		Account::_nbAccounts;
int		Account::_totalAmount;
int		Account::_totalNbDeposits;
int		Account::_totalNbWithdrawals;

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex \
		<< ";amount:" << _amount << ";created\n";
}

Account::Account( void )
{
	_accountIndex = _nbAccounts++;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex \
		<< ";amount:" << _amount << ";created\n";
}

Account::~Account( void )
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex \
		<< ";amount:" << _amount << ";closed\n";
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts \
		<< ";total:" << _totalAmount \
		<< ";deposits:" << _totalNbDeposits \
		<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex \
		<< ";p_amount:" << _amount \
		<< ";deposit:" << deposit;
	if (deposit)
	{
		_amount += deposit;
		_totalAmount += deposit;
		_nbDeposits++;
		_totalNbDeposits++;
	}
	std::cout << ";amount:" << _amount \
		<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex \
		<< ";p_amount:" << _amount \
		<< ";withdrawal:";
	if (withdrawal && withdrawal > _amount)
	{
		std::cout << "refused\n";
		return (false);
	}
	else if (withdrawal && withdrawal < _amount)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
	}
	std::cout << withdrawal << ";amount:" << _amount \
		<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex \
		<< ";amount:" << _amount \
		<< ";deposits:" << _nbDeposits \
		<< ";withdrawals:" << _nbWithdrawals << "\n";
}

void	Account::_displayTimestamp( void )
{
	std::time_t		timer;
	std::tm			*timeinfo;

	std::time(&timer);
	timeinfo = std::localtime(&timer);
	std::cout << "[" << timeinfo->tm_year + 1900 << std::setfill ('0') \
		<< std::setw (2) << timeinfo->tm_mon + 1 \
		<< std::setw (2) << timeinfo->tm_mday << "_" \
		<< std::setw (2) << timeinfo->tm_hour \
		<< std::setw (2) << timeinfo->tm_min \
		<< std::setw (2) << timeinfo->tm_sec << "] ";
}
