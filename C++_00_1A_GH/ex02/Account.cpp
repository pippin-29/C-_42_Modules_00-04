/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:17:13 by dhadding          #+#    #+#             */
/*   Updated: 2024/01/03 13:21:32 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

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

Account::Account( int initial_deposit ) : 
										_accountIndex(_nbAccounts++),
										_amount(initial_deposit),
										_nbDeposits(0),
										_nbWithdrawals(0)
{
	_totalAmount += initial_deposit;
	_totalNbDeposits += 0;
	_totalNbWithdrawals += 0;
}

Account::~Account( void )
{
	// This would be a good time to get some new ram :)
	// Nothing is required here, as C++ has a degree of autonomy
	// when it comes to automatic deallocation.
}

void	Account::makeDeposit( int deposit )
{
	
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits += 1;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_amount - withdrawal < 0)
		return (false);
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals += 1;
	_totalAmount -= withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount;

    if (_nbDeposits == 0 && _nbWithdrawals == 0) {
        std::cout << ";created" << std::endl;
    } else {
        std::cout << ";deposits:" << _nbDeposits
                  << ";withdrawals:" << _nbWithdrawals << std::endl;
    }
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
    std::time_t currentTime = std::time(nullptr); // Gets current time in seconds since Jan 1 1970 UTC
    
	std::tm *localTime = std::localtime(&currentTime); // Converts the current time to tm structure reprsenting the local time


	// Display - 
    std::cout << "["
              << std::setw(4) << std::setfill('0') << (localTime->tm_year + 1900)
              << std::setw(2) << std::setfill('0') << (localTime->tm_mon + 1)
              << std::setw(2) << std::setfill('0') << localTime->tm_mday << "_"
              << std::setw(2) << std::setfill('0') << localTime->tm_hour
              << std::setw(2) << std::setfill('0') << localTime->tm_min
              << std::setw(2) << std::setfill('0') << localTime->tm_sec
              << "] ";
}